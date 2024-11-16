#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  sym_source_file = 37,
  sym__statement = 38,
  sym_function_def = 39,
  sym_goto = 40,
  sym_label = 41,
  sym_ifgoto = 42,
  sym_import = 43,
  sym_instruction_or_statement = 44,
  sym_instruction = 45,
  sym_show = 46,
  sym_str = 47,
  sym_print = 48,
  sym_println = 49,
  sym_push = 50,
  sym_pop = 51,
  sym_add = 52,
  sym_sub = 53,
  sym_mul = 54,
  sym_div = 55,
  sym_lshift = 56,
  sym_rshift = 57,
  sym_cmp = 58,
  sym_halt = 59,
  sym_increment = 60,
  sym_decrement = 61,
  sym_call = 62,
  sym_gettype = 63,
  sym_val_or_id = 64,
  sym_val = 65,
  sym_boolean = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_function_def_repeat1 = 68,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 2,
        '\'', 79,
        ':', 82,
        ';', 85,
        'a', 15,
        'b', 16,
        'c', 4,
        'd', 17,
        'e', 44,
        'f', 6,
        'g', 46,
        'h', 7,
        'i', 22,
        'l', 5,
        'm', 73,
        'p', 50,
        'r', 64,
        's', 28,
        't', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 't') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 76:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ifgoto);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_incr);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_decr);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bigdouble);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_biginteger);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '?') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
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
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym__statement] = STATE(32),
    [sym_function_def] = STATE(32),
    [sym_goto] = STATE(32),
    [sym_label] = STATE(32),
    [sym_ifgoto] = STATE(32),
    [sym_import] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
  },
  [2] = {
    [sym__statement] = STATE(16),
    [sym_function_def] = STATE(16),
    [sym_goto] = STATE(16),
    [sym_label] = STATE(16),
    [sym_ifgoto] = STATE(16),
    [sym_import] = STATE(16),
    [sym_instruction_or_statement] = STATE(3),
    [sym_instruction] = STATE(16),
    [sym_show] = STATE(20),
    [sym_str] = STATE(20),
    [sym_print] = STATE(20),
    [sym_println] = STATE(20),
    [sym_push] = STATE(20),
    [sym_pop] = STATE(20),
    [sym_add] = STATE(20),
    [sym_sub] = STATE(20),
    [sym_mul] = STATE(20),
    [sym_div] = STATE(20),
    [sym_lshift] = STATE(20),
    [sym_rshift] = STATE(20),
    [sym_cmp] = STATE(20),
    [sym_halt] = STATE(20),
    [sym_increment] = STATE(20),
    [sym_decrement] = STATE(20),
    [sym_call] = STATE(20),
    [sym_gettype] = STATE(20),
    [aux_sym_function_def_repeat1] = STATE(3),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_println] = ACTIONS(23),
    [anon_sym_push] = ACTIONS(25),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_add] = ACTIONS(29),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(35),
    [anon_sym_lshift] = ACTIONS(37),
    [anon_sym_rshift] = ACTIONS(39),
    [anon_sym_cmp] = ACTIONS(41),
    [anon_sym_halt] = ACTIONS(43),
    [anon_sym_incr] = ACTIONS(45),
    [anon_sym_decr] = ACTIONS(47),
    [anon_sym_call] = ACTIONS(49),
    [anon_sym_type] = ACTIONS(51),
  },
  [3] = {
    [sym__statement] = STATE(16),
    [sym_function_def] = STATE(16),
    [sym_goto] = STATE(16),
    [sym_label] = STATE(16),
    [sym_ifgoto] = STATE(16),
    [sym_import] = STATE(16),
    [sym_instruction_or_statement] = STATE(4),
    [sym_instruction] = STATE(16),
    [sym_show] = STATE(20),
    [sym_str] = STATE(20),
    [sym_print] = STATE(20),
    [sym_println] = STATE(20),
    [sym_push] = STATE(20),
    [sym_pop] = STATE(20),
    [sym_add] = STATE(20),
    [sym_sub] = STATE(20),
    [sym_mul] = STATE(20),
    [sym_div] = STATE(20),
    [sym_lshift] = STATE(20),
    [sym_rshift] = STATE(20),
    [sym_cmp] = STATE(20),
    [sym_halt] = STATE(20),
    [sym_increment] = STATE(20),
    [sym_decrement] = STATE(20),
    [sym_call] = STATE(20),
    [sym_gettype] = STATE(20),
    [aux_sym_function_def_repeat1] = STATE(4),
    [anon_sym_begin] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_ifgoto] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_println] = ACTIONS(23),
    [anon_sym_push] = ACTIONS(25),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_add] = ACTIONS(29),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(35),
    [anon_sym_lshift] = ACTIONS(37),
    [anon_sym_rshift] = ACTIONS(39),
    [anon_sym_cmp] = ACTIONS(41),
    [anon_sym_halt] = ACTIONS(43),
    [anon_sym_incr] = ACTIONS(45),
    [anon_sym_decr] = ACTIONS(47),
    [anon_sym_call] = ACTIONS(49),
    [anon_sym_type] = ACTIONS(51),
  },
  [4] = {
    [sym__statement] = STATE(16),
    [sym_function_def] = STATE(16),
    [sym_goto] = STATE(16),
    [sym_label] = STATE(16),
    [sym_ifgoto] = STATE(16),
    [sym_import] = STATE(16),
    [sym_instruction_or_statement] = STATE(4),
    [sym_instruction] = STATE(16),
    [sym_show] = STATE(20),
    [sym_str] = STATE(20),
    [sym_print] = STATE(20),
    [sym_println] = STATE(20),
    [sym_push] = STATE(20),
    [sym_pop] = STATE(20),
    [sym_add] = STATE(20),
    [sym_sub] = STATE(20),
    [sym_mul] = STATE(20),
    [sym_div] = STATE(20),
    [sym_lshift] = STATE(20),
    [sym_rshift] = STATE(20),
    [sym_cmp] = STATE(20),
    [sym_halt] = STATE(20),
    [sym_increment] = STATE(20),
    [sym_decrement] = STATE(20),
    [sym_call] = STATE(20),
    [sym_gettype] = STATE(20),
    [aux_sym_function_def_repeat1] = STATE(4),
    [anon_sym_begin] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(58),
    [anon_sym_goto] = ACTIONS(60),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_ifgoto] = ACTIONS(66),
    [anon_sym_import] = ACTIONS(69),
    [anon_sym_show] = ACTIONS(72),
    [anon_sym_str] = ACTIONS(75),
    [anon_sym_print] = ACTIONS(78),
    [anon_sym_println] = ACTIONS(81),
    [anon_sym_push] = ACTIONS(84),
    [anon_sym_pop] = ACTIONS(87),
    [anon_sym_add] = ACTIONS(90),
    [anon_sym_sub] = ACTIONS(93),
    [anon_sym_mul] = ACTIONS(96),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_lshift] = ACTIONS(102),
    [anon_sym_rshift] = ACTIONS(105),
    [anon_sym_cmp] = ACTIONS(108),
    [anon_sym_halt] = ACTIONS(111),
    [anon_sym_incr] = ACTIONS(114),
    [anon_sym_decr] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(128), 1,
      anon_sym_print,
    ACTIONS(126), 24,
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
  [30] = 2,
    ACTIONS(132), 1,
      anon_sym_print,
    ACTIONS(130), 24,
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
  [60] = 2,
    ACTIONS(136), 1,
      anon_sym_print,
    ACTIONS(134), 24,
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
  [90] = 2,
    ACTIONS(140), 1,
      anon_sym_print,
    ACTIONS(138), 24,
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
  [120] = 2,
    ACTIONS(144), 1,
      anon_sym_print,
    ACTIONS(142), 24,
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
  [150] = 2,
    ACTIONS(148), 1,
      anon_sym_print,
    ACTIONS(146), 24,
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
  [180] = 2,
    ACTIONS(152), 1,
      anon_sym_print,
    ACTIONS(150), 23,
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
  [209] = 2,
    ACTIONS(156), 1,
      anon_sym_print,
    ACTIONS(154), 23,
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
  [238] = 2,
    ACTIONS(160), 1,
      anon_sym_print,
    ACTIONS(158), 23,
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
  [267] = 2,
    ACTIONS(164), 1,
      anon_sym_print,
    ACTIONS(162), 23,
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
  [296] = 2,
    ACTIONS(168), 1,
      anon_sym_print,
    ACTIONS(166), 23,
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
  [325] = 2,
    ACTIONS(172), 1,
      anon_sym_print,
    ACTIONS(170), 23,
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
  [354] = 2,
    ACTIONS(176), 1,
      anon_sym_print,
    ACTIONS(174), 23,
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
  [383] = 2,
    ACTIONS(180), 1,
      anon_sym_print,
    ACTIONS(178), 23,
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
  [412] = 2,
    ACTIONS(184), 1,
      anon_sym_print,
    ACTIONS(182), 23,
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
  [441] = 2,
    ACTIONS(188), 1,
      anon_sym_print,
    ACTIONS(186), 23,
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
  [470] = 2,
    ACTIONS(192), 1,
      anon_sym_print,
    ACTIONS(190), 23,
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
  [499] = 2,
    ACTIONS(196), 1,
      anon_sym_print,
    ACTIONS(194), 23,
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
  [528] = 2,
    ACTIONS(200), 1,
      anon_sym_print,
    ACTIONS(198), 23,
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
  [557] = 2,
    ACTIONS(204), 1,
      anon_sym_print,
    ACTIONS(202), 23,
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
  [586] = 2,
    ACTIONS(208), 1,
      anon_sym_print,
    ACTIONS(206), 23,
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
  [615] = 2,
    ACTIONS(212), 1,
      anon_sym_print,
    ACTIONS(210), 23,
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
  [644] = 2,
    ACTIONS(216), 1,
      anon_sym_print,
    ACTIONS(214), 23,
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
  [673] = 2,
    ACTIONS(220), 1,
      anon_sym_print,
    ACTIONS(218), 23,
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
  [702] = 2,
    ACTIONS(224), 1,
      anon_sym_print,
    ACTIONS(222), 23,
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
  [731] = 2,
    ACTIONS(228), 1,
      anon_sym_print,
    ACTIONS(226), 23,
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
  [760] = 7,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(47), 1,
      sym_val,
    STATE(48), 1,
      sym_boolean,
    STATE(50), 1,
      sym_val_or_id,
    ACTIONS(232), 2,
      sym_integer,
      sym_double,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 5,
      sym_float,
      sym_bigdouble,
      sym_biginteger,
      sym_string,
      sym_char,
  [788] = 7,
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
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(33), 7,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      aux_sym_source_file_repeat1,
  [816] = 7,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_begin,
    ACTIONS(245), 1,
      anon_sym_goto,
    ACTIONS(248), 1,
      anon_sym_label,
    ACTIONS(251), 1,
      anon_sym_ifgoto,
    ACTIONS(254), 1,
      anon_sym_import,
    STATE(33), 7,
      sym__statement,
      sym_function_def,
      sym_goto,
      sym_label,
      sym_ifgoto,
      sym_import,
      aux_sym_source_file_repeat1,
  [844] = 1,
    ACTIONS(257), 1,
      anon_sym_SEMI,
  [848] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [852] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [856] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [860] = 1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
  [864] = 1,
    ACTIONS(267), 1,
      sym_identifier,
  [868] = 1,
    ACTIONS(269), 1,
      anon_sym_SEMI,
  [872] = 1,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [876] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [880] = 1,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [884] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [888] = 1,
    ACTIONS(279), 1,
      anon_sym_SEMI,
  [892] = 1,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [896] = 1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [900] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [904] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [908] = 1,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [912] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [916] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [920] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [924] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [928] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [932] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [936] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [940] = 1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [944] = 1,
    ACTIONS(307), 1,
      sym_identifier,
  [948] = 1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [952] = 1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [956] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [960] = 1,
    ACTIONS(315), 1,
      anon_sym_COLON,
  [964] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [968] = 1,
    ACTIONS(319), 1,
      sym_string,
  [972] = 1,
    ACTIONS(321), 1,
      sym_integer,
  [976] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [980] = 1,
    ACTIONS(325), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 383,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 441,
  [SMALL_STATE(21)] = 470,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 557,
  [SMALL_STATE(25)] = 586,
  [SMALL_STATE(26)] = 615,
  [SMALL_STATE(27)] = 644,
  [SMALL_STATE(28)] = 673,
  [SMALL_STATE(29)] = 702,
  [SMALL_STATE(30)] = 731,
  [SMALL_STATE(31)] = 760,
  [SMALL_STATE(32)] = 788,
  [SMALL_STATE(33)] = 816,
  [SMALL_STATE(34)] = 844,
  [SMALL_STATE(35)] = 848,
  [SMALL_STATE(36)] = 852,
  [SMALL_STATE(37)] = 856,
  [SMALL_STATE(38)] = 860,
  [SMALL_STATE(39)] = 864,
  [SMALL_STATE(40)] = 868,
  [SMALL_STATE(41)] = 872,
  [SMALL_STATE(42)] = 876,
  [SMALL_STATE(43)] = 880,
  [SMALL_STATE(44)] = 884,
  [SMALL_STATE(45)] = 888,
  [SMALL_STATE(46)] = 892,
  [SMALL_STATE(47)] = 896,
  [SMALL_STATE(48)] = 900,
  [SMALL_STATE(49)] = 904,
  [SMALL_STATE(50)] = 908,
  [SMALL_STATE(51)] = 912,
  [SMALL_STATE(52)] = 916,
  [SMALL_STATE(53)] = 920,
  [SMALL_STATE(54)] = 924,
  [SMALL_STATE(55)] = 928,
  [SMALL_STATE(56)] = 932,
  [SMALL_STATE(57)] = 936,
  [SMALL_STATE(58)] = 940,
  [SMALL_STATE(59)] = 944,
  [SMALL_STATE(60)] = 948,
  [SMALL_STATE(61)] = 952,
  [SMALL_STATE(62)] = 956,
  [SMALL_STATE(63)] = 960,
  [SMALL_STATE(64)] = 964,
  [SMALL_STATE(65)] = 968,
  [SMALL_STATE(66)] = 972,
  [SMALL_STATE(67)] = 976,
  [SMALL_STATE(68)] = 980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifgoto, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmp, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmp, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rshift, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rshift, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_or_statement, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lshift, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lshift, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettype, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gettype, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pop, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pop, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_println, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_println, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_show, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_or_id, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
