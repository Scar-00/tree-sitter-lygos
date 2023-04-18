#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_fn = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_SEMI = 9,
  anon_sym_return = 10,
  anon_sym_let = 11,
  anon_sym_mut = 12,
  anon_sym_EQ = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_u8 = 19,
  anon_sym_u16 = 20,
  anon_sym_u32 = 21,
  anon_sym_u64 = 22,
  anon_sym_i8 = 23,
  anon_sym_i16 = 24,
  anon_sym_i32 = 25,
  anon_sym_i64 = 26,
  anon_sym_void = 27,
  anon_sym_AMP = 28,
  anon_sym_STAR = 29,
  anon_sym_const = 30,
  sym_identifier = 31,
  sym_number_literal = 32,
  sym_source_file = 33,
  sym__globals = 34,
  sym_func = 35,
  sym_fn_args = 36,
  sym_block = 37,
  sym_stmt = 38,
  sym_expr = 39,
  sym_ret_expr = 40,
  sym_vardelc_expr = 41,
  sym_cond_expr = 42,
  sym_add_expr = 43,
  sym_mul_expr = 44,
  sym_primary = 45,
  sym_primitves = 46,
  sym_type = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_fn_args_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_type_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_void] = "void",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_const] = "const",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym__globals] = "_globals",
  [sym_func] = "func",
  [sym_fn_args] = "fn_args",
  [sym_block] = "block",
  [sym_stmt] = "stmt",
  [sym_expr] = "expr",
  [sym_ret_expr] = "ret_expr",
  [sym_vardelc_expr] = "vardelc_expr",
  [sym_cond_expr] = "cond_expr",
  [sym_add_expr] = "add_expr",
  [sym_mul_expr] = "mul_expr",
  [sym_primary] = "primary",
  [sym_primitves] = "primitves",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_fn_args_repeat1] = "fn_args_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_const] = anon_sym_const,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym__globals] = sym__globals,
  [sym_func] = sym_func,
  [sym_fn_args] = sym_fn_args,
  [sym_block] = sym_block,
  [sym_stmt] = sym_stmt,
  [sym_expr] = sym_expr,
  [sym_ret_expr] = sym_ret_expr,
  [sym_vardelc_expr] = sym_vardelc_expr,
  [sym_cond_expr] = sym_cond_expr,
  [sym_add_expr] = sym_add_expr,
  [sym_mul_expr] = sym_mul_expr,
  [sym_primary] = sym_primary,
  [sym_primitves] = sym_primitves,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_fn_args_repeat1] = aux_sym_fn_args_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COLON] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_cond_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_add_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
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
  [aux_sym_fn_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '>') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '3') ADVANCE(90);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead == '8') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '3') ADVANCE(91);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead == '8') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(121);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(114);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__globals] = STATE(24),
    [sym_func] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_repeat1,
    STATE(23), 1,
      sym_primitves,
    STATE(39), 1,
      sym_type,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [28] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_repeat1,
    STATE(23), 1,
      sym_primitves,
    STATE(43), 1,
      sym_type,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [56] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_repeat1,
    STATE(23), 1,
      sym_primitves,
    STATE(32), 1,
      sym_type,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [84] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_repeat1,
    STATE(23), 1,
      sym_primitves,
    STATE(47), 1,
      sym_type,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [112] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_repeat1,
    STATE(23), 1,
      sym_primitves,
    STATE(42), 1,
      sym_type,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [140] = 11,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(58), 1,
      sym_expr,
    STATE(11), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [177] = 5,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_type_repeat1,
    STATE(27), 1,
      sym_primitves,
    ACTIONS(9), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(7), 9,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_void,
  [202] = 3,
    ACTIONS(25), 2,
      anon_sym_mut,
      anon_sym_const,
    ACTIONS(29), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(27), 10,
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
  [223] = 11,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(36), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(58), 1,
      sym_expr,
    STATE(10), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [260] = 11,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(58), 1,
      sym_expr,
    STATE(10), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [297] = 3,
    STATE(12), 1,
      aux_sym_type_repeat1,
    ACTIONS(49), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(47), 10,
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
  [317] = 10,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(52), 1,
      sym_expr,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [350] = 2,
    ACTIONS(54), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(47), 10,
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
  [367] = 9,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(65), 1,
      sym_expr,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [397] = 9,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(57), 1,
      sym_expr,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [427] = 9,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(60), 1,
      sym_expr,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [457] = 9,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym_number_literal,
    STATE(20), 1,
      sym_primary,
    STATE(36), 1,
      sym_add_expr,
    STATE(50), 1,
      sym_mul_expr,
    STATE(64), 1,
      sym_expr,
    STATE(55), 3,
      sym_ret_expr,
      sym_vardelc_expr,
      sym_cond_expr,
  [487] = 1,
    ACTIONS(56), 6,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [496] = 1,
    ACTIONS(58), 6,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [505] = 1,
    ACTIONS(60), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [513] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_fn,
    STATE(22), 3,
      sym__globals,
      sym_func,
      aux_sym_source_file_repeat1,
  [525] = 1,
    ACTIONS(67), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [533] = 3,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym__globals,
      sym_func,
      aux_sym_source_file_repeat1,
  [545] = 4,
    STATE(20), 1,
      sym_primary,
    STATE(50), 1,
      sym_mul_expr,
    STATE(56), 1,
      sym_add_expr,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [559] = 2,
    ACTIONS(71), 2,
      anon_sym_RBRACE,
      sym_number_literal,
    ACTIONS(73), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [569] = 1,
    ACTIONS(75), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [577] = 3,
    STATE(20), 1,
      sym_primary,
    STATE(29), 1,
      sym_mul_expr,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [588] = 1,
    ACTIONS(77), 4,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [595] = 3,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_EQ,
  [605] = 3,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [615] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_fn_args_repeat1,
  [625] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_fn_args_repeat1,
  [635] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_fn_args_repeat1,
  [645] = 3,
    ACTIONS(102), 1,
      anon_sym_DASH_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [655] = 1,
    ACTIONS(106), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [661] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [666] = 1,
    ACTIONS(110), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [671] = 1,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [676] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [681] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [686] = 2,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [693] = 2,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      anon_sym_EQ,
  [700] = 1,
    ACTIONS(122), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [705] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [710] = 2,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_fn_args,
  [717] = 2,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_EQ,
  [724] = 2,
    ACTIONS(132), 1,
      anon_sym_mut,
    ACTIONS(134), 1,
      sym_identifier,
  [731] = 1,
    ACTIONS(136), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [736] = 1,
    ACTIONS(138), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [741] = 2,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      sym_identifier,
  [748] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [752] = 1,
    ACTIONS(146), 1,
      sym_identifier,
  [756] = 1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [760] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [764] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [768] = 1,
    ACTIONS(128), 1,
      anon_sym_SEMI,
  [772] = 1,
    ACTIONS(154), 1,
      anon_sym_SEMI,
  [776] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [780] = 1,
    ACTIONS(118), 1,
      anon_sym_SEMI,
  [784] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [788] = 1,
    ACTIONS(160), 1,
      sym_identifier,
  [792] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [796] = 1,
    ACTIONS(164), 1,
      anon_sym_SEMI,
  [800] = 1,
    ACTIONS(166), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 317,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 427,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 496,
  [SMALL_STATE(21)] = 505,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 525,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 545,
  [SMALL_STATE(26)] = 559,
  [SMALL_STATE(27)] = 569,
  [SMALL_STATE(28)] = 577,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 595,
  [SMALL_STATE(31)] = 605,
  [SMALL_STATE(32)] = 615,
  [SMALL_STATE(33)] = 625,
  [SMALL_STATE(34)] = 635,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 666,
  [SMALL_STATE(39)] = 671,
  [SMALL_STATE(40)] = 676,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 686,
  [SMALL_STATE(43)] = 693,
  [SMALL_STATE(44)] = 700,
  [SMALL_STATE(45)] = 705,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 717,
  [SMALL_STATE(48)] = 724,
  [SMALL_STATE(49)] = 731,
  [SMALL_STATE(50)] = 736,
  [SMALL_STATE(51)] = 741,
  [SMALL_STATE(52)] = 748,
  [SMALL_STATE(53)] = 752,
  [SMALL_STATE(54)] = 756,
  [SMALL_STATE(55)] = 760,
  [SMALL_STATE(56)] = 764,
  [SMALL_STATE(57)] = 768,
  [SMALL_STATE(58)] = 772,
  [SMALL_STATE(59)] = 776,
  [SMALL_STATE(60)] = 780,
  [SMALL_STATE(61)] = 784,
  [SMALL_STATE(62)] = 788,
  [SMALL_STATE(63)] = 792,
  [SMALL_STATE(64)] = 796,
  [SMALL_STATE(65)] = 800,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_expr, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitves, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2), SHIFT_REPEAT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_expr, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_expr, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 7),
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
