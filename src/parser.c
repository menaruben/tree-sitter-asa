#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_raise = 9,
  anon_sym_show = 10,
  anon_sym_str = 11,
  anon_sym_print = 12,
  anon_sym_println = 13,
  anon_sym_push = 14,
  anon_sym_pop = 15,
  anon_sym_add = 16,
  anon_sym_sub = 17,
  anon_sym_mul = 18,
  anon_sym_div = 19,
  anon_sym_lshift = 20,
  anon_sym_rshift = 21,
  anon_sym_cmp = 22,
  anon_sym_halt = 23,
  anon_sym_incr = 24,
  anon_sym_decr = 25,
  anon_sym_call = 26,
  anon_sym_type = 27,
  anon_sym_var = 28,
  sym_identifier = 29,
  sym_integer = 30,
  sym_float = 31,
  sym_double = 32,
  sym_bigdouble = 33,
  sym_biginteger = 34,
  sym_string = 35,
  sym_char = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  anon_sym_SLASH_SLASH = 39,
  aux_sym_single_line_comment_token1 = 40,
  sym_source_file = 41,
  sym__statement = 42,
  sym_function_def = 43,
  sym_goto = 44,
  sym_label = 45,
  sym_ifgoto = 46,
  sym_import = 47,
  sym_instruction_or_statement = 48,
  sym_instruction = 49,
  sym_raise = 50,
  sym_show = 51,
  sym_str = 52,
  sym_print = 53,
  sym_println = 54,
  sym_push_id = 55,
  sym_push_val = 56,
  sym_pop = 57,
  sym_add = 58,
  sym_sub = 59,
  sym_mul = 60,
  sym_div = 61,
  sym_lshift = 62,
  sym_rshift = 63,
  sym_cmp = 64,
  sym_halt = 65,
  sym_increment = 66,
  sym_decrement = 67,
  sym_call = 68,
  sym_gettype = 69,
  sym_var_def = 70,
  sym_val = 71,
  sym_boolean = 72,
  sym_single_line_comment = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_function_def_repeat1 = 75,
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
  [anon_sym_raise] = "raise",
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
  [sym_raise] = "raise",
  [sym_show] = "show",
  [sym_str] = "str",
  [sym_print] = "print",
  [sym_println] = "println",
  [sym_push_id] = "push_id",
  [sym_push_val] = "push_val",
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
  [anon_sym_raise] = anon_sym_raise,
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
  [sym_raise] = sym_raise,
  [sym_show] = sym_show,
  [sym_str] = sym_str,
  [sym_print] = sym_print,
  [sym_println] = sym_println,
  [sym_push_id] = sym_push_id,
  [sym_push_val] = sym_push_val,
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
  [anon_sym_raise] = {
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
  [sym_raise] = {
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
  [sym_push_id] = {
    .visible = true,
    .named = true,
  },
  [sym_push_val] = {
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      ADVANCE_MAP(
        '"', 2,
        '\'', 85,
        '/', 4,
        ':', 88,
        ';', 91,
        'a', 18,
        'b', 19,
        'c', 5,
        'd', 20,
        'e', 49,
        'f', 7,
        'g', 51,
        'h', 10,
        'i', 26,
        'l', 6,
        'm', 79,
        'p', 55,
        'r', 8,
        's', 32,
        't', 66,
        'v', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 't') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 82:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ifgoto);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_raise);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_incr);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_decr);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bigdouble);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_biginteger);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 82},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 137},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
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
    [anon_sym_raise] = ACTIONS(1),
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
    [sym_source_file] = STATE(47),
    [sym__statement] = STATE(36),
    [sym_function_def] = STATE(36),
    [sym_goto] = STATE(36),
    [sym_label] = STATE(36),
    [sym_ifgoto] = STATE(36),
    [sym_import] = STATE(36),
    [sym_single_line_comment] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(25),
    [sym_function_def] = STATE(25),
    [sym_goto] = STATE(25),
    [sym_label] = STATE(25),
    [sym_ifgoto] = STATE(25),
    [sym_import] = STATE(25),
    [sym_instruction_or_statement] = STATE(2),
    [sym_instruction] = STATE(25),
    [sym_raise] = STATE(15),
    [sym_show] = STATE(15),
    [sym_str] = STATE(15),
    [sym_print] = STATE(15),
    [sym_println] = STATE(15),
    [sym_push_id] = STATE(15),
    [sym_push_val] = STATE(15),
    [sym_pop] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_lshift] = STATE(15),
    [sym_rshift] = STATE(15),
    [sym_cmp] = STATE(15),
    [sym_halt] = STATE(15),
    [sym_increment] = STATE(15),
    [sym_decrement] = STATE(15),
    [sym_call] = STATE(15),
    [sym_gettype] = STATE(15),
    [sym_var_def] = STATE(15),
    [sym_single_line_comment] = STATE(25),
    [aux_sym_function_def_repeat1] = STATE(2),
    [anon_sym_begin] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(20),
    [anon_sym_goto] = ACTIONS(22),
    [anon_sym_label] = ACTIONS(25),
    [anon_sym_ifgoto] = ACTIONS(28),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_raise] = ACTIONS(34),
    [anon_sym_show] = ACTIONS(37),
    [anon_sym_str] = ACTIONS(40),
    [anon_sym_print] = ACTIONS(43),
    [anon_sym_println] = ACTIONS(46),
    [anon_sym_push] = ACTIONS(49),
    [anon_sym_pop] = ACTIONS(52),
    [anon_sym_add] = ACTIONS(55),
    [anon_sym_sub] = ACTIONS(58),
    [anon_sym_mul] = ACTIONS(61),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_lshift] = ACTIONS(67),
    [anon_sym_rshift] = ACTIONS(70),
    [anon_sym_cmp] = ACTIONS(73),
    [anon_sym_halt] = ACTIONS(76),
    [anon_sym_incr] = ACTIONS(79),
    [anon_sym_decr] = ACTIONS(82),
    [anon_sym_call] = ACTIONS(85),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_var] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
  },
  [3] = {
    [sym__statement] = STATE(25),
    [sym_function_def] = STATE(25),
    [sym_goto] = STATE(25),
    [sym_label] = STATE(25),
    [sym_ifgoto] = STATE(25),
    [sym_import] = STATE(25),
    [sym_instruction_or_statement] = STATE(2),
    [sym_instruction] = STATE(25),
    [sym_raise] = STATE(15),
    [sym_show] = STATE(15),
    [sym_str] = STATE(15),
    [sym_print] = STATE(15),
    [sym_println] = STATE(15),
    [sym_push_id] = STATE(15),
    [sym_push_val] = STATE(15),
    [sym_pop] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_lshift] = STATE(15),
    [sym_rshift] = STATE(15),
    [sym_cmp] = STATE(15),
    [sym_halt] = STATE(15),
    [sym_increment] = STATE(15),
    [sym_decrement] = STATE(15),
    [sym_call] = STATE(15),
    [sym_gettype] = STATE(15),
    [sym_var_def] = STATE(15),
    [sym_single_line_comment] = STATE(25),
    [aux_sym_function_def_repeat1] = STATE(2),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_raise] = ACTIONS(99),
    [anon_sym_show] = ACTIONS(101),
    [anon_sym_str] = ACTIONS(103),
    [anon_sym_print] = ACTIONS(105),
    [anon_sym_println] = ACTIONS(107),
    [anon_sym_push] = ACTIONS(109),
    [anon_sym_pop] = ACTIONS(111),
    [anon_sym_add] = ACTIONS(113),
    [anon_sym_sub] = ACTIONS(115),
    [anon_sym_mul] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(119),
    [anon_sym_lshift] = ACTIONS(121),
    [anon_sym_rshift] = ACTIONS(123),
    [anon_sym_cmp] = ACTIONS(125),
    [anon_sym_halt] = ACTIONS(127),
    [anon_sym_incr] = ACTIONS(129),
    [anon_sym_decr] = ACTIONS(131),
    [anon_sym_call] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
  [4] = {
    [sym__statement] = STATE(25),
    [sym_function_def] = STATE(25),
    [sym_goto] = STATE(25),
    [sym_label] = STATE(25),
    [sym_ifgoto] = STATE(25),
    [sym_import] = STATE(25),
    [sym_instruction_or_statement] = STATE(3),
    [sym_instruction] = STATE(25),
    [sym_raise] = STATE(15),
    [sym_show] = STATE(15),
    [sym_str] = STATE(15),
    [sym_print] = STATE(15),
    [sym_println] = STATE(15),
    [sym_push_id] = STATE(15),
    [sym_push_val] = STATE(15),
    [sym_pop] = STATE(15),
    [sym_add] = STATE(15),
    [sym_sub] = STATE(15),
    [sym_mul] = STATE(15),
    [sym_div] = STATE(15),
    [sym_lshift] = STATE(15),
    [sym_rshift] = STATE(15),
    [sym_cmp] = STATE(15),
    [sym_halt] = STATE(15),
    [sym_increment] = STATE(15),
    [sym_decrement] = STATE(15),
    [sym_call] = STATE(15),
    [sym_gettype] = STATE(15),
    [sym_var_def] = STATE(15),
    [sym_single_line_comment] = STATE(25),
    [aux_sym_function_def_repeat1] = STATE(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_raise] = ACTIONS(99),
    [anon_sym_show] = ACTIONS(101),
    [anon_sym_str] = ACTIONS(103),
    [anon_sym_print] = ACTIONS(105),
    [anon_sym_println] = ACTIONS(107),
    [anon_sym_push] = ACTIONS(109),
    [anon_sym_pop] = ACTIONS(111),
    [anon_sym_add] = ACTIONS(113),
    [anon_sym_sub] = ACTIONS(115),
    [anon_sym_mul] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(119),
    [anon_sym_lshift] = ACTIONS(121),
    [anon_sym_rshift] = ACTIONS(123),
    [anon_sym_cmp] = ACTIONS(125),
    [anon_sym_halt] = ACTIONS(127),
    [anon_sym_incr] = ACTIONS(129),
    [anon_sym_decr] = ACTIONS(131),
    [anon_sym_call] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(143), 1,
      anon_sym_print,
    ACTIONS(141), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [33] = 2,
    ACTIONS(147), 1,
      anon_sym_print,
    ACTIONS(145), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [66] = 2,
    ACTIONS(151), 1,
      anon_sym_print,
    ACTIONS(149), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [99] = 2,
    ACTIONS(155), 1,
      anon_sym_print,
    ACTIONS(153), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [132] = 2,
    ACTIONS(159), 1,
      anon_sym_print,
    ACTIONS(157), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [165] = 2,
    ACTIONS(163), 1,
      anon_sym_print,
    ACTIONS(161), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [198] = 2,
    ACTIONS(167), 1,
      anon_sym_print,
    ACTIONS(165), 27,
      ts_builtin_sym_end,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [231] = 2,
    ACTIONS(171), 1,
      anon_sym_print,
    ACTIONS(169), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [263] = 2,
    ACTIONS(175), 1,
      anon_sym_print,
    ACTIONS(173), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [295] = 2,
    ACTIONS(179), 1,
      anon_sym_print,
    ACTIONS(177), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [327] = 2,
    ACTIONS(183), 1,
      anon_sym_print,
    ACTIONS(181), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [359] = 2,
    ACTIONS(187), 1,
      anon_sym_print,
    ACTIONS(185), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [391] = 2,
    ACTIONS(191), 1,
      anon_sym_print,
    ACTIONS(189), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [423] = 2,
    ACTIONS(195), 1,
      anon_sym_print,
    ACTIONS(193), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [455] = 2,
    ACTIONS(199), 1,
      anon_sym_print,
    ACTIONS(197), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [487] = 2,
    ACTIONS(203), 1,
      anon_sym_print,
    ACTIONS(201), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [519] = 2,
    ACTIONS(207), 1,
      anon_sym_print,
    ACTIONS(205), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [551] = 2,
    ACTIONS(211), 1,
      anon_sym_print,
    ACTIONS(209), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [583] = 2,
    ACTIONS(215), 1,
      anon_sym_print,
    ACTIONS(213), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [615] = 2,
    ACTIONS(219), 1,
      anon_sym_print,
    ACTIONS(217), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [647] = 2,
    ACTIONS(223), 1,
      anon_sym_print,
    ACTIONS(221), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [679] = 2,
    ACTIONS(227), 1,
      anon_sym_print,
    ACTIONS(225), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [711] = 2,
    ACTIONS(231), 1,
      anon_sym_print,
    ACTIONS(229), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [743] = 2,
    ACTIONS(235), 1,
      anon_sym_print,
    ACTIONS(233), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [775] = 2,
    ACTIONS(239), 1,
      anon_sym_print,
    ACTIONS(237), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [807] = 2,
    ACTIONS(243), 1,
      anon_sym_print,
    ACTIONS(241), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [839] = 2,
    ACTIONS(247), 1,
      anon_sym_print,
    ACTIONS(245), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [871] = 2,
    ACTIONS(251), 1,
      anon_sym_print,
    ACTIONS(249), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [903] = 2,
    ACTIONS(255), 1,
      anon_sym_print,
    ACTIONS(253), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [935] = 2,
    ACTIONS(259), 1,
      anon_sym_print,
    ACTIONS(257), 26,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_goto,
      anon_sym_label,
      anon_sym_ifgoto,
      anon_sym_import,
      anon_sym_raise,
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
  [967] = 8,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      anon_sym_begin,
    ACTIONS(266), 1,
      anon_sym_goto,
    ACTIONS(269), 1,
      anon_sym_label,
    ACTIONS(272), 1,
      anon_sym_ifgoto,
    ACTIONS(275), 1,
      anon_sym_import,
    ACTIONS(278), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [999] = 8,
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
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(35), 8,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      sym_single_line_comment,
      aux_sym_source_file_repeat1,
  [1031] = 6,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(53), 1,
      sym_boolean,
    STATE(55), 1,
      sym_val,
    ACTIONS(285), 2,
      sym_integer,
      sym_double,
    ACTIONS(289), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [1056] = 5,
    STATE(53), 1,
      sym_boolean,
    STATE(76), 1,
      sym_val,
    ACTIONS(285), 2,
      sym_integer,
      sym_double,
    ACTIONS(291), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [1078] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1082] = 1,
    ACTIONS(295), 1,
      sym_integer,
  [1086] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1090] = 1,
    ACTIONS(299), 1,
      sym_identifier,
  [1094] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [1098] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [1102] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1106] = 1,
    ACTIONS(307), 1,
      sym_string,
  [1110] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1114] = 1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [1118] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1122] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [1126] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1130] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [1134] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [1138] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [1142] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1146] = 1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
  [1150] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1154] = 1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [1158] = 1,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1162] = 1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [1166] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1170] = 1,
    ACTIONS(339), 1,
      aux_sym_single_line_comment_token1,
  [1174] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1178] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [1182] = 1,
    ACTIONS(345), 1,
      anon_sym_SEMI,
  [1186] = 1,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [1190] = 1,
    ACTIONS(349), 1,
      anon_sym_SEMI,
  [1194] = 1,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [1198] = 1,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [1202] = 1,
    ACTIONS(355), 1,
      sym_identifier,
  [1206] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1210] = 1,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [1214] = 1,
    ACTIONS(361), 1,
      sym_identifier,
  [1218] = 1,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1222] = 1,
    ACTIONS(365), 1,
      anon_sym_SEMI,
  [1226] = 1,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [1230] = 1,
    ACTIONS(369), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 359,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 423,
  [SMALL_STATE(19)] = 455,
  [SMALL_STATE(20)] = 487,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 583,
  [SMALL_STATE(24)] = 615,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 679,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 743,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 807,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 871,
  [SMALL_STATE(33)] = 903,
  [SMALL_STATE(34)] = 935,
  [SMALL_STATE(35)] = 967,
  [SMALL_STATE(36)] = 999,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1078,
  [SMALL_STATE(40)] = 1082,
  [SMALL_STATE(41)] = 1086,
  [SMALL_STATE(42)] = 1090,
  [SMALL_STATE(43)] = 1094,
  [SMALL_STATE(44)] = 1098,
  [SMALL_STATE(45)] = 1102,
  [SMALL_STATE(46)] = 1106,
  [SMALL_STATE(47)] = 1110,
  [SMALL_STATE(48)] = 1114,
  [SMALL_STATE(49)] = 1118,
  [SMALL_STATE(50)] = 1122,
  [SMALL_STATE(51)] = 1126,
  [SMALL_STATE(52)] = 1130,
  [SMALL_STATE(53)] = 1134,
  [SMALL_STATE(54)] = 1138,
  [SMALL_STATE(55)] = 1142,
  [SMALL_STATE(56)] = 1146,
  [SMALL_STATE(57)] = 1150,
  [SMALL_STATE(58)] = 1154,
  [SMALL_STATE(59)] = 1158,
  [SMALL_STATE(60)] = 1162,
  [SMALL_STATE(61)] = 1166,
  [SMALL_STATE(62)] = 1170,
  [SMALL_STATE(63)] = 1174,
  [SMALL_STATE(64)] = 1178,
  [SMALL_STATE(65)] = 1182,
  [SMALL_STATE(66)] = 1186,
  [SMALL_STATE(67)] = 1190,
  [SMALL_STATE(68)] = 1194,
  [SMALL_STATE(69)] = 1198,
  [SMALL_STATE(70)] = 1202,
  [SMALL_STATE(71)] = 1206,
  [SMALL_STATE(72)] = 1210,
  [SMALL_STATE(73)] = 1214,
  [SMALL_STATE(74)] = 1218,
  [SMALL_STATE(75)] = 1222,
  [SMALL_STATE(76)] = 1226,
  [SMALL_STATE(77)] = 1230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_def, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pop, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pop, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_val, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_val, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_id, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_id, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_show, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettype, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gettype, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmp, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmp, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rshift, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rshift, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lshift, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lshift, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_println, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_println, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
