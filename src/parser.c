#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_var = 27,
  sym_identifier = 28,
  sym_integer = 29,
  sym_float = 30,
  sym_double = 31,
  sym_bigdouble = 32,
  sym_biginteger = 33,
  sym_string = 34,
  sym_char = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  anon_sym_SLASH_SLASH = 38,
  aux_sym_single_line_comment_token1 = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_function_def = 42,
  sym_goto = 43,
  sym_label = 44,
  sym_ifgoto = 45,
  sym_import = 46,
  sym_instruction_or_statement = 47,
  sym_instruction = 48,
  sym_show = 49,
  sym_str = 50,
  sym_print = 51,
  sym_println = 52,
  sym_push = 53,
  sym_pop = 54,
  sym_add = 55,
  sym_sub = 56,
  sym_mul = 57,
  sym_div = 58,
  sym_lshift = 59,
  sym_rshift = 60,
  sym_cmp = 61,
  sym_halt = 62,
  sym_increment = 63,
  sym_decrement = 64,
  sym_call = 65,
  sym_gettype = 66,
  sym_var_def = 67,
  sym_val_or_id = 68,
  sym_val = 69,
  sym_boolean = 70,
  sym_single_line_comment = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_function_def_repeat1 = 73,
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
  [anon_sym_var] = "var",
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
  [sym_var_def] = "var_def",
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
  [anon_sym_var] = anon_sym_var,
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
  [sym_var_def] = sym_var_def,
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
  [anon_sym_var] = {
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
  [sym_var_def] = {
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      ADVANCE_MAP(
        '"', 2,
        '\'', 82,
        '/', 4,
        ':', 85,
        ';', 88,
        'a', 17,
        'b', 18,
        'c', 5,
        'd', 19,
        'e', 46,
        'f', 7,
        'g', 48,
        'h', 9,
        'i', 24,
        'l', 6,
        'm', 76,
        'p', 52,
        'r', 67,
        's', 30,
        't', 63,
        'v', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 't') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 79:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ifgoto);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_incr);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_decr);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_bigdouble);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_biginteger);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 79},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 79},
  [42] = {.lex_state = 79},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 79},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 79},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 133},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 79},
  [72] = {.lex_state = 79},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 79},
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
    [anon_sym_var] = ACTIONS(1),
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
    [sym_source_file] = STATE(68),
    [sym__statement] = STATE(33),
    [sym_function_def] = STATE(33),
    [sym_goto] = STATE(33),
    [sym_label] = STATE(33),
    [sym_ifgoto] = STATE(33),
    [sym_import] = STATE(33),
    [sym_single_line_comment] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(19),
    [sym_function_def] = STATE(19),
    [sym_goto] = STATE(19),
    [sym_label] = STATE(19),
    [sym_ifgoto] = STATE(19),
    [sym_import] = STATE(19),
    [sym_instruction_or_statement] = STATE(3),
    [sym_instruction] = STATE(19),
    [sym_show] = STATE(12),
    [sym_str] = STATE(12),
    [sym_print] = STATE(12),
    [sym_println] = STATE(12),
    [sym_push] = STATE(12),
    [sym_pop] = STATE(12),
    [sym_add] = STATE(12),
    [sym_sub] = STATE(12),
    [sym_mul] = STATE(12),
    [sym_div] = STATE(12),
    [sym_lshift] = STATE(12),
    [sym_rshift] = STATE(12),
    [sym_cmp] = STATE(12),
    [sym_halt] = STATE(12),
    [sym_increment] = STATE(12),
    [sym_decrement] = STATE(12),
    [sym_call] = STATE(12),
    [sym_gettype] = STATE(12),
    [sym_var_def] = STATE(12),
    [sym_single_line_comment] = STATE(19),
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
    [anon_sym_var] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(19),
    [sym_function_def] = STATE(19),
    [sym_goto] = STATE(19),
    [sym_label] = STATE(19),
    [sym_ifgoto] = STATE(19),
    [sym_import] = STATE(19),
    [sym_instruction_or_statement] = STATE(3),
    [sym_instruction] = STATE(19),
    [sym_show] = STATE(12),
    [sym_str] = STATE(12),
    [sym_print] = STATE(12),
    [sym_println] = STATE(12),
    [sym_push] = STATE(12),
    [sym_pop] = STATE(12),
    [sym_add] = STATE(12),
    [sym_sub] = STATE(12),
    [sym_mul] = STATE(12),
    [sym_div] = STATE(12),
    [sym_lshift] = STATE(12),
    [sym_rshift] = STATE(12),
    [sym_cmp] = STATE(12),
    [sym_halt] = STATE(12),
    [sym_increment] = STATE(12),
    [sym_decrement] = STATE(12),
    [sym_call] = STATE(12),
    [sym_gettype] = STATE(12),
    [sym_var_def] = STATE(12),
    [sym_single_line_comment] = STATE(19),
    [aux_sym_function_def_repeat1] = STATE(3),
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
    [anon_sym_var] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
  },
  [4] = {
    [sym__statement] = STATE(19),
    [sym_function_def] = STATE(19),
    [sym_goto] = STATE(19),
    [sym_label] = STATE(19),
    [sym_ifgoto] = STATE(19),
    [sym_import] = STATE(19),
    [sym_instruction_or_statement] = STATE(2),
    [sym_instruction] = STATE(19),
    [sym_show] = STATE(12),
    [sym_str] = STATE(12),
    [sym_print] = STATE(12),
    [sym_println] = STATE(12),
    [sym_push] = STATE(12),
    [sym_pop] = STATE(12),
    [sym_add] = STATE(12),
    [sym_sub] = STATE(12),
    [sym_mul] = STATE(12),
    [sym_div] = STATE(12),
    [sym_lshift] = STATE(12),
    [sym_rshift] = STATE(12),
    [sym_cmp] = STATE(12),
    [sym_halt] = STATE(12),
    [sym_increment] = STATE(12),
    [sym_decrement] = STATE(12),
    [sym_call] = STATE(12),
    [sym_gettype] = STATE(12),
    [sym_var_def] = STATE(12),
    [sym_single_line_comment] = STATE(19),
    [aux_sym_function_def_repeat1] = STATE(2),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(134),
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
    [anon_sym_var] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(138), 1,
      anon_sym_print,
    ACTIONS(136), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [32] = 2,
    ACTIONS(142), 1,
      anon_sym_print,
    ACTIONS(140), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [64] = 2,
    ACTIONS(146), 1,
      anon_sym_print,
    ACTIONS(144), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [96] = 2,
    ACTIONS(150), 1,
      anon_sym_print,
    ACTIONS(148), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [128] = 2,
    ACTIONS(154), 1,
      anon_sym_print,
    ACTIONS(152), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [160] = 2,
    ACTIONS(158), 1,
      anon_sym_print,
    ACTIONS(156), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [192] = 2,
    ACTIONS(162), 1,
      anon_sym_print,
    ACTIONS(160), 26,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [224] = 2,
    ACTIONS(166), 1,
      anon_sym_print,
    ACTIONS(164), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [255] = 2,
    ACTIONS(170), 1,
      anon_sym_print,
    ACTIONS(168), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [286] = 2,
    ACTIONS(174), 1,
      anon_sym_print,
    ACTIONS(172), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [317] = 2,
    ACTIONS(178), 1,
      anon_sym_print,
    ACTIONS(176), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [348] = 2,
    ACTIONS(182), 1,
      anon_sym_print,
    ACTIONS(180), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [379] = 2,
    ACTIONS(186), 1,
      anon_sym_print,
    ACTIONS(184), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [410] = 2,
    ACTIONS(190), 1,
      anon_sym_print,
    ACTIONS(188), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [441] = 2,
    ACTIONS(194), 1,
      anon_sym_print,
    ACTIONS(192), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [472] = 2,
    ACTIONS(198), 1,
      anon_sym_print,
    ACTIONS(196), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [503] = 2,
    ACTIONS(202), 1,
      anon_sym_print,
    ACTIONS(200), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [534] = 2,
    ACTIONS(206), 1,
      anon_sym_print,
    ACTIONS(204), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [565] = 2,
    ACTIONS(210), 1,
      anon_sym_print,
    ACTIONS(208), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [596] = 2,
    ACTIONS(214), 1,
      anon_sym_print,
    ACTIONS(212), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [627] = 2,
    ACTIONS(218), 1,
      anon_sym_print,
    ACTIONS(216), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [658] = 2,
    ACTIONS(222), 1,
      anon_sym_print,
    ACTIONS(220), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [689] = 2,
    ACTIONS(226), 1,
      anon_sym_print,
    ACTIONS(224), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [720] = 2,
    ACTIONS(230), 1,
      anon_sym_print,
    ACTIONS(228), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [751] = 2,
    ACTIONS(234), 1,
      anon_sym_print,
    ACTIONS(232), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [782] = 2,
    ACTIONS(238), 1,
      anon_sym_print,
    ACTIONS(236), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [813] = 2,
    ACTIONS(242), 1,
      anon_sym_print,
    ACTIONS(240), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [844] = 2,
    ACTIONS(246), 1,
      anon_sym_print,
    ACTIONS(244), 25,
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
      anon_sym_var,
      anon_sym_SLASH_SLASH,
  [875] = 8,
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
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(34), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [907] = 8,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_begin,
    ACTIONS(255), 1,
      anon_sym_goto,
    ACTIONS(258), 1,
      anon_sym_label,
    ACTIONS(261), 1,
      anon_sym_ifgoto,
    ACTIONS(264), 1,
      anon_sym_import,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [939] = 7,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(50), 1,
      sym_val,
    STATE(51), 1,
      sym_boolean,
    STATE(53), 1,
      sym_val_or_id,
    ACTIONS(272), 2,
      sym_integer,
      sym_double,
    ACTIONS(276), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(274), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [967] = 5,
    STATE(51), 1,
      sym_boolean,
    STATE(73), 1,
      sym_val,
    ACTIONS(272), 2,
      sym_integer,
      sym_double,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(274), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [989] = 1,
    ACTIONS(280), 1,
      anon_sym_SEMI,
  [993] = 1,
    ACTIONS(282), 1,
      anon_sym_SEMI,
  [997] = 1,
    ACTIONS(284), 1,
      sym_identifier,
  [1001] = 1,
    ACTIONS(286), 1,
      anon_sym_SEMI,
  [1005] = 1,
    ACTIONS(288), 1,
      sym_identifier,
  [1009] = 1,
    ACTIONS(290), 1,
      sym_identifier,
  [1013] = 1,
    ACTIONS(292), 1,
      anon_sym_SEMI,
  [1017] = 1,
    ACTIONS(294), 1,
      anon_sym_SEMI,
  [1021] = 1,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [1025] = 1,
    ACTIONS(298), 1,
      anon_sym_SEMI,
  [1029] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1033] = 1,
    ACTIONS(302), 1,
      anon_sym_SEMI,
  [1037] = 1,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [1041] = 1,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [1045] = 1,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [1049] = 1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [1053] = 1,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [1057] = 1,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [1061] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1065] = 1,
    ACTIONS(318), 1,
      sym_identifier,
  [1069] = 1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1073] = 1,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [1077] = 1,
    ACTIONS(324), 1,
      anon_sym_SEMI,
  [1081] = 1,
    ACTIONS(326), 1,
      anon_sym_SEMI,
  [1085] = 1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [1089] = 1,
    ACTIONS(330), 1,
      anon_sym_SEMI,
  [1093] = 1,
    ACTIONS(332), 1,
      sym_identifier,
  [1097] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
  [1101] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1105] = 1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
  [1109] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1113] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [1117] = 1,
    ACTIONS(344), 1,
      aux_sym_single_line_comment_token1,
  [1121] = 1,
    ACTIONS(346), 1,
      sym_string,
  [1125] = 1,
    ACTIONS(348), 1,
      sym_integer,
  [1129] = 1,
    ACTIONS(350), 1,
      sym_identifier,
  [1133] = 1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [1137] = 1,
    ACTIONS(354), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 379,
  [SMALL_STATE(18)] = 410,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 472,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 565,
  [SMALL_STATE(24)] = 596,
  [SMALL_STATE(25)] = 627,
  [SMALL_STATE(26)] = 658,
  [SMALL_STATE(27)] = 689,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 751,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 813,
  [SMALL_STATE(32)] = 844,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 907,
  [SMALL_STATE(35)] = 939,
  [SMALL_STATE(36)] = 967,
  [SMALL_STATE(37)] = 989,
  [SMALL_STATE(38)] = 993,
  [SMALL_STATE(39)] = 997,
  [SMALL_STATE(40)] = 1001,
  [SMALL_STATE(41)] = 1005,
  [SMALL_STATE(42)] = 1009,
  [SMALL_STATE(43)] = 1013,
  [SMALL_STATE(44)] = 1017,
  [SMALL_STATE(45)] = 1021,
  [SMALL_STATE(46)] = 1025,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1033,
  [SMALL_STATE(49)] = 1037,
  [SMALL_STATE(50)] = 1041,
  [SMALL_STATE(51)] = 1045,
  [SMALL_STATE(52)] = 1049,
  [SMALL_STATE(53)] = 1053,
  [SMALL_STATE(54)] = 1057,
  [SMALL_STATE(55)] = 1061,
  [SMALL_STATE(56)] = 1065,
  [SMALL_STATE(57)] = 1069,
  [SMALL_STATE(58)] = 1073,
  [SMALL_STATE(59)] = 1077,
  [SMALL_STATE(60)] = 1081,
  [SMALL_STATE(61)] = 1085,
  [SMALL_STATE(62)] = 1089,
  [SMALL_STATE(63)] = 1093,
  [SMALL_STATE(64)] = 1097,
  [SMALL_STATE(65)] = 1101,
  [SMALL_STATE(66)] = 1105,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1113,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1121,
  [SMALL_STATE(71)] = 1125,
  [SMALL_STATE(72)] = 1129,
  [SMALL_STATE(73)] = 1133,
  [SMALL_STATE(74)] = 1137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmp, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmp, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_def, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettype, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gettype, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rshift, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rshift, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pop, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pop, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lshift, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lshift, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_println, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_println, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_show, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_id, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
