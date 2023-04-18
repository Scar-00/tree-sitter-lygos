#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_u8 = 14,
  anon_sym_u16 = 15,
  anon_sym_u32 = 16,
  anon_sym_u64 = 17,
  anon_sym_i8 = 18,
  anon_sym_i16 = 19,
  anon_sym_i32 = 20,
  anon_sym_i64 = 21,
  anon_sym_void = 22,
  anon_sym_AMP = 23,
  anon_sym_STAR = 24,
  anon_sym_const = 25,
  sym_identifier = 26,
  sym_source_file = 27,
  sym__globals = 28,
  sym_func = 29,
  sym_fn_args = 30,
  sym_block = 31,
  sym_stmt = 32,
  sym_expr = 33,
  sym_ret_expr = 34,
  sym_vardelc_expr = 35,
  sym_primitves = 36,
  sym_type = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_fn_args_repeat1 = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_type_repeat1 = 41,
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
  [sym_source_file] = "source_file",
  [sym__globals] = "_globals",
  [sym_func] = "func",
  [sym_fn_args] = "fn_args",
  [sym_block] = "block",
  [sym_stmt] = "stmt",
  [sym_expr] = "expr",
  [sym_ret_expr] = "ret_expr",
  [sym_vardelc_expr] = "vardelc_expr",
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
  [sym_source_file] = sym_source_file,
  [sym__globals] = sym__globals,
  [sym_func] = sym_func,
  [sym_fn_args] = sym_fn_args,
  [sym_block] = sym_block,
  [sym_stmt] = sym_stmt,
  [sym_expr] = sym_expr,
  [sym_ret_expr] = sym_ret_expr,
  [sym_vardelc_expr] = sym_vardelc_expr,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '3') ADVANCE(70);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == '8') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '3') ADVANCE(71);
      if (lookahead == '6') ADVANCE(73);
      if (lookahead == '8') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
    [sym_source_file] = STATE(50),
    [sym__globals] = STATE(16),
    [sym_func] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_type_repeat1,
    STATE(20), 1,
      sym_primitves,
    STATE(33), 1,
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
    STATE(7), 1,
      aux_sym_type_repeat1,
    STATE(20), 1,
      sym_primitves,
    STATE(37), 1,
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
    STATE(7), 1,
      aux_sym_type_repeat1,
    STATE(20), 1,
      sym_primitves,
    STATE(31), 1,
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
    STATE(7), 1,
      aux_sym_type_repeat1,
    STATE(20), 1,
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
  [112] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_type_repeat1,
    STATE(20), 1,
      sym_primitves,
    STATE(26), 1,
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
  [140] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_type_repeat1,
    STATE(15), 1,
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
  [165] = 3,
    ACTIONS(15), 2,
      anon_sym_mut,
      anon_sym_const,
    ACTIONS(19), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(17), 10,
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
  [186] = 3,
    STATE(9), 1,
      aux_sym_type_repeat1,
    ACTIONS(23), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(21), 10,
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
  [206] = 2,
    ACTIONS(26), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(21), 10,
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
  [223] = 6,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_let,
    STATE(48), 1,
      sym_expr,
    STATE(11), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [244] = 6,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    STATE(48), 1,
      sym_expr,
    STATE(11), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [265] = 6,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_expr,
    STATE(12), 2,
      sym_stmt,
      aux_sym_block_repeat1,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [286] = 5,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_expr,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [303] = 1,
    ACTIONS(46), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [311] = 3,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym__globals,
      sym_func,
      aux_sym_source_file_repeat1,
  [323] = 4,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    STATE(57), 1,
      sym_expr,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [337] = 4,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    STATE(56), 1,
      sym_expr,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [351] = 1,
    ACTIONS(50), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [359] = 1,
    ACTIONS(52), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [367] = 4,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    STATE(52), 1,
      sym_expr,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [381] = 4,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_let,
    STATE(49), 1,
      sym_expr,
    STATE(47), 2,
      sym_ret_expr,
      sym_vardelc_expr,
  [395] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_fn,
    STATE(23), 3,
      sym__globals,
      sym_func,
      aux_sym_source_file_repeat1,
  [407] = 3,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      anon_sym_EQ,
  [417] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_fn_args_repeat1,
  [427] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_fn_args_repeat1,
  [437] = 3,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_EQ,
  [447] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_fn_args_repeat1,
  [457] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH_GT,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [467] = 1,
    ACTIONS(86), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_let,
  [473] = 2,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      anon_sym_EQ,
  [480] = 1,
    ACTIONS(92), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [485] = 1,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [490] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [495] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [500] = 2,
    ACTIONS(100), 1,
      anon_sym_mut,
    ACTIONS(102), 1,
      sym_identifier,
  [507] = 2,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      anon_sym_EQ,
  [514] = 1,
    ACTIONS(108), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [519] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [526] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [531] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_fn_args,
  [538] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [543] = 1,
    ACTIONS(116), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [548] = 2,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 1,
      sym_identifier,
  [555] = 1,
    ACTIONS(122), 1,
      sym_identifier,
  [559] = 1,
    ACTIONS(124), 1,
      anon_sym_COLON,
  [563] = 1,
    ACTIONS(126), 1,
      anon_sym_SEMI,
  [567] = 1,
    ACTIONS(128), 1,
      anon_sym_SEMI,
  [571] = 1,
    ACTIONS(88), 1,
      anon_sym_SEMI,
  [575] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [579] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [583] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [587] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [591] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [595] = 1,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [599] = 1,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [603] = 1,
    ACTIONS(142), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 223,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 303,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 381,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 407,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 447,
  [SMALL_STATE(29)] = 457,
  [SMALL_STATE(30)] = 467,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 485,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 514,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 538,
  [SMALL_STATE(43)] = 543,
  [SMALL_STATE(44)] = 548,
  [SMALL_STATE(45)] = 555,
  [SMALL_STATE(46)] = 559,
  [SMALL_STATE(47)] = 563,
  [SMALL_STATE(48)] = 567,
  [SMALL_STATE(49)] = 571,
  [SMALL_STATE(50)] = 575,
  [SMALL_STATE(51)] = 579,
  [SMALL_STATE(52)] = 583,
  [SMALL_STATE(53)] = 587,
  [SMALL_STATE(54)] = 591,
  [SMALL_STATE(55)] = 595,
  [SMALL_STATE(56)] = 599,
  [SMALL_STATE(57)] = 603,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_expr, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitves, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret_expr, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardelc_expr, 7),
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
