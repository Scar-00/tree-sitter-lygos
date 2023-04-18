module.exports = grammar ({
    name: "lygos",
    rules: {
        source_file: $ => repeat($._globals),

	_globals: $ => choice(
	    $.func,
	    //$.struct,
        //$.impl,
	),

    func: $ => seq(
        'fn',
        $.identifier,
        $.fn_args,
        optional(seq('->', $.type)),
        $.block
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
        $.cond_expr,
    ),

    ret_expr: $ => seq(
        'return',
        optional($.expr)
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

    cond_expr: $ => seq(
        $.add_expr,
        choice('==', '<', '>'),
        $.add_expr,
    ),

    add_expr: $ => seq(
        $.mul_expr,
        choice('+', '-'),
        $.mul_expr
    ),

    mul_expr: $ => seq(

    )

    primary: $ => choice(
        $.identifier,
        $.number_literal,
    ),

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
