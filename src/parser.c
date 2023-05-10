#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_struct = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_SEMI = 4,
  anon_sym_RBRACE = 5,
  anon_sym_impl = 6,
  anon_sym_fn = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_return = 12,
  anon_sym_let = 13,
  anon_sym_mut = 14,
  anon_sym_EQ = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DOT = 26,
  anon_sym_COLON_COLON = 27,
  anon_sym_AMP = 28,
  anon_sym_BANG = 29,
  anon_sym_L_DQUOTE = 30,
  anon_sym_u_DQUOTE = 31,
  anon_sym_U_DQUOTE = 32,
  anon_sym_u8_DQUOTE = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token1 = 35,
  sym_escape_sequence = 36,
  anon_sym_u8 = 37,
  anon_sym_u16 = 38,
  anon_sym_u32 = 39,
  anon_sym_u64 = 40,
  anon_sym_i8 = 41,
  anon_sym_i16 = 42,
  anon_sym_i32 = 43,
  anon_sym_i64 = 44,
  anon_sym_void = 45,
  anon_sym_const = 46,
  sym_identifier = 47,
  sym_number_literal = 48,
  sym_source_file = 49,
  sym__globals = 50,
  sym__struct = 51,
  sym__impl = 52,
  sym_func = 53,
  sym_fn_args = 54,
  sym_block = 55,
  sym_stmt = 56,
  sym_expr = 57,
  sym_ret_expr = 58,
  sym_vardelc_expr = 59,
  sym_primary = 60,
  sym_string = 61,
  sym_primitves = 62,
  sym_type = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym__struct_repeat1 = 65,
  aux_sym__impl_repeat1 = 66,
  aux_sym_fn_args_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_string_repeat1 = 69,
  aux_sym_type_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_impl] = "impl",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_void] = "void",
  [anon_sym_const] = "const",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym__globals] = "_globals",
  [sym__struct] = "_struct",
  [sym__impl] = "_impl",
  [sym_func] = "func",
  [sym_fn_args] = "fn_args",
  [sym_block] = "block",
  [sym_stmt] = "stmt",
  [sym_expr] = "expr",
  [sym_ret_expr] = "ret_expr",
  [sym_vardelc_expr] = "vardelc_expr",
  [sym_primary] = "primary",
  [sym_string] = "string",
  [sym_primitves] = "primitves",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__struct_repeat1] = "_struct_repeat1",
  [aux_sym__impl_repeat1] = "_impl_repeat1",
  [aux_sym_fn_args_repeat1] = "fn_args_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_L_DQUOTE] = anon_sym_L_DQUOTE,
  [anon_sym_u_DQUOTE] = anon_sym_u_DQUOTE,
  [anon_sym_U_DQUOTE] = anon_sym_U_DQUOTE,
  [anon_sym_u8_DQUOTE] = anon_sym_u8_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_const] = anon_sym_const,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym__globals] = sym__globals,
  [sym__struct] = sym__struct,
  [sym__impl] = sym__impl,
  [sym_func] = sym_func,
  [sym_fn_args] = sym_fn_args,
  [sym_block] = sym_block,
  [sym_stmt] = sym_stmt,
  [sym_expr] = sym_expr,
  [sym_ret_expr] = sym_ret_expr,
  [sym_vardelc_expr] = sym_vardelc_expr,
  [sym_primary] = sym_primary,
  [sym_string] = sym_string,
  [sym_primitves] = sym_primitves,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__struct_repeat1] = aux_sym__struct_repeat1,
  [aux_sym__impl_repeat1] = aux_sym__impl_repeat1,
  [aux_sym_fn_args_repeat1] = aux_sym_fn_args_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__globals] = {
    .visible = false,
    .named = true,
  },
  [sym__struct] = {
    .visible = false,
    .named = true,
  },
  [sym__impl] = {
    .visible = false,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_args] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ret_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_vardelc_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_primitves] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__impl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(4);
      if (lookahead == 'U') ADVANCE(5);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(126);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(106);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '>') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(159);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(156);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(120);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(108);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead == '"') ADVANCE(99);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '8') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '3') ADVANCE(132);
      if (lookahead == '6') ADVANCE(134);
      if (lookahead == '8') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '3') ADVANCE(133);
      if (lookahead == '6') ADVANCE(135);
      if (lookahead == '8') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(161);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__globals] = STATE(22),
    [sym__struct] = STATE(22),
    [sym__impl] = STATE(22),
    [sym_func] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_impl] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(77), 1,
      sym_expr,
    STATE(3), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [38] = 10,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_string,
    STATE(77), 1,
      sym_expr,
    STATE(4), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [76] = 10,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(30), 1,
      anon_sym_let,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(77), 1,
      sym_expr,
    STATE(4), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(33), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [114] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(56), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [142] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(54), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [170] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(42), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [198] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(80), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [226] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(55), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [254] = 6,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_repeat1,
    STATE(28), 1,
      sym_primitves,
    STATE(43), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [282] = 5,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_type_repeat1,
    STATE(26), 1,
      sym_primitves,
    ACTIONS(42), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(44), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [307] = 8,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(74), 1,
      sym_expr,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [338] = 8,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(83), 1,
      sym_expr,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [369] = 8,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(75), 1,
      sym_expr,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [400] = 3,
    ACTIONS(50), 2,
      anon_sym_mut,
      anon_sym_const,
    ACTIONS(52), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(54), 10,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
      sym_identifier,
  [421] = 8,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(78), 1,
      sym_expr,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [452] = 8,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(60), 1,
      sym_string,
    STATE(82), 1,
      sym_expr,
    STATE(62), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_primary,
    ACTIONS(17), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [483] = 3,
    STATE(18), 1,
      aux_sym_type_repeat1,
    ACTIONS(56), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(59), 10,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
      sym_identifier,
  [503] = 2,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(59), 10,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
      sym_identifier,
  [520] = 2,
    ACTIONS(65), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
    ACTIONS(63), 7,
      anon_sym_RBRACE,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
  [535] = 5,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_struct,
    ACTIONS(72), 1,
      anon_sym_impl,
    ACTIONS(75), 1,
      anon_sym_fn,
    STATE(21), 5,
      sym__globals,
      sym__struct,
      sym__impl,
      sym_func,
      aux_sym_source_file_repeat1,
  [555] = 5,
    ACTIONS(5), 1,
      anon_sym_struct,
    ACTIONS(7), 1,
      anon_sym_impl,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(21), 5,
      sym__globals,
      sym__struct,
      sym__impl,
      sym_func,
      aux_sym_source_file_repeat1,
  [575] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_impl,
      anon_sym_fn,
  [583] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_impl,
      anon_sym_fn,
  [591] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_impl,
      anon_sym_fn,
  [599] = 1,
    ACTIONS(86), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [607] = 1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_impl,
      anon_sym_fn,
  [615] = 1,
    ACTIONS(90), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [623] = 1,
    ACTIONS(92), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [631] = 3,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_func,
      aux_sym__impl_repeat1,
  [642] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_fn,
  [649] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_fn,
  [656] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_fn,
  [663] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_fn,
    STATE(34), 2,
      sym_func,
      aux_sym__impl_repeat1,
  [674] = 4,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      anon_sym_DASH_GT,
    STATE(23), 1,
      sym_block,
  [687] = 4,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [700] = 4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym_string_token1,
    ACTIONS(123), 1,
      sym_escape_sequence,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [713] = 1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_fn,
  [720] = 3,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_func,
      aux_sym__impl_repeat1,
  [731] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      aux_sym_string_token1,
    ACTIONS(134), 1,
      sym_escape_sequence,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [744] = 1,
    ACTIONS(137), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [750] = 3,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_block,
  [760] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_fn_args_repeat1,
  [770] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_fn_args_repeat1,
  [780] = 1,
    ACTIONS(150), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [786] = 3,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [796] = 3,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym__struct_repeat1,
  [806] = 3,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym__struct_repeat1,
  [816] = 3,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [826] = 3,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym__struct_repeat1,
  [836] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_fn_args_repeat1,
  [846] = 1,
    ACTIONS(177), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [852] = 1,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [857] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [862] = 2,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      anon_sym_EQ,
  [869] = 2,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [876] = 2,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_fn_args,
  [883] = 2,
    ACTIONS(193), 1,
      anon_sym_mut,
    ACTIONS(195), 1,
      sym_identifier,
  [890] = 2,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_identifier,
  [897] = 1,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [901] = 1,
    ACTIONS(203), 1,
      sym_identifier,
  [905] = 1,
    ACTIONS(205), 1,
      anon_sym_SEMI,
  [909] = 1,
    ACTIONS(207), 1,
      anon_sym_SEMI,
  [913] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [917] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [921] = 1,
    ACTIONS(213), 1,
      anon_sym_SEMI,
  [925] = 1,
    ACTIONS(215), 1,
      anon_sym_SEMI,
  [929] = 1,
    ACTIONS(217), 1,
      sym_identifier,
  [933] = 1,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [937] = 1,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [941] = 1,
    ACTIONS(223), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
  [949] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
  [953] = 1,
    ACTIONS(229), 1,
      anon_sym_SEMI,
  [957] = 1,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [961] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [965] = 1,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [969] = 1,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [973] = 1,
    ACTIONS(235), 1,
      sym_identifier,
  [977] = 1,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [981] = 1,
    ACTIONS(239), 1,
      sym_identifier,
  [985] = 1,
    ACTIONS(241), 1,
      anon_sym_SEMI,
  [989] = 1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 421,
  [SMALL_STATE(17)] = 452,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 535,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 575,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 591,
  [SMALL_STATE(26)] = 599,
  [SMALL_STATE(27)] = 607,
  [SMALL_STATE(28)] = 615,
  [SMALL_STATE(29)] = 623,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 663,
  [SMALL_STATE(35)] = 674,
  [SMALL_STATE(36)] = 687,
  [SMALL_STATE(37)] = 700,
  [SMALL_STATE(38)] = 713,
  [SMALL_STATE(39)] = 720,
  [SMALL_STATE(40)] = 731,
  [SMALL_STATE(41)] = 744,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 826,
  [SMALL_STATE(51)] = 836,
  [SMALL_STATE(52)] = 846,
  [SMALL_STATE(53)] = 852,
  [SMALL_STATE(54)] = 857,
  [SMALL_STATE(55)] = 862,
  [SMALL_STATE(56)] = 869,
  [SMALL_STATE(57)] = 876,
  [SMALL_STATE(58)] = 883,
  [SMALL_STATE(59)] = 890,
  [SMALL_STATE(60)] = 897,
  [SMALL_STATE(61)] = 901,
  [SMALL_STATE(62)] = 905,
  [SMALL_STATE(63)] = 909,
  [SMALL_STATE(64)] = 913,
  [SMALL_STATE(65)] = 917,
  [SMALL_STATE(66)] = 921,
  [SMALL_STATE(67)] = 925,
  [SMALL_STATE(68)] = 929,
  [SMALL_STATE(69)] = 933,
  [SMALL_STATE(70)] = 937,
  [SMALL_STATE(71)] = 941,
  [SMALL_STATE(72)] = 945,
  [SMALL_STATE(73)] = 949,
  [SMALL_STATE(74)] = 953,
  [SMALL_STATE(75)] = 957,
  [SMALL_STATE(76)] = 961,
  [SMALL_STATE(77)] = 965,
  [SMALL_STATE(78)] = 969,
  [SMALL_STATE(79)] = 973,
  [SMALL_STATE(80)] = 977,
  [SMALL_STATE(81)] = 981,
  [SMALL_STATE(82)] = 985,
  [SMALL_STATE(83)] = 989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(15),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitves, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__struct, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__impl, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__impl, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__impl_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__impl_repeat1, 2), SHIFT_REPEAT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__struct, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2), SHIFT_REPEAT(71),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__struct_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__struct_repeat1, 2), SHIFT_REPEAT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__struct_repeat1, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_expr, 2),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lygos(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
