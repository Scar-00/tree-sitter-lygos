module.exports = grammar ({
    name: "lygos",
    rules: {
        source_file: $ => repeat($._globals),

	_globals: $ => choice(
	    $.func,
	    $._struct,
        $._impl,
	),

    _struct: $ => seq(
        'struct',
        $.identifier,
        '{',
        repeat(seq($.identifier, ':', $.type, ';')),
        '}',
        ';'
    ),

    _impl: $ => seq(
        'impl',
        $.identifier,
        '{',
        repeat($.func),
        '}'
    ),

    func: $ => seq(
        'fn',
        $.identifier,
        $.fn_args,
        optional(seq('->', $.type)),
        choice($.block, ';')
    ),

    fn_args: $ => seq(
        '(',
        commaSep(seq($.identifier, ':', $.type)),
        ')'
    ),

    block: $ => seq(
        '{',
        repeat($.stmt),
        '}'
    ),

    stmt: $ => choice(
        //$.if_stmt,
        //$.for_stmt,
        seq($.expr, ';'),
    ),

    expr: $ => choice(
        $.ret_expr,
        $.vardelc_expr,
	$.primary
    ),

    ret_expr: $ => seq(
        'return',
        $.expr
    ),

    vardelc_expr: $ => seq(
        'let',
        optional('mut'),
        $.identifier,
        optional(seq(':', $.type)),
        optional(seq(
            '=',
            $.expr
        ))
    ),

    multi: $ => prec(10, seq(
        $.expr,
        choice('==', '<', '>'),
        $.expr
    )),

    additive: $ => prec(9, seq(
        $.expr,
        choice('+', '-'),
        $.expr
    )),

    cond: $ => prec(8, seq(
        $.expr,
        choice('*', '/', '%'),
        $.expr
    )),

    assignment: $ => prec(7, seq(
        $.expr,
        "=",
        $.expr
    )),

    index: $ => prec(6, seq(
        $.expr,
        '[',
        $.expr,
        ']',
    )),

    member: $ => prec(5, seq(
        $.expr,
        choice('.', '->'),
        $.expr
    )),

    call: $ => prec(4, seq(
        $.expr,
        '(',
        commaSep(seq($.expr)),
        ')'
    )),

    resolution: $ => prec(3, seq(
        $.expr,
        '::',
        $.expr
    )),

    unary: $ => prec(2, seq(
        choice('&', '*', '!'),
        $.expr
    )),

    paran: $ => prec(1, seq(
        '(',
        $.expr,
        ')'
    )),

    primary: $ => choice(
        $.identifier,
        $.number_literal,
        $.string
    ),

	string: $ => seq(
        choice('L"', 'u"', 'U"', 'u8"', '"'),
        repeat(choice(
            token.immediate(prec(1, /[^\\"\n]+/)),
            $.escape_sequence
        )),
        '"',
    ),

    escape_sequence: $ => token(prec(1, seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    ))),

    primitves: $ => choice(
        'u8',
        'u16',
        'u32',
        'u64',
        'i8',
        'i16',
        'i32',
        'i64',
        'void',
    ),

    type: $ => seq(
        optional(repeat(
            seq(choice('&', '*'), optional(choice('mut', 'const'))),
        )),
        choice($.identifier, $.primitves)
    ),

    identifier: $ => /[a-zA-Z_]\w*/,
    number_literal: $ => {
        const separator = "'";
        const hex = /[0-9a-fA-F]/;
        const decimal = /[0-9]/;
        const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
        const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
        return token(seq(
            optional(/[-\+]/),
            optional(choice('0x', '0b')),
            choice(
            seq(
                choice(
                decimalDigits,
                seq('0b', decimalDigits),
                seq('0x', hexDigits)
            ),
            optional(seq('.', optional(hexDigits)))
            ),
            seq('.', decimalDigits)
            ),
            optional(seq(
            /[eEpP]/,
            optional(seq(
                optional(/[-\+]/),
                hexDigits
            ))
            )),
            repeat(choice('u', 'l', 'U', 'L', 'f', 'F'))
        ))
    },
    }
});

function commaSep (rule) {
    //return seq(rule, repeat(optional(seq(',', rule))))
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}
