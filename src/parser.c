#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_begin = 1,
  anon_sym_COLON = 2,
  anon_sym_end = 3,
  anon_sym_goto = 4,
  anon_sym_SEMI = 5,
  anon_sym_label = 6,
  anon_sym_ifgoto = 7,
  anon_sym_import = 8,
  anon_sym_show = 9,
  anon_sym_str = 10,
  anon_sym_print = 11,
  anon_sym_println = 12,
  anon_sym_push = 13,
  anon_sym_pop = 14,
  anon_sym_add = 15,
  anon_sym_sub = 16,
  anon_sym_mul = 17,
  anon_sym_div = 18,
  anon_sym_lshift = 19,
  anon_sym_rshift = 20,
  anon_sym_cmp = 21,
  anon_sym_halt = 22,
  anon_sym_incr = 23,
  anon_sym_decr = 24,
  anon_sym_call = 25,
  anon_sym_type = 26,
  sym_identifier = 27,
  sym_integer = 28,
  sym_float = 29,
  sym_double = 30,
  sym_bigdouble = 31,
  sym_biginteger = 32,
  sym_string = 33,
  sym_char = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  anon_sym_SLASH_SLASH = 37,
  aux_sym_single_line_comment_token1 = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym_function_def = 41,
  sym_goto = 42,
  sym_label = 43,
  sym_ifgoto = 44,
  sym_import = 45,
  sym_instruction_or_statement = 46,
  sym_instruction = 47,
  sym_show = 48,
  sym_str = 49,
  sym_print = 50,
  sym_println = 51,
  sym_push = 52,
  sym_pop = 53,
  sym_add = 54,
  sym_sub = 55,
  sym_mul = 56,
  sym_div = 57,
  sym_lshift = 58,
  sym_rshift = 59,
  sym_cmp = 60,
  sym_halt = 61,
  sym_increment = 62,
  sym_decrement = 63,
  sym_call = 64,
  sym_gettype = 65,
  sym_val_or_id = 66,
  sym_val = 67,
  sym_boolean = 68,
  sym_single_line_comment = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_function_def_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_begin] = "begin",
  [anon_sym_COLON] = ":",
  [anon_sym_end] = "end",
  [anon_sym_goto] = "goto",
  [anon_sym_SEMI] = ";",
  [anon_sym_label] = "label",
  [anon_sym_ifgoto] = "ifgoto",
  [anon_sym_import] = "import",
  [anon_sym_show] = "show",
  [anon_sym_str] = "str",
  [anon_sym_print] = "print",
  [anon_sym_println] = "println",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_lshift] = "lshift",
  [anon_sym_rshift] = "rshift",
  [anon_sym_cmp] = "cmp",
  [anon_sym_halt] = "halt",
  [anon_sym_incr] = "incr",
  [anon_sym_decr] = "decr",
  [anon_sym_call] = "call",
  [anon_sym_type] = "type",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_double] = "double",
  [sym_bigdouble] = "bigdouble",
  [sym_biginteger] = "biginteger",
  [sym_string] = "string",
  [sym_char] = "char",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_function_def] = "function_def",
  [sym_goto] = "goto",
  [sym_label] = "label",
  [sym_ifgoto] = "ifgoto",
  [sym_import] = "import",
  [sym_instruction_or_statement] = "instruction_or_statement",
  [sym_instruction] = "instruction",
  [sym_show] = "show",
  [sym_str] = "str",
  [sym_print] = "print",
  [sym_println] = "println",
  [sym_push] = "push",
  [sym_pop] = "pop",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_lshift] = "lshift",
  [sym_rshift] = "rshift",
  [sym_cmp] = "cmp",
  [sym_halt] = "halt",
  [sym_increment] = "increment",
  [sym_decrement] = "decrement",
  [sym_call] = "call",
  [sym_gettype] = "gettype",
  [sym_val_or_id] = "val_or_id",
  [sym_val] = "val",
  [sym_boolean] = "boolean",
  [sym_single_line_comment] = "single_line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_def_repeat1] = "function_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_ifgoto] = anon_sym_ifgoto,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_println] = anon_sym_println,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_lshift] = anon_sym_lshift,
  [anon_sym_rshift] = anon_sym_rshift,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_incr] = anon_sym_incr,
  [anon_sym_decr] = anon_sym_decr,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_type] = anon_sym_type,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_double] = sym_double,
  [sym_bigdouble] = sym_bigdouble,
  [sym_biginteger] = sym_biginteger,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_function_def] = sym_function_def,
  [sym_goto] = sym_goto,
  [sym_label] = sym_label,
  [sym_ifgoto] = sym_ifgoto,
  [sym_import] = sym_import,
  [sym_instruction_or_statement] = sym_instruction_or_statement,
  [sym_instruction] = sym_instruction,
  [sym_show] = sym_show,
  [sym_str] = sym_str,
  [sym_print] = sym_print,
  [sym_println] = sym_println,
  [sym_push] = sym_push,
  [sym_pop] = sym_pop,
  [sym_add] = sym_add,
  [sym_sub] = sym_sub,
  [sym_mul] = sym_mul,
  [sym_div] = sym_div,
  [sym_lshift] = sym_lshift,
  [sym_rshift] = sym_rshift,
  [sym_cmp] = sym_cmp,
  [sym_halt] = sym_halt,
  [sym_increment] = sym_increment,
  [sym_decrement] = sym_decrement,
  [sym_call] = sym_call,
  [sym_gettype] = sym_gettype,
  [sym_val_or_id] = sym_val_or_id,
  [sym_val] = sym_val,
  [sym_boolean] = sym_boolean,
  [sym_single_line_comment] = sym_single_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_def_repeat1] = aux_sym_function_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifgoto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_println] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_bigdouble] = {
    .visible = true,
    .named = true,
  },
  [sym_biginteger] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_ifgoto] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_or_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_show] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_println] = {
    .visible = true,
    .named = true,
  },
  [sym_push] = {
    .visible = true,
    .named = true,
  },
  [sym_pop] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_lshift] = {
    .visible = true,
    .named = true,
  },
  [sym_rshift] = {
    .visible = true,
    .named = true,
  },
  [sym_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_increment] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_gettype] = {
    .visible = true,
    .named = true,
  },
  [sym_val_or_id] = {
    .visible = true,
    .named = true,
  },
  [sym_val] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_def_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '"', 2,
        '\'', 80,
        '/', 4,
        ':', 83,
        ';', 86,
        'a', 16,
        'b', 17,
        'c', 5,
        'd', 18,
        'e', 45,
        'f', 7,
        'g', 47,
        'h', 8,
        'i', 23,
        'l', 6,
        'm', 74,
        'p', 51,
        'r', 65,
        's', 29,
        't', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 't') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 77:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ifgoto);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_incr);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_decr);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bigdouble);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_biginteger);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '?') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
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
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 77},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 130},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 77},
  [69] = {.lex_state = 77},
  [70] = {.lex_state = 77},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_ifgoto] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_println] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
    [anon_sym_rshift] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_incr] = ACTIONS(1),
    [anon_sym_decr] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [sym_bigdouble] = ACTIONS(1),
    [sym_biginteger] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__statement] = STATE(32),
    [sym_function_def] = STATE(32),
    [sym_goto] = STATE(32),
    [sym_label] = STATE(32),
    [sym_ifgoto] = STATE(32),
    [sym_import] = STATE(32),
    [sym_single_line_comment] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(24),
    [sym_function_def] = STATE(24),
    [sym_goto] = STATE(24),
    [sym_label] = STATE(24),
    [sym_ifgoto] = STATE(24),
    [sym_import] = STATE(24),
    [sym_instruction_or_statement] = STATE(3),
    [sym_instruction] = STATE(24),
    [sym_show] = STATE(21),
    [sym_str] = STATE(21),
    [sym_print] = STATE(21),
    [sym_println] = STATE(21),
    [sym_push] = STATE(21),
    [sym_pop] = STATE(21),
    [sym_add] = STATE(21),
    [sym_sub] = STATE(21),
    [sym_mul] = STATE(21),
    [sym_div] = STATE(21),
    [sym_lshift] = STATE(21),
    [sym_rshift] = STATE(21),
    [sym_cmp] = STATE(21),
    [sym_halt] = STATE(21),
    [sym_increment] = STATE(21),
    [sym_decrement] = STATE(21),
    [sym_call] = STATE(21),
    [sym_gettype] = STATE(21),
    [sym_single_line_comment] = STATE(24),
    [aux_sym_function_def_repeat1] = STATE(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(19),
    [anon_sym_str] = ACTIONS(21),
    [anon_sym_print] = ACTIONS(23),
    [anon_sym_println] = ACTIONS(25),
    [anon_sym_push] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(29),
    [anon_sym_add] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_lshift] = ACTIONS(39),
    [anon_sym_rshift] = ACTIONS(41),
    [anon_sym_cmp] = ACTIONS(43),
    [anon_sym_halt] = ACTIONS(45),
    [anon_sym_incr] = ACTIONS(47),
    [anon_sym_decr] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(53),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(24),
    [sym_function_def] = STATE(24),
    [sym_goto] = STATE(24),
    [sym_label] = STATE(24),
    [sym_ifgoto] = STATE(24),
    [sym_import] = STATE(24),
    [sym_instruction_or_statement] = STATE(4),
    [sym_instruction] = STATE(24),
    [sym_show] = STATE(21),
    [sym_str] = STATE(21),
    [sym_print] = STATE(21),
    [sym_println] = STATE(21),
    [sym_push] = STATE(21),
    [sym_pop] = STATE(21),
    [sym_add] = STATE(21),
    [sym_sub] = STATE(21),
    [sym_mul] = STATE(21),
    [sym_div] = STATE(21),
    [sym_lshift] = STATE(21),
    [sym_rshift] = STATE(21),
    [sym_cmp] = STATE(21),
    [sym_halt] = STATE(21),
    [sym_increment] = STATE(21),
    [sym_decrement] = STATE(21),
    [sym_call] = STATE(21),
    [sym_gettype] = STATE(21),
    [sym_single_line_comment] = STATE(24),
    [aux_sym_function_def_repeat1] = STATE(4),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(55),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(19),
    [anon_sym_str] = ACTIONS(21),
    [anon_sym_print] = ACTIONS(23),
    [anon_sym_println] = ACTIONS(25),
    [anon_sym_push] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(29),
    [anon_sym_add] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_lshift] = ACTIONS(39),
    [anon_sym_rshift] = ACTIONS(41),
    [anon_sym_cmp] = ACTIONS(43),
    [anon_sym_halt] = ACTIONS(45),
    [anon_sym_incr] = ACTIONS(47),
    [anon_sym_decr] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(53),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [4] = {
    [sym__statement] = STATE(24),
    [sym_function_def] = STATE(24),
    [sym_goto] = STATE(24),
    [sym_label] = STATE(24),
    [sym_ifgoto] = STATE(24),
    [sym_import] = STATE(24),
    [sym_instruction_or_statement] = STATE(4),
    [sym_instruction] = STATE(24),
    [sym_show] = STATE(21),
    [sym_str] = STATE(21),
    [sym_print] = STATE(21),
    [sym_println] = STATE(21),
    [sym_push] = STATE(21),
    [sym_pop] = STATE(21),
    [sym_add] = STATE(21),
    [sym_sub] = STATE(21),
    [sym_mul] = STATE(21),
    [sym_div] = STATE(21),
    [sym_lshift] = STATE(21),
    [sym_rshift] = STATE(21),
    [sym_cmp] = STATE(21),
    [sym_halt] = STATE(21),
    [sym_increment] = STATE(21),
    [sym_decrement] = STATE(21),
    [sym_call] = STATE(21),
    [sym_gettype] = STATE(21),
    [sym_single_line_comment] = STATE(24),
    [aux_sym_function_def_repeat1] = STATE(4),
    [anon_sym_begin] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(60),
    [anon_sym_goto] = ACTIONS(62),
    [anon_sym_label] = ACTIONS(65),
    [anon_sym_ifgoto] = ACTIONS(68),
    [anon_sym_import] = ACTIONS(71),
    [anon_sym_show] = ACTIONS(74),
    [anon_sym_str] = ACTIONS(77),
    [anon_sym_print] = ACTIONS(80),
    [anon_sym_println] = ACTIONS(83),
    [anon_sym_push] = ACTIONS(86),
    [anon_sym_pop] = ACTIONS(89),
    [anon_sym_add] = ACTIONS(92),
    [anon_sym_sub] = ACTIONS(95),
    [anon_sym_mul] = ACTIONS(98),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_lshift] = ACTIONS(104),
    [anon_sym_rshift] = ACTIONS(107),
    [anon_sym_cmp] = ACTIONS(110),
    [anon_sym_halt] = ACTIONS(113),
    [anon_sym_incr] = ACTIONS(116),
    [anon_sym_decr] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(133), 1,
      anon_sym_print,
    ACTIONS(131), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [31] = 2,
    ACTIONS(137), 1,
      anon_sym_print,
    ACTIONS(135), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [62] = 2,
    ACTIONS(141), 1,
      anon_sym_print,
    ACTIONS(139), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [93] = 2,
    ACTIONS(145), 1,
      anon_sym_print,
    ACTIONS(143), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [124] = 2,
    ACTIONS(149), 1,
      anon_sym_print,
    ACTIONS(147), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [155] = 2,
    ACTIONS(153), 1,
      anon_sym_print,
    ACTIONS(151), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [186] = 2,
    ACTIONS(157), 1,
      anon_sym_print,
    ACTIONS(155), 25,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [217] = 2,
    ACTIONS(161), 1,
      anon_sym_print,
    ACTIONS(159), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [247] = 2,
    ACTIONS(165), 1,
      anon_sym_print,
    ACTIONS(163), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [277] = 2,
    ACTIONS(169), 1,
      anon_sym_print,
    ACTIONS(167), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [307] = 2,
    ACTIONS(173), 1,
      anon_sym_print,
    ACTIONS(171), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [337] = 2,
    ACTIONS(177), 1,
      anon_sym_print,
    ACTIONS(175), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [367] = 2,
    ACTIONS(181), 1,
      anon_sym_print,
    ACTIONS(179), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [397] = 2,
    ACTIONS(185), 1,
      anon_sym_print,
    ACTIONS(183), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [427] = 2,
    ACTIONS(189), 1,
      anon_sym_print,
    ACTIONS(187), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [457] = 2,
    ACTIONS(193), 1,
      anon_sym_print,
    ACTIONS(191), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [487] = 2,
    ACTIONS(197), 1,
      anon_sym_print,
    ACTIONS(195), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [517] = 2,
    ACTIONS(201), 1,
      anon_sym_print,
    ACTIONS(199), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [547] = 2,
    ACTIONS(205), 1,
      anon_sym_print,
    ACTIONS(203), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [577] = 2,
    ACTIONS(209), 1,
      anon_sym_print,
    ACTIONS(207), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [607] = 2,
    ACTIONS(213), 1,
      anon_sym_print,
    ACTIONS(211), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [637] = 2,
    ACTIONS(217), 1,
      anon_sym_print,
    ACTIONS(215), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [667] = 2,
    ACTIONS(221), 1,
      anon_sym_print,
    ACTIONS(219), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [697] = 2,
    ACTIONS(225), 1,
      anon_sym_print,
    ACTIONS(223), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [727] = 2,
    ACTIONS(229), 1,
      anon_sym_print,
    ACTIONS(227), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [757] = 2,
    ACTIONS(233), 1,
      anon_sym_print,
    ACTIONS(231), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [787] = 2,
    ACTIONS(237), 1,
      anon_sym_print,
    ACTIONS(235), 24,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_show,
      anon_sym_str,
      anon_sym_println,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_cmp,
      anon_sym_halt,
      anon_sym_incr,
      anon_sym_decr,
      anon_sym_call,
      anon_sym_type,
      anon_sym_SLASH_SLASH,
  [817] = 8,
    ACTIONS(5), 1,
      anon_sym_begin,
    ACTIONS(7), 1,
      anon_sym_goto,
    ACTIONS(9), 1,
      anon_sym_label,
    ACTIONS(11), 1,
      anon_sym_ifgoto,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(33), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [849] = 8,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      anon_sym_begin,
    ACTIONS(246), 1,
      anon_sym_goto,
    ACTIONS(249), 1,
      anon_sym_label,
    ACTIONS(252), 1,
      anon_sym_ifgoto,
    ACTIONS(255), 1,
      anon_sym_import,
    ACTIONS(258), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [881] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(49), 1,
      sym_val,
    STATE(50), 1,
      sym_boolean,
    STATE(52), 1,
      sym_val_or_id,
    ACTIONS(263), 2,
      sym_integer,
      sym_double,
    ACTIONS(267), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(265), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [909] = 1,
    ACTIONS(269), 1,
      anon_sym_SEMI,
  [913] = 1,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [917] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [921] = 1,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [925] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [929] = 1,
    ACTIONS(279), 1,
      anon_sym_SEMI,
  [933] = 1,
    ACTIONS(281), 1,
      sym_identifier,
  [937] = 1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [941] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [945] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [949] = 1,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [953] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [957] = 1,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [961] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [965] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [969] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [973] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [977] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [981] = 1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [985] = 1,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [989] = 1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [993] = 1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [997] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1001] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [1005] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1009] = 1,
    ACTIONS(319), 1,
      sym_identifier,
  [1013] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [1017] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [1021] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON,
  [1025] = 1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
  [1029] = 1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
  [1033] = 1,
    ACTIONS(331), 1,
      aux_sym_single_line_comment_token1,
  [1037] = 1,
    ACTIONS(333), 1,
      sym_string,
  [1041] = 1,
    ACTIONS(335), 1,
      sym_integer,
  [1045] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [1049] = 1,
    ACTIONS(339), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 337,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 397,
  [SMALL_STATE(19)] = 427,
  [SMALL_STATE(20)] = 457,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 517,
  [SMALL_STATE(23)] = 547,
  [SMALL_STATE(24)] = 577,
  [SMALL_STATE(25)] = 607,
  [SMALL_STATE(26)] = 637,
  [SMALL_STATE(27)] = 667,
  [SMALL_STATE(28)] = 697,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 757,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 817,
  [SMALL_STATE(33)] = 849,
  [SMALL_STATE(34)] = 881,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 913,
  [SMALL_STATE(37)] = 917,
  [SMALL_STATE(38)] = 921,
  [SMALL_STATE(39)] = 925,
  [SMALL_STATE(40)] = 929,
  [SMALL_STATE(41)] = 933,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 941,
  [SMALL_STATE(44)] = 945,
  [SMALL_STATE(45)] = 949,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 957,
  [SMALL_STATE(48)] = 961,
  [SMALL_STATE(49)] = 965,
  [SMALL_STATE(50)] = 969,
  [SMALL_STATE(51)] = 973,
  [SMALL_STATE(52)] = 977,
  [SMALL_STATE(53)] = 981,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 989,
  [SMALL_STATE(56)] = 993,
  [SMALL_STATE(57)] = 997,
  [SMALL_STATE(58)] = 1001,
  [SMALL_STATE(59)] = 1005,
  [SMALL_STATE(60)] = 1009,
  [SMALL_STATE(61)] = 1013,
  [SMALL_STATE(62)] = 1017,
  [SMALL_STATE(63)] = 1021,
  [SMALL_STATE(64)] = 1025,
  [SMALL_STATE(65)] = 1029,
  [SMALL_STATE(66)] = 1033,
  [SMALL_STATE(67)] = 1037,
  [SMALL_STATE(68)] = 1041,
  [SMALL_STATE(69)] = 1045,
  [SMALL_STATE(70)] = 1049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmp, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmp, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rshift, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rshift, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lshift, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lshift, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pop, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pop, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_println, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_println, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_show, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettype, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gettype, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_id, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [329] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asa(void) {
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
