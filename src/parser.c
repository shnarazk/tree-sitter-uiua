#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 213
#define ALIAS_COUNT 0
#define TOKEN_COUNT 206
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_number = 1,
  sym_character = 2,
  sym_string = 3,
  sym_identifier = 4,
  sym_system = 5,
  sym_comment = 6,
  sym_openParen = 7,
  sym_closeParen = 8,
  sym_openCurly = 9,
  sym_closeCurly = 10,
  sym_openBracket = 11,
  sym_closeBracket = 12,
  sym_underscore = 13,
  sym_bar = 14,
  anon_sym_COLON = 15,
  sym_leftArrow = 16,
  anon_sym_DOT = 17,
  anon_sym_COMMA = 18,
  anon_sym_SEMI = 19,
  anon_sym_identity = 20,
  anon_sym_ = 21,
  anon_sym_roll = 22,
  anon_sym_2 = 23,
  anon_sym_unroll = 24,
  anon_sym_3 = 25,
  anon_sym_not = 26,
  anon_sym_4 = 27,
  anon_sym_sign = 28,
  anon_sym_5 = 29,
  anon_sym_BQUOTE = 30,
  anon_sym_6 = 31,
  anon_sym_absolutevalue = 32,
  anon_sym_7 = 33,
  anon_sym_sqrt = 34,
  anon_sym_8 = 35,
  anon_sym_sine = 36,
  anon_sym_9 = 37,
  anon_sym_floor = 38,
  anon_sym_10 = 39,
  anon_sym_ceiling = 40,
  anon_sym_11 = 41,
  anon_sym_round = 42,
  anon_sym_12 = 43,
  anon_sym_EQ = 44,
  anon_sym_BANG_EQ = 45,
  anon_sym_13 = 46,
  anon_sym_LT = 47,
  anon_sym_LT_EQ = 48,
  anon_sym_14 = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_15 = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_STAR = 55,
  anon_sym_16 = 56,
  anon_sym_PERCENT = 57,
  anon_sym_17 = 58,
  anon_sym_modulus = 59,
  anon_sym_18 = 60,
  anon_sym_power = 61,
  anon_sym_19 = 62,
  anon_sym_logarithm = 63,
  anon_sym_20 = 64,
  anon_sym_minimum = 65,
  anon_sym_21 = 66,
  anon_sym_maximum = 67,
  anon_sym_22 = 68,
  anon_sym_atangent = 69,
  anon_sym_23 = 70,
  anon_sym_length = 71,
  anon_sym_24 = 72,
  anon_sym_shape = 73,
  anon_sym_25 = 74,
  anon_sym_range = 75,
  anon_sym_26 = 76,
  anon_sym_first = 77,
  anon_sym_27 = 78,
  anon_sym_reverse = 79,
  anon_sym_28 = 80,
  anon_sym_deshape = 81,
  anon_sym_29 = 82,
  anon_sym_bits = 83,
  anon_sym_30 = 84,
  anon_sym_transpose = 85,
  anon_sym_31 = 86,
  anon_sym_rise = 87,
  anon_sym_32 = 88,
  anon_sym_fall = 89,
  anon_sym_33 = 90,
  anon_sym_classify = 91,
  anon_sym_34 = 92,
  anon_sym_deduplicate = 93,
  anon_sym_35 = 94,
  anon_sym_box = 95,
  anon_sym_36 = 96,
  anon_sym_unbox = 97,
  anon_sym_37 = 98,
  anon_sym_match = 99,
  anon_sym_38 = 100,
  anon_sym_couple = 101,
  anon_sym_39 = 102,
  anon_sym_join = 103,
  anon_sym_40 = 104,
  anon_sym_select = 105,
  anon_sym_41 = 106,
  anon_sym_pick = 107,
  anon_sym_42 = 108,
  anon_sym_reshape = 109,
  anon_sym_43 = 110,
  anon_sym_take = 111,
  anon_sym_44 = 112,
  anon_sym_drop = 113,
  anon_sym_45 = 114,
  anon_sym_rotate = 115,
  anon_sym_46 = 116,
  anon_sym_windows = 117,
  anon_sym_47 = 118,
  anon_sym_keep = 119,
  anon_sym_48 = 120,
  anon_sym_find = 121,
  anon_sym_49 = 122,
  anon_sym_member = 123,
  anon_sym_50 = 124,
  anon_sym_indexof = 125,
  anon_sym_51 = 126,
  anon_sym_reduce = 127,
  anon_sym_SLASH = 128,
  anon_sym_fold = 129,
  anon_sym_52 = 130,
  anon_sym_scan = 131,
  anon_sym_BSLASH = 132,
  anon_sym_each = 133,
  anon_sym_53 = 134,
  anon_sym_rows = 135,
  anon_sym_54 = 136,
  anon_sym_distribute = 137,
  anon_sym_55 = 138,
  anon_sym_table = 139,
  anon_sym_56 = 140,
  anon_sym_cross = 141,
  anon_sym_57 = 142,
  anon_sym_repeat = 143,
  anon_sym_58 = 144,
  anon_sym_group = 145,
  anon_sym_59 = 146,
  anon_sym_partition = 147,
  anon_sym_60 = 148,
  anon_sym_both = 149,
  anon_sym_61 = 150,
  anon_sym_bracket = 151,
  anon_sym_62 = 152,
  anon_sym_fork = 153,
  anon_sym_63 = 154,
  anon_sym_dip = 155,
  anon_sym_64 = 156,
  anon_sym_gap = 157,
  anon_sym_65 = 158,
  anon_sym_restack = 159,
  anon_sym_66 = 160,
  anon_sym_invert = 161,
  anon_sym_67 = 162,
  anon_sym_under = 163,
  anon_sym_68 = 164,
  anon_sym_level = 165,
  anon_sym_69 = 166,
  anon_sym_fill = 167,
  anon_sym_70 = 168,
  anon_sym_bind = 169,
  anon_sym_SQUOTE = 170,
  anon_sym_QMARK = 171,
  anon_sym_try = 172,
  anon_sym_71 = 173,
  anon_sym_assert = 174,
  anon_sym_72 = 175,
  anon_sym_spawn = 176,
  anon_sym_73 = 177,
  anon_sym_wait = 178,
  anon_sym_74 = 179,
  anon_sym_BANG = 180,
  anon_sym_break = 181,
  anon_sym_75 = 182,
  anon_sym_recur = 183,
  anon_sym_76 = 184,
  anon_sym_random = 185,
  anon_sym_77 = 186,
  anon_sym_gen = 187,
  anon_sym_deal = 188,
  anon_sym_use = 189,
  anon_sym_tag = 190,
  anon_sym_type = 191,
  anon_sym_sig = 192,
  anon_sym_eta = 193,
  anon_sym_78 = 194,
  anon_sym_pi = 195,
  anon_sym_79 = 196,
  anon_sym_tau = 197,
  anon_sym_80 = 198,
  anon_sym_infinity = 199,
  anon_sym_81 = 200,
  anon_sym_TILDE = 201,
  anon_sym_dump = 202,
  anon_sym_FIXME_modifier1 = 203,
  anon_sym_FIXME_modifier2 = 204,
  sym__end_of_line = 205,
  sym_source_file = 206,
  sym_PROGRAM = 207,
  sym_value = 208,
  sym_function = 209,
  sym_modifier1 = 210,
  sym_modifier2 = 211,
  aux_sym_PROGRAM_repeat1 = 212,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_system] = "system",
  [sym_comment] = "comment",
  [sym_openParen] = "openParen",
  [sym_closeParen] = "closeParen",
  [sym_openCurly] = "openCurly",
  [sym_closeCurly] = "closeCurly",
  [sym_openBracket] = "openBracket",
  [sym_closeBracket] = "closeBracket",
  [sym_underscore] = "underscore",
  [sym_bar] = "bar",
  [anon_sym_COLON] = ":",
  [sym_leftArrow] = "leftArrow",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_identity] = "identity",
  [anon_sym_] = "∘",
  [anon_sym_roll] = "roll",
  [anon_sym_2] = "↷",
  [anon_sym_unroll] = "unroll",
  [anon_sym_3] = "↶",
  [anon_sym_not] = "not",
  [anon_sym_4] = "¬",
  [anon_sym_sign] = "sign",
  [anon_sym_5] = "±",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_6] = "¯",
  [anon_sym_absolutevalue] = "absolute value",
  [anon_sym_7] = "⌵",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_8] = "√",
  [anon_sym_sine] = "sine",
  [anon_sym_9] = "○",
  [anon_sym_floor] = "floor",
  [anon_sym_10] = "⌊",
  [anon_sym_ceiling] = "ceiling",
  [anon_sym_11] = "⌈",
  [anon_sym_round] = "round",
  [anon_sym_12] = "⁅",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_13] = "≠",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_14] = "≤",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_15] = "≥",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_16] = "×",
  [anon_sym_PERCENT] = "%",
  [anon_sym_17] = "÷",
  [anon_sym_modulus] = "modulus",
  [anon_sym_18] = "◿",
  [anon_sym_power] = "power",
  [anon_sym_19] = "ⁿ",
  [anon_sym_logarithm] = "logarithm",
  [anon_sym_20] = "ₙ",
  [anon_sym_minimum] = "minimum",
  [anon_sym_21] = "↧",
  [anon_sym_maximum] = "maximum",
  [anon_sym_22] = "↥",
  [anon_sym_atangent] = "atangent",
  [anon_sym_23] = "∠",
  [anon_sym_length] = "length",
  [anon_sym_24] = "⧻",
  [anon_sym_shape] = "shape",
  [anon_sym_25] = "△",
  [anon_sym_range] = "range",
  [anon_sym_26] = "⇡",
  [anon_sym_first] = "first",
  [anon_sym_27] = "⊢",
  [anon_sym_reverse] = "reverse",
  [anon_sym_28] = "⇌",
  [anon_sym_deshape] = "deshape",
  [anon_sym_29] = "♭",
  [anon_sym_bits] = "bits",
  [anon_sym_30] = "⋯",
  [anon_sym_transpose] = "transpose",
  [anon_sym_31] = "⍉",
  [anon_sym_rise] = "rise",
  [anon_sym_32] = "⍏",
  [anon_sym_fall] = "fall",
  [anon_sym_33] = "⍖",
  [anon_sym_classify] = "classify",
  [anon_sym_34] = "⊛",
  [anon_sym_deduplicate] = "deduplicate",
  [anon_sym_35] = "⊝",
  [anon_sym_box] = "box",
  [anon_sym_36] = "□",
  [anon_sym_unbox] = "unbox",
  [anon_sym_37] = "⊔",
  [anon_sym_match] = "match",
  [anon_sym_38] = "≅",
  [anon_sym_couple] = "couple",
  [anon_sym_39] = "⊟",
  [anon_sym_join] = "join",
  [anon_sym_40] = "⊂",
  [anon_sym_select] = "select",
  [anon_sym_41] = "⊏",
  [anon_sym_pick] = "pick",
  [anon_sym_42] = "⊡",
  [anon_sym_reshape] = "reshape",
  [anon_sym_43] = "↯",
  [anon_sym_take] = "take",
  [anon_sym_44] = "↙",
  [anon_sym_drop] = "drop",
  [anon_sym_45] = "↘",
  [anon_sym_rotate] = "rotate",
  [anon_sym_46] = "↻",
  [anon_sym_windows] = "windows",
  [anon_sym_47] = "◫",
  [anon_sym_keep] = "keep",
  [anon_sym_48] = "▽",
  [anon_sym_find] = "find",
  [anon_sym_49] = "⌕",
  [anon_sym_member] = "member",
  [anon_sym_50] = "∊",
  [anon_sym_indexof] = "indexof",
  [anon_sym_51] = "⊗",
  [anon_sym_reduce] = "reduce",
  [anon_sym_SLASH] = "/",
  [anon_sym_fold] = "fold",
  [anon_sym_52] = "∧",
  [anon_sym_scan] = "scan",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_each] = "each",
  [anon_sym_53] = "∵",
  [anon_sym_rows] = "rows",
  [anon_sym_54] = "≡",
  [anon_sym_distribute] = "distribute",
  [anon_sym_55] = "∺",
  [anon_sym_table] = "table",
  [anon_sym_56] = "⊞",
  [anon_sym_cross] = "cross",
  [anon_sym_57] = "⊠",
  [anon_sym_repeat] = "repeat",
  [anon_sym_58] = "⍥",
  [anon_sym_group] = "group",
  [anon_sym_59] = "⊕",
  [anon_sym_partition] = "partition",
  [anon_sym_60] = "⊜",
  [anon_sym_both] = "both",
  [anon_sym_61] = "∩",
  [anon_sym_bracket] = "bracket",
  [anon_sym_62] = "⊓",
  [anon_sym_fork] = "fork",
  [anon_sym_63] = "⊃",
  [anon_sym_dip] = "dip",
  [anon_sym_64] = "⊙",
  [anon_sym_gap] = "gap",
  [anon_sym_65] = "⋅",
  [anon_sym_restack] = "restack",
  [anon_sym_66] = "⇵",
  [anon_sym_invert] = "invert",
  [anon_sym_67] = "⍘",
  [anon_sym_under] = "under",
  [anon_sym_68] = "⍜",
  [anon_sym_level] = "level",
  [anon_sym_69] = "⍚",
  [anon_sym_fill] = "fill",
  [anon_sym_70] = "⬚",
  [anon_sym_bind] = "bind",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_QMARK] = "\?",
  [anon_sym_try] = "try",
  [anon_sym_71] = "⍣",
  [anon_sym_assert] = "assert",
  [anon_sym_72] = "⍤",
  [anon_sym_spawn] = "spawn",
  [anon_sym_73] = "↰",
  [anon_sym_wait] = "wait",
  [anon_sym_74] = "↲",
  [anon_sym_BANG] = "!",
  [anon_sym_break] = "break",
  [anon_sym_75] = "⎋",
  [anon_sym_recur] = "recur",
  [anon_sym_76] = "↬",
  [anon_sym_random] = "random",
  [anon_sym_77] = "⚂",
  [anon_sym_gen] = "gen",
  [anon_sym_deal] = "deal",
  [anon_sym_use] = "use",
  [anon_sym_tag] = "tag",
  [anon_sym_type] = "type",
  [anon_sym_sig] = "sig",
  [anon_sym_eta] = "eta",
  [anon_sym_78] = "η",
  [anon_sym_pi] = "pi",
  [anon_sym_79] = "π",
  [anon_sym_tau] = "tau",
  [anon_sym_80] = "τ",
  [anon_sym_infinity] = "infinity",
  [anon_sym_81] = "∞",
  [anon_sym_TILDE] = "~",
  [anon_sym_dump] = "dump",
  [anon_sym_FIXME_modifier1] = "FIXME_modifier1",
  [anon_sym_FIXME_modifier2] = "FIXME_modifier2",
  [sym__end_of_line] = "_end_of_line",
  [sym_source_file] = "source_file",
  [sym_PROGRAM] = "PROGRAM",
  [sym_value] = "value",
  [sym_function] = "function",
  [sym_modifier1] = "modifier1",
  [sym_modifier2] = "modifier2",
  [aux_sym_PROGRAM_repeat1] = "PROGRAM_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_system] = sym_system,
  [sym_comment] = sym_comment,
  [sym_openParen] = sym_openParen,
  [sym_closeParen] = sym_closeParen,
  [sym_openCurly] = sym_openCurly,
  [sym_closeCurly] = sym_closeCurly,
  [sym_openBracket] = sym_openBracket,
  [sym_closeBracket] = sym_closeBracket,
  [sym_underscore] = sym_underscore,
  [sym_bar] = sym_bar,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_leftArrow] = sym_leftArrow,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_] = anon_sym_,
  [anon_sym_roll] = anon_sym_roll,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_unroll] = anon_sym_unroll,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_sign] = anon_sym_sign,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_absolutevalue] = anon_sym_absolutevalue,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_sine] = anon_sym_sine,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_ceiling] = anon_sym_ceiling,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_modulus] = anon_sym_modulus,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_power] = anon_sym_power,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_logarithm] = anon_sym_logarithm,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_minimum] = anon_sym_minimum,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_maximum] = anon_sym_maximum,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_atangent] = anon_sym_atangent,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_deshape] = anon_sym_deshape,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_transpose] = anon_sym_transpose,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_rise] = anon_sym_rise,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_fall] = anon_sym_fall,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_classify] = anon_sym_classify,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_deduplicate] = anon_sym_deduplicate,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_unbox] = anon_sym_unbox,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_38] = anon_sym_38,
  [anon_sym_couple] = anon_sym_couple,
  [anon_sym_39] = anon_sym_39,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_40] = anon_sym_40,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_41] = anon_sym_41,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_42] = anon_sym_42,
  [anon_sym_reshape] = anon_sym_reshape,
  [anon_sym_43] = anon_sym_43,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_44] = anon_sym_44,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_45] = anon_sym_45,
  [anon_sym_rotate] = anon_sym_rotate,
  [anon_sym_46] = anon_sym_46,
  [anon_sym_windows] = anon_sym_windows,
  [anon_sym_47] = anon_sym_47,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_48] = anon_sym_48,
  [anon_sym_find] = anon_sym_find,
  [anon_sym_49] = anon_sym_49,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_50] = anon_sym_50,
  [anon_sym_indexof] = anon_sym_indexof,
  [anon_sym_51] = anon_sym_51,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_52] = anon_sym_52,
  [anon_sym_scan] = anon_sym_scan,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_rows] = anon_sym_rows,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_distribute] = anon_sym_distribute,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_cross] = anon_sym_cross,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_partition] = anon_sym_partition,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_61] = anon_sym_61,
  [anon_sym_bracket] = anon_sym_bracket,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_fork] = anon_sym_fork,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_dip] = anon_sym_dip,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_gap] = anon_sym_gap,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_restack] = anon_sym_restack,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_invert] = anon_sym_invert,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_under] = anon_sym_under,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_69] = anon_sym_69,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_70] = anon_sym_70,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_72] = anon_sym_72,
  [anon_sym_spawn] = anon_sym_spawn,
  [anon_sym_73] = anon_sym_73,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_74] = anon_sym_74,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_75] = anon_sym_75,
  [anon_sym_recur] = anon_sym_recur,
  [anon_sym_76] = anon_sym_76,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_77] = anon_sym_77,
  [anon_sym_gen] = anon_sym_gen,
  [anon_sym_deal] = anon_sym_deal,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_sig] = anon_sym_sig,
  [anon_sym_eta] = anon_sym_eta,
  [anon_sym_78] = anon_sym_78,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_79] = anon_sym_79,
  [anon_sym_tau] = anon_sym_tau,
  [anon_sym_80] = anon_sym_80,
  [anon_sym_infinity] = anon_sym_infinity,
  [anon_sym_81] = anon_sym_81,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_dump] = anon_sym_dump,
  [anon_sym_FIXME_modifier1] = anon_sym_FIXME_modifier1,
  [anon_sym_FIXME_modifier2] = anon_sym_FIXME_modifier2,
  [sym__end_of_line] = sym__end_of_line,
  [sym_source_file] = sym_source_file,
  [sym_PROGRAM] = sym_PROGRAM,
  [sym_value] = sym_value,
  [sym_function] = sym_function,
  [sym_modifier1] = sym_modifier1,
  [sym_modifier2] = sym_modifier2,
  [aux_sym_PROGRAM_repeat1] = aux_sym_PROGRAM_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_system] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_openParen] = {
    .visible = true,
    .named = true,
  },
  [sym_closeParen] = {
    .visible = true,
    .named = true,
  },
  [sym_openCurly] = {
    .visible = true,
    .named = true,
  },
  [sym_closeCurly] = {
    .visible = true,
    .named = true,
  },
  [sym_openBracket] = {
    .visible = true,
    .named = true,
  },
  [sym_closeBracket] = {
    .visible = true,
    .named = true,
  },
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_leftArrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolutevalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceiling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
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
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logarithm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minimum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atangent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deshape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transpose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_33] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_34] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deduplicate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_35] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_36] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_37] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_38] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_couple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_39] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_41] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_42] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reshape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_43] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_44] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_45] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_46] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_47] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_49] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_50] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_51] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_52] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cross] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_59] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_60] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bracket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fork] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_67] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_under] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_68] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_69] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_70] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spawn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_75] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_78] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_79] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_81] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIXME_modifier1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIXME_modifier2] = {
    .visible = true,
    .named = false,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_PROGRAM] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier1] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_PROGRAM_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '%') ADVANCE(355);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == ')') ADVANCE(306);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead == '+') ADVANCE(351);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '<') ADVANCE(345);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(348);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(430);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'j') ADVANCE(205);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '|') ADVANCE(312);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '~') ADVANCE(499);
      if (lookahead == 172) ADVANCE(325);
      if (lookahead == 175) ADVANCE(329);
      if (lookahead == 177) ADVANCE(327);
      if (lookahead == 215) ADVANCE(354);
      if (lookahead == 247) ADVANCE(356);
      if (lookahead == 951) ADVANCE(492);
      if (lookahead == 960) ADVANCE(494);
      if (lookahead == 964) ADVANCE(496);
      if (lookahead == 8261) ADVANCE(341);
      if (lookahead == 8319) ADVANCE(360);
      if (lookahead == 8345) ADVANCE(362);
      if (lookahead == 8592) ADVANCE(314);
      if (lookahead == 8600) ADVANCE(412);
      if (lookahead == 8601) ADVANCE(410);
      if (lookahead == 8613) ADVANCE(366);
      if (lookahead == 8615) ADVANCE(364);
      if (lookahead == 8620) ADVANCE(482);
      if (lookahead == 8623) ADVANCE(408);
      if (lookahead == 8624) ADVANCE(475);
      if (lookahead == 8626) ADVANCE(477);
      if (lookahead == 8630) ADVANCE(323);
      if (lookahead == 8631) ADVANCE(321);
      if (lookahead == 8635) ADVANCE(414);
      if (lookahead == 8652) ADVANCE(378);
      if (lookahead == 8673) ADVANCE(374);
      if (lookahead == 8693) ADVANCE(458);
      if (lookahead == 8714) ADVANCE(422);
      if (lookahead == 8728) ADVANCE(319);
      if (lookahead == 8730) ADVANCE(333);
      if (lookahead == 8734) ADVANCE(498);
      if (lookahead == 8736) ADVANCE(368);
      if (lookahead == 8743) ADVANCE(428);
      if (lookahead == 8745) ADVANCE(448);
      if (lookahead == 8757) ADVANCE(432);
      if (lookahead == 8762) ADVANCE(436);
      if (lookahead == 8773) ADVANCE(398);
      if (lookahead == 8800) ADVANCE(344);
      if (lookahead == 8801) ADVANCE(434);
      if (lookahead == 8804) ADVANCE(347);
      if (lookahead == 8805) ADVANCE(350);
      if (lookahead == 8834) ADVANCE(402);
      if (lookahead == 8835) ADVANCE(452);
      if (lookahead == 8847) ADVANCE(404);
      if (lookahead == 8851) ADVANCE(450);
      if (lookahead == 8852) ADVANCE(396);
      if (lookahead == 8853) ADVANCE(444);
      if (lookahead == 8855) ADVANCE(424);
      if (lookahead == 8857) ADVANCE(454);
      if (lookahead == 8859) ADVANCE(390);
      if (lookahead == 8860) ADVANCE(446);
      if (lookahead == 8861) ADVANCE(392);
      if (lookahead == 8862) ADVANCE(438);
      if (lookahead == 8863) ADVANCE(400);
      if (lookahead == 8864) ADVANCE(440);
      if (lookahead == 8865) ADVANCE(406);
      if (lookahead == 8866) ADVANCE(376);
      if (lookahead == 8901) ADVANCE(456);
      if (lookahead == 8943) ADVANCE(382);
      if (lookahead == 8968) ADVANCE(339);
      if (lookahead == 8970) ADVANCE(337);
      if (lookahead == 8981) ADVANCE(420);
      if (lookahead == 9013) ADVANCE(331);
      if (lookahead == 9033) ADVANCE(384);
      if (lookahead == 9039) ADVANCE(386);
      if (lookahead == 9046) ADVANCE(388);
      if (lookahead == 9048) ADVANCE(460);
      if (lookahead == 9050) ADVANCE(464);
      if (lookahead == 9052) ADVANCE(462);
      if (lookahead == 9059) ADVANCE(471);
      if (lookahead == 9060) ADVANCE(473);
      if (lookahead == 9061) ADVANCE(442);
      if (lookahead == 9099) ADVANCE(480);
      if (lookahead == 9633) ADVANCE(394);
      if (lookahead == 9651) ADVANCE(372);
      if (lookahead == 9661) ADVANCE(418);
      if (lookahead == 9675) ADVANCE(335);
      if (lookahead == 9707) ADVANCE(416);
      if (lookahead == 9727) ADVANCE(358);
      if (lookahead == 9837) ADVANCE(380);
      if (lookahead == 9858) ADVANCE(484);
      if (lookahead == 10747) ADVANCE(370);
      if (lookahead == 11034) ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(503);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n' ||
          lookahead == 't') ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(501);
      if (lookahead == '2') ADVANCE(502);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'v') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 175) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 23:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 't') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 's') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'y') ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 'q') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 't') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(453);
      if (lookahead == 's') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_system);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_openParen);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_closeParen);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_openCurly);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_closeCurly);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_openBracket);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_closeBracket);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bar);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_leftArrow);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_identity);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_roll);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_unroll);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_sign);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == 8734) ADVANCE(27);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_absolutevalue);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_sqrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_sine);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_floor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_ceiling);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_round);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_modulus);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_power);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_logarithm);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_minimum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_maximum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_atangent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_length);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_shape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_range);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_first);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_deshape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_bits);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_transpose);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_rise);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_fall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_classify);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_deduplicate);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_box);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_unbox);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_match);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_couple);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_join);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_select);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_pick);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_reshape);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_take);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_44);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_drop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_rotate);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_windows);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_keep);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_find);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_member);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_indexof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_reduce);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_fold);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_scan);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_each);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_rows);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_distribute);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_55);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_table);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_cross);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_group);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_partition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_both);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_bracket);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_fork);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_dip);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_gap);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_restack);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_invert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_under);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_level);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_try);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_spawn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_wait);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(343);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_break);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_recur);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_random);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_gen);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_deal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_use);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == 'n') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'c') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_infinity);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dump);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_FIXME_modifier1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_FIXME_modifier2);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__end_of_line);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_system] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(1),
    [sym_closeParen] = ACTIONS(1),
    [sym_openCurly] = ACTIONS(1),
    [sym_closeCurly] = ACTIONS(1),
    [sym_openBracket] = ACTIONS(1),
    [sym_closeBracket] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [sym_bar] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_leftArrow] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_roll] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_unroll] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_sign] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_absolutevalue] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_sine] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_ceiling] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_modulus] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_power] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_logarithm] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_minimum] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_maximum] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_atangent] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_deshape] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_transpose] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_rise] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_fall] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_classify] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_deduplicate] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_unbox] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
    [anon_sym_couple] = ACTIONS(1),
    [anon_sym_39] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_40] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_41] = ACTIONS(1),
    [anon_sym_pick] = ACTIONS(1),
    [anon_sym_42] = ACTIONS(1),
    [anon_sym_reshape] = ACTIONS(1),
    [anon_sym_43] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_44] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_45] = ACTIONS(1),
    [anon_sym_rotate] = ACTIONS(1),
    [anon_sym_46] = ACTIONS(1),
    [anon_sym_windows] = ACTIONS(1),
    [anon_sym_47] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_48] = ACTIONS(1),
    [anon_sym_find] = ACTIONS(1),
    [anon_sym_49] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_50] = ACTIONS(1),
    [anon_sym_indexof] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_scan] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_rows] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_distribute] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_cross] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_partition] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_bracket] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_fork] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_dip] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_gap] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_restack] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_invert] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_under] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
    [anon_sym_spawn] = ACTIONS(1),
    [anon_sym_73] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_74] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_75] = ACTIONS(1),
    [anon_sym_recur] = ACTIONS(1),
    [anon_sym_76] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_77] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_deal] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_eta] = ACTIONS(1),
    [anon_sym_78] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_79] = ACTIONS(1),
    [anon_sym_tau] = ACTIONS(1),
    [anon_sym_80] = ACTIONS(1),
    [anon_sym_infinity] = ACTIONS(1),
    [anon_sym_81] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_dump] = ACTIONS(1),
    [anon_sym_FIXME_modifier1] = ACTIONS(1),
    [anon_sym_FIXME_modifier2] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_PROGRAM] = STATE(9),
    [sym_value] = STATE(2),
    [sym_function] = STATE(2),
    [sym_modifier1] = STATE(2),
    [sym_modifier2] = STATE(2),
    [aux_sym_PROGRAM_repeat1] = STATE(2),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_system] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_leftArrow] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(15),
    [anon_sym_] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_unroll] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_sign] = ACTIONS(15),
    [anon_sym_5] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_6] = ACTIONS(15),
    [anon_sym_absolutevalue] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(13),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_8] = ACTIONS(13),
    [anon_sym_sine] = ACTIONS(15),
    [anon_sym_9] = ACTIONS(13),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_10] = ACTIONS(13),
    [anon_sym_ceiling] = ACTIONS(15),
    [anon_sym_11] = ACTIONS(13),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_12] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_13] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_14] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_15] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_16] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_17] = ACTIONS(13),
    [anon_sym_modulus] = ACTIONS(15),
    [anon_sym_18] = ACTIONS(13),
    [anon_sym_power] = ACTIONS(15),
    [anon_sym_19] = ACTIONS(13),
    [anon_sym_logarithm] = ACTIONS(15),
    [anon_sym_20] = ACTIONS(13),
    [anon_sym_minimum] = ACTIONS(15),
    [anon_sym_21] = ACTIONS(13),
    [anon_sym_maximum] = ACTIONS(15),
    [anon_sym_22] = ACTIONS(13),
    [anon_sym_atangent] = ACTIONS(15),
    [anon_sym_23] = ACTIONS(13),
    [anon_sym_length] = ACTIONS(15),
    [anon_sym_24] = ACTIONS(13),
    [anon_sym_shape] = ACTIONS(15),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_first] = ACTIONS(15),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(15),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_deshape] = ACTIONS(15),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_bits] = ACTIONS(15),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_transpose] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(13),
    [anon_sym_rise] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(13),
    [anon_sym_fall] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(13),
    [anon_sym_classify] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(13),
    [anon_sym_deduplicate] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(13),
    [anon_sym_box] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(13),
    [anon_sym_unbox] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(13),
    [anon_sym_couple] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(13),
    [anon_sym_join] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(13),
    [anon_sym_pick] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(13),
    [anon_sym_reshape] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(13),
    [anon_sym_take] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(13),
    [anon_sym_drop] = ACTIONS(15),
    [anon_sym_45] = ACTIONS(13),
    [anon_sym_rotate] = ACTIONS(15),
    [anon_sym_46] = ACTIONS(13),
    [anon_sym_windows] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(13),
    [anon_sym_keep] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(13),
    [anon_sym_find] = ACTIONS(15),
    [anon_sym_49] = ACTIONS(13),
    [anon_sym_member] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(13),
    [anon_sym_indexof] = ACTIONS(15),
    [anon_sym_51] = ACTIONS(13),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_fold] = ACTIONS(15),
    [anon_sym_52] = ACTIONS(13),
    [anon_sym_scan] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_each] = ACTIONS(15),
    [anon_sym_53] = ACTIONS(13),
    [anon_sym_rows] = ACTIONS(15),
    [anon_sym_54] = ACTIONS(13),
    [anon_sym_distribute] = ACTIONS(15),
    [anon_sym_55] = ACTIONS(13),
    [anon_sym_table] = ACTIONS(15),
    [anon_sym_56] = ACTIONS(13),
    [anon_sym_cross] = ACTIONS(15),
    [anon_sym_57] = ACTIONS(13),
    [anon_sym_repeat] = ACTIONS(15),
    [anon_sym_58] = ACTIONS(13),
    [anon_sym_group] = ACTIONS(15),
    [anon_sym_59] = ACTIONS(13),
    [anon_sym_partition] = ACTIONS(15),
    [anon_sym_60] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(15),
    [anon_sym_61] = ACTIONS(13),
    [anon_sym_bracket] = ACTIONS(15),
    [anon_sym_62] = ACTIONS(13),
    [anon_sym_fork] = ACTIONS(15),
    [anon_sym_63] = ACTIONS(13),
    [anon_sym_dip] = ACTIONS(15),
    [anon_sym_64] = ACTIONS(13),
    [anon_sym_gap] = ACTIONS(15),
    [anon_sym_65] = ACTIONS(13),
    [anon_sym_restack] = ACTIONS(15),
    [anon_sym_66] = ACTIONS(13),
    [anon_sym_invert] = ACTIONS(15),
    [anon_sym_67] = ACTIONS(13),
    [anon_sym_under] = ACTIONS(15),
    [anon_sym_68] = ACTIONS(13),
    [anon_sym_level] = ACTIONS(15),
    [anon_sym_69] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_70] = ACTIONS(13),
    [anon_sym_bind] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_71] = ACTIONS(13),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_72] = ACTIONS(13),
    [anon_sym_spawn] = ACTIONS(15),
    [anon_sym_73] = ACTIONS(13),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_74] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_75] = ACTIONS(13),
    [anon_sym_recur] = ACTIONS(15),
    [anon_sym_76] = ACTIONS(13),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_77] = ACTIONS(13),
    [anon_sym_gen] = ACTIONS(15),
    [anon_sym_deal] = ACTIONS(15),
    [anon_sym_use] = ACTIONS(15),
    [anon_sym_tag] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_sig] = ACTIONS(15),
    [anon_sym_eta] = ACTIONS(15),
    [anon_sym_78] = ACTIONS(13),
    [anon_sym_pi] = ACTIONS(15),
    [anon_sym_79] = ACTIONS(13),
    [anon_sym_tau] = ACTIONS(15),
    [anon_sym_80] = ACTIONS(13),
    [anon_sym_infinity] = ACTIONS(15),
    [anon_sym_81] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_dump] = ACTIONS(15),
    [anon_sym_FIXME_modifier1] = ACTIONS(17),
    [anon_sym_FIXME_modifier2] = ACTIONS(19),
    [sym__end_of_line] = ACTIONS(11),
  },
  [2] = {
    [sym_value] = STATE(3),
    [sym_function] = STATE(3),
    [sym_modifier1] = STATE(3),
    [sym_modifier2] = STATE(3),
    [aux_sym_PROGRAM_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_identifier] = ACTIONS(23),
    [sym_system] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_leftArrow] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(15),
    [anon_sym_] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_unroll] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_sign] = ACTIONS(15),
    [anon_sym_5] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_6] = ACTIONS(15),
    [anon_sym_absolutevalue] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(13),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_8] = ACTIONS(13),
    [anon_sym_sine] = ACTIONS(15),
    [anon_sym_9] = ACTIONS(13),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_10] = ACTIONS(13),
    [anon_sym_ceiling] = ACTIONS(15),
    [anon_sym_11] = ACTIONS(13),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_12] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_13] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_14] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_15] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_16] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_17] = ACTIONS(13),
    [anon_sym_modulus] = ACTIONS(15),
    [anon_sym_18] = ACTIONS(13),
    [anon_sym_power] = ACTIONS(15),
    [anon_sym_19] = ACTIONS(13),
    [anon_sym_logarithm] = ACTIONS(15),
    [anon_sym_20] = ACTIONS(13),
    [anon_sym_minimum] = ACTIONS(15),
    [anon_sym_21] = ACTIONS(13),
    [anon_sym_maximum] = ACTIONS(15),
    [anon_sym_22] = ACTIONS(13),
    [anon_sym_atangent] = ACTIONS(15),
    [anon_sym_23] = ACTIONS(13),
    [anon_sym_length] = ACTIONS(15),
    [anon_sym_24] = ACTIONS(13),
    [anon_sym_shape] = ACTIONS(15),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_first] = ACTIONS(15),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(15),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_deshape] = ACTIONS(15),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_bits] = ACTIONS(15),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_transpose] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(13),
    [anon_sym_rise] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(13),
    [anon_sym_fall] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(13),
    [anon_sym_classify] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(13),
    [anon_sym_deduplicate] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(13),
    [anon_sym_box] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(13),
    [anon_sym_unbox] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(13),
    [anon_sym_couple] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(13),
    [anon_sym_join] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(13),
    [anon_sym_pick] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(13),
    [anon_sym_reshape] = ACTIONS(15),
    [anon_sym_43] = ACTIONS(13),
    [anon_sym_take] = ACTIONS(15),
    [anon_sym_44] = ACTIONS(13),
    [anon_sym_drop] = ACTIONS(15),
    [anon_sym_45] = ACTIONS(13),
    [anon_sym_rotate] = ACTIONS(15),
    [anon_sym_46] = ACTIONS(13),
    [anon_sym_windows] = ACTIONS(15),
    [anon_sym_47] = ACTIONS(13),
    [anon_sym_keep] = ACTIONS(15),
    [anon_sym_48] = ACTIONS(13),
    [anon_sym_find] = ACTIONS(15),
    [anon_sym_49] = ACTIONS(13),
    [anon_sym_member] = ACTIONS(15),
    [anon_sym_50] = ACTIONS(13),
    [anon_sym_indexof] = ACTIONS(15),
    [anon_sym_51] = ACTIONS(13),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_fold] = ACTIONS(15),
    [anon_sym_52] = ACTIONS(13),
    [anon_sym_scan] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_each] = ACTIONS(15),
    [anon_sym_53] = ACTIONS(13),
    [anon_sym_rows] = ACTIONS(15),
    [anon_sym_54] = ACTIONS(13),
    [anon_sym_distribute] = ACTIONS(15),
    [anon_sym_55] = ACTIONS(13),
    [anon_sym_table] = ACTIONS(15),
    [anon_sym_56] = ACTIONS(13),
    [anon_sym_cross] = ACTIONS(15),
    [anon_sym_57] = ACTIONS(13),
    [anon_sym_repeat] = ACTIONS(15),
    [anon_sym_58] = ACTIONS(13),
    [anon_sym_group] = ACTIONS(15),
    [anon_sym_59] = ACTIONS(13),
    [anon_sym_partition] = ACTIONS(15),
    [anon_sym_60] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(15),
    [anon_sym_61] = ACTIONS(13),
    [anon_sym_bracket] = ACTIONS(15),
    [anon_sym_62] = ACTIONS(13),
    [anon_sym_fork] = ACTIONS(15),
    [anon_sym_63] = ACTIONS(13),
    [anon_sym_dip] = ACTIONS(15),
    [anon_sym_64] = ACTIONS(13),
    [anon_sym_gap] = ACTIONS(15),
    [anon_sym_65] = ACTIONS(13),
    [anon_sym_restack] = ACTIONS(15),
    [anon_sym_66] = ACTIONS(13),
    [anon_sym_invert] = ACTIONS(15),
    [anon_sym_67] = ACTIONS(13),
    [anon_sym_under] = ACTIONS(15),
    [anon_sym_68] = ACTIONS(13),
    [anon_sym_level] = ACTIONS(15),
    [anon_sym_69] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_70] = ACTIONS(13),
    [anon_sym_bind] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_71] = ACTIONS(13),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_72] = ACTIONS(13),
    [anon_sym_spawn] = ACTIONS(15),
    [anon_sym_73] = ACTIONS(13),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_74] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_75] = ACTIONS(13),
    [anon_sym_recur] = ACTIONS(15),
    [anon_sym_76] = ACTIONS(13),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_77] = ACTIONS(13),
    [anon_sym_gen] = ACTIONS(15),
    [anon_sym_deal] = ACTIONS(15),
    [anon_sym_use] = ACTIONS(15),
    [anon_sym_tag] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_sig] = ACTIONS(15),
    [anon_sym_eta] = ACTIONS(15),
    [anon_sym_78] = ACTIONS(13),
    [anon_sym_pi] = ACTIONS(15),
    [anon_sym_79] = ACTIONS(13),
    [anon_sym_tau] = ACTIONS(15),
    [anon_sym_80] = ACTIONS(13),
    [anon_sym_infinity] = ACTIONS(15),
    [anon_sym_81] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_dump] = ACTIONS(15),
    [anon_sym_FIXME_modifier1] = ACTIONS(17),
    [anon_sym_FIXME_modifier2] = ACTIONS(19),
    [sym__end_of_line] = ACTIONS(25),
  },
  [3] = {
    [sym_value] = STATE(3),
    [sym_function] = STATE(3),
    [sym_modifier1] = STATE(3),
    [sym_modifier2] = STATE(3),
    [aux_sym_PROGRAM_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_character] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
    [sym_identifier] = ACTIONS(35),
    [sym_system] = ACTIONS(38),
    [sym_comment] = ACTIONS(38),
    [anon_sym_COLON] = ACTIONS(41),
    [sym_leftArrow] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_identity] = ACTIONS(44),
    [anon_sym_] = ACTIONS(41),
    [anon_sym_roll] = ACTIONS(44),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_unroll] = ACTIONS(44),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(44),
    [anon_sym_4] = ACTIONS(41),
    [anon_sym_sign] = ACTIONS(44),
    [anon_sym_5] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_6] = ACTIONS(44),
    [anon_sym_absolutevalue] = ACTIONS(41),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_sqrt] = ACTIONS(44),
    [anon_sym_8] = ACTIONS(41),
    [anon_sym_sine] = ACTIONS(44),
    [anon_sym_9] = ACTIONS(41),
    [anon_sym_floor] = ACTIONS(44),
    [anon_sym_10] = ACTIONS(41),
    [anon_sym_ceiling] = ACTIONS(44),
    [anon_sym_11] = ACTIONS(41),
    [anon_sym_round] = ACTIONS(44),
    [anon_sym_12] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_13] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(44),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_14] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(44),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_15] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_16] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_17] = ACTIONS(41),
    [anon_sym_modulus] = ACTIONS(44),
    [anon_sym_18] = ACTIONS(41),
    [anon_sym_power] = ACTIONS(44),
    [anon_sym_19] = ACTIONS(41),
    [anon_sym_logarithm] = ACTIONS(44),
    [anon_sym_20] = ACTIONS(41),
    [anon_sym_minimum] = ACTIONS(44),
    [anon_sym_21] = ACTIONS(41),
    [anon_sym_maximum] = ACTIONS(44),
    [anon_sym_22] = ACTIONS(41),
    [anon_sym_atangent] = ACTIONS(44),
    [anon_sym_23] = ACTIONS(41),
    [anon_sym_length] = ACTIONS(44),
    [anon_sym_24] = ACTIONS(41),
    [anon_sym_shape] = ACTIONS(44),
    [anon_sym_25] = ACTIONS(41),
    [anon_sym_range] = ACTIONS(44),
    [anon_sym_26] = ACTIONS(41),
    [anon_sym_first] = ACTIONS(44),
    [anon_sym_27] = ACTIONS(41),
    [anon_sym_reverse] = ACTIONS(44),
    [anon_sym_28] = ACTIONS(41),
    [anon_sym_deshape] = ACTIONS(44),
    [anon_sym_29] = ACTIONS(41),
    [anon_sym_bits] = ACTIONS(44),
    [anon_sym_30] = ACTIONS(41),
    [anon_sym_transpose] = ACTIONS(44),
    [anon_sym_31] = ACTIONS(41),
    [anon_sym_rise] = ACTIONS(44),
    [anon_sym_32] = ACTIONS(41),
    [anon_sym_fall] = ACTIONS(44),
    [anon_sym_33] = ACTIONS(41),
    [anon_sym_classify] = ACTIONS(44),
    [anon_sym_34] = ACTIONS(41),
    [anon_sym_deduplicate] = ACTIONS(44),
    [anon_sym_35] = ACTIONS(41),
    [anon_sym_box] = ACTIONS(44),
    [anon_sym_36] = ACTIONS(41),
    [anon_sym_unbox] = ACTIONS(44),
    [anon_sym_37] = ACTIONS(41),
    [anon_sym_match] = ACTIONS(44),
    [anon_sym_38] = ACTIONS(41),
    [anon_sym_couple] = ACTIONS(44),
    [anon_sym_39] = ACTIONS(41),
    [anon_sym_join] = ACTIONS(44),
    [anon_sym_40] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(44),
    [anon_sym_41] = ACTIONS(41),
    [anon_sym_pick] = ACTIONS(44),
    [anon_sym_42] = ACTIONS(41),
    [anon_sym_reshape] = ACTIONS(44),
    [anon_sym_43] = ACTIONS(41),
    [anon_sym_take] = ACTIONS(44),
    [anon_sym_44] = ACTIONS(41),
    [anon_sym_drop] = ACTIONS(44),
    [anon_sym_45] = ACTIONS(41),
    [anon_sym_rotate] = ACTIONS(44),
    [anon_sym_46] = ACTIONS(41),
    [anon_sym_windows] = ACTIONS(44),
    [anon_sym_47] = ACTIONS(41),
    [anon_sym_keep] = ACTIONS(44),
    [anon_sym_48] = ACTIONS(41),
    [anon_sym_find] = ACTIONS(44),
    [anon_sym_49] = ACTIONS(41),
    [anon_sym_member] = ACTIONS(44),
    [anon_sym_50] = ACTIONS(41),
    [anon_sym_indexof] = ACTIONS(44),
    [anon_sym_51] = ACTIONS(41),
    [anon_sym_reduce] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_fold] = ACTIONS(44),
    [anon_sym_52] = ACTIONS(41),
    [anon_sym_scan] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_each] = ACTIONS(44),
    [anon_sym_53] = ACTIONS(41),
    [anon_sym_rows] = ACTIONS(44),
    [anon_sym_54] = ACTIONS(41),
    [anon_sym_distribute] = ACTIONS(44),
    [anon_sym_55] = ACTIONS(41),
    [anon_sym_table] = ACTIONS(44),
    [anon_sym_56] = ACTIONS(41),
    [anon_sym_cross] = ACTIONS(44),
    [anon_sym_57] = ACTIONS(41),
    [anon_sym_repeat] = ACTIONS(44),
    [anon_sym_58] = ACTIONS(41),
    [anon_sym_group] = ACTIONS(44),
    [anon_sym_59] = ACTIONS(41),
    [anon_sym_partition] = ACTIONS(44),
    [anon_sym_60] = ACTIONS(41),
    [anon_sym_both] = ACTIONS(44),
    [anon_sym_61] = ACTIONS(41),
    [anon_sym_bracket] = ACTIONS(44),
    [anon_sym_62] = ACTIONS(41),
    [anon_sym_fork] = ACTIONS(44),
    [anon_sym_63] = ACTIONS(41),
    [anon_sym_dip] = ACTIONS(44),
    [anon_sym_64] = ACTIONS(41),
    [anon_sym_gap] = ACTIONS(44),
    [anon_sym_65] = ACTIONS(41),
    [anon_sym_restack] = ACTIONS(44),
    [anon_sym_66] = ACTIONS(41),
    [anon_sym_invert] = ACTIONS(44),
    [anon_sym_67] = ACTIONS(41),
    [anon_sym_under] = ACTIONS(44),
    [anon_sym_68] = ACTIONS(41),
    [anon_sym_level] = ACTIONS(44),
    [anon_sym_69] = ACTIONS(41),
    [anon_sym_fill] = ACTIONS(44),
    [anon_sym_70] = ACTIONS(41),
    [anon_sym_bind] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_try] = ACTIONS(44),
    [anon_sym_71] = ACTIONS(41),
    [anon_sym_assert] = ACTIONS(44),
    [anon_sym_72] = ACTIONS(41),
    [anon_sym_spawn] = ACTIONS(44),
    [anon_sym_73] = ACTIONS(41),
    [anon_sym_wait] = ACTIONS(44),
    [anon_sym_74] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(44),
    [anon_sym_break] = ACTIONS(44),
    [anon_sym_75] = ACTIONS(41),
    [anon_sym_recur] = ACTIONS(44),
    [anon_sym_76] = ACTIONS(41),
    [anon_sym_random] = ACTIONS(44),
    [anon_sym_77] = ACTIONS(41),
    [anon_sym_gen] = ACTIONS(44),
    [anon_sym_deal] = ACTIONS(44),
    [anon_sym_use] = ACTIONS(44),
    [anon_sym_tag] = ACTIONS(44),
    [anon_sym_type] = ACTIONS(44),
    [anon_sym_sig] = ACTIONS(44),
    [anon_sym_eta] = ACTIONS(44),
    [anon_sym_78] = ACTIONS(41),
    [anon_sym_pi] = ACTIONS(44),
    [anon_sym_79] = ACTIONS(41),
    [anon_sym_tau] = ACTIONS(44),
    [anon_sym_80] = ACTIONS(41),
    [anon_sym_infinity] = ACTIONS(44),
    [anon_sym_81] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_dump] = ACTIONS(44),
    [anon_sym_FIXME_modifier1] = ACTIONS(47),
    [anon_sym_FIXME_modifier2] = ACTIONS(50),
    [sym__end_of_line] = ACTIONS(38),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [sym_character] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_system] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_leftArrow] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_identity] = ACTIONS(55),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_roll] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_unroll] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(53),
    [anon_sym_sign] = ACTIONS(55),
    [anon_sym_5] = ACTIONS(53),
    [anon_sym_BQUOTE] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(55),
    [anon_sym_absolutevalue] = ACTIONS(53),
    [anon_sym_7] = ACTIONS(53),
    [anon_sym_sqrt] = ACTIONS(55),
    [anon_sym_8] = ACTIONS(53),
    [anon_sym_sine] = ACTIONS(55),
    [anon_sym_9] = ACTIONS(53),
    [anon_sym_floor] = ACTIONS(55),
    [anon_sym_10] = ACTIONS(53),
    [anon_sym_ceiling] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(53),
    [anon_sym_round] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_13] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_14] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_15] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_16] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_17] = ACTIONS(53),
    [anon_sym_modulus] = ACTIONS(55),
    [anon_sym_18] = ACTIONS(53),
    [anon_sym_power] = ACTIONS(55),
    [anon_sym_19] = ACTIONS(53),
    [anon_sym_logarithm] = ACTIONS(55),
    [anon_sym_20] = ACTIONS(53),
    [anon_sym_minimum] = ACTIONS(55),
    [anon_sym_21] = ACTIONS(53),
    [anon_sym_maximum] = ACTIONS(55),
    [anon_sym_22] = ACTIONS(53),
    [anon_sym_atangent] = ACTIONS(55),
    [anon_sym_23] = ACTIONS(53),
    [anon_sym_length] = ACTIONS(55),
    [anon_sym_24] = ACTIONS(53),
    [anon_sym_shape] = ACTIONS(55),
    [anon_sym_25] = ACTIONS(53),
    [anon_sym_range] = ACTIONS(55),
    [anon_sym_26] = ACTIONS(53),
    [anon_sym_first] = ACTIONS(55),
    [anon_sym_27] = ACTIONS(53),
    [anon_sym_reverse] = ACTIONS(55),
    [anon_sym_28] = ACTIONS(53),
    [anon_sym_deshape] = ACTIONS(55),
    [anon_sym_29] = ACTIONS(53),
    [anon_sym_bits] = ACTIONS(55),
    [anon_sym_30] = ACTIONS(53),
    [anon_sym_transpose] = ACTIONS(55),
    [anon_sym_31] = ACTIONS(53),
    [anon_sym_rise] = ACTIONS(55),
    [anon_sym_32] = ACTIONS(53),
    [anon_sym_fall] = ACTIONS(55),
    [anon_sym_33] = ACTIONS(53),
    [anon_sym_classify] = ACTIONS(55),
    [anon_sym_34] = ACTIONS(53),
    [anon_sym_deduplicate] = ACTIONS(55),
    [anon_sym_35] = ACTIONS(53),
    [anon_sym_box] = ACTIONS(55),
    [anon_sym_36] = ACTIONS(53),
    [anon_sym_unbox] = ACTIONS(55),
    [anon_sym_37] = ACTIONS(53),
    [anon_sym_match] = ACTIONS(55),
    [anon_sym_38] = ACTIONS(53),
    [anon_sym_couple] = ACTIONS(55),
    [anon_sym_39] = ACTIONS(53),
    [anon_sym_join] = ACTIONS(55),
    [anon_sym_40] = ACTIONS(53),
    [anon_sym_select] = ACTIONS(55),
    [anon_sym_41] = ACTIONS(53),
    [anon_sym_pick] = ACTIONS(55),
    [anon_sym_42] = ACTIONS(53),
    [anon_sym_reshape] = ACTIONS(55),
    [anon_sym_43] = ACTIONS(53),
    [anon_sym_take] = ACTIONS(55),
    [anon_sym_44] = ACTIONS(53),
    [anon_sym_drop] = ACTIONS(55),
    [anon_sym_45] = ACTIONS(53),
    [anon_sym_rotate] = ACTIONS(55),
    [anon_sym_46] = ACTIONS(53),
    [anon_sym_windows] = ACTIONS(55),
    [anon_sym_47] = ACTIONS(53),
    [anon_sym_keep] = ACTIONS(55),
    [anon_sym_48] = ACTIONS(53),
    [anon_sym_find] = ACTIONS(55),
    [anon_sym_49] = ACTIONS(53),
    [anon_sym_member] = ACTIONS(55),
    [anon_sym_50] = ACTIONS(53),
    [anon_sym_indexof] = ACTIONS(55),
    [anon_sym_51] = ACTIONS(53),
    [anon_sym_reduce] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_fold] = ACTIONS(55),
    [anon_sym_52] = ACTIONS(53),
    [anon_sym_scan] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_each] = ACTIONS(55),
    [anon_sym_53] = ACTIONS(53),
    [anon_sym_rows] = ACTIONS(55),
    [anon_sym_54] = ACTIONS(53),
    [anon_sym_distribute] = ACTIONS(55),
    [anon_sym_55] = ACTIONS(53),
    [anon_sym_table] = ACTIONS(55),
    [anon_sym_56] = ACTIONS(53),
    [anon_sym_cross] = ACTIONS(55),
    [anon_sym_57] = ACTIONS(53),
    [anon_sym_repeat] = ACTIONS(55),
    [anon_sym_58] = ACTIONS(53),
    [anon_sym_group] = ACTIONS(55),
    [anon_sym_59] = ACTIONS(53),
    [anon_sym_partition] = ACTIONS(55),
    [anon_sym_60] = ACTIONS(53),
    [anon_sym_both] = ACTIONS(55),
    [anon_sym_61] = ACTIONS(53),
    [anon_sym_bracket] = ACTIONS(55),
    [anon_sym_62] = ACTIONS(53),
    [anon_sym_fork] = ACTIONS(55),
    [anon_sym_63] = ACTIONS(53),
    [anon_sym_dip] = ACTIONS(55),
    [anon_sym_64] = ACTIONS(53),
    [anon_sym_gap] = ACTIONS(55),
    [anon_sym_65] = ACTIONS(53),
    [anon_sym_restack] = ACTIONS(55),
    [anon_sym_66] = ACTIONS(53),
    [anon_sym_invert] = ACTIONS(55),
    [anon_sym_67] = ACTIONS(53),
    [anon_sym_under] = ACTIONS(55),
    [anon_sym_68] = ACTIONS(53),
    [anon_sym_level] = ACTIONS(55),
    [anon_sym_69] = ACTIONS(53),
    [anon_sym_fill] = ACTIONS(55),
    [anon_sym_70] = ACTIONS(53),
    [anon_sym_bind] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_try] = ACTIONS(55),
    [anon_sym_71] = ACTIONS(53),
    [anon_sym_assert] = ACTIONS(55),
    [anon_sym_72] = ACTIONS(53),
    [anon_sym_spawn] = ACTIONS(55),
    [anon_sym_73] = ACTIONS(53),
    [anon_sym_wait] = ACTIONS(55),
    [anon_sym_74] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_75] = ACTIONS(53),
    [anon_sym_recur] = ACTIONS(55),
    [anon_sym_76] = ACTIONS(53),
    [anon_sym_random] = ACTIONS(55),
    [anon_sym_77] = ACTIONS(53),
    [anon_sym_gen] = ACTIONS(55),
    [anon_sym_deal] = ACTIONS(55),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_tag] = ACTIONS(55),
    [anon_sym_type] = ACTIONS(55),
    [anon_sym_sig] = ACTIONS(55),
    [anon_sym_eta] = ACTIONS(55),
    [anon_sym_78] = ACTIONS(53),
    [anon_sym_pi] = ACTIONS(55),
    [anon_sym_79] = ACTIONS(53),
    [anon_sym_tau] = ACTIONS(55),
    [anon_sym_80] = ACTIONS(53),
    [anon_sym_infinity] = ACTIONS(55),
    [anon_sym_81] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_dump] = ACTIONS(55),
    [anon_sym_FIXME_modifier1] = ACTIONS(53),
    [anon_sym_FIXME_modifier2] = ACTIONS(53),
    [sym__end_of_line] = ACTIONS(53),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_character] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_system] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [sym_leftArrow] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_identity] = ACTIONS(59),
    [anon_sym_] = ACTIONS(57),
    [anon_sym_roll] = ACTIONS(59),
    [anon_sym_2] = ACTIONS(57),
    [anon_sym_unroll] = ACTIONS(59),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(57),
    [anon_sym_sign] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_absolutevalue] = ACTIONS(57),
    [anon_sym_7] = ACTIONS(57),
    [anon_sym_sqrt] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(57),
    [anon_sym_sine] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(57),
    [anon_sym_floor] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(57),
    [anon_sym_ceiling] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_round] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_13] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_14] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_15] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_16] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_17] = ACTIONS(57),
    [anon_sym_modulus] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(57),
    [anon_sym_power] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(57),
    [anon_sym_logarithm] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(57),
    [anon_sym_minimum] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(57),
    [anon_sym_maximum] = ACTIONS(59),
    [anon_sym_22] = ACTIONS(57),
    [anon_sym_atangent] = ACTIONS(59),
    [anon_sym_23] = ACTIONS(57),
    [anon_sym_length] = ACTIONS(59),
    [anon_sym_24] = ACTIONS(57),
    [anon_sym_shape] = ACTIONS(59),
    [anon_sym_25] = ACTIONS(57),
    [anon_sym_range] = ACTIONS(59),
    [anon_sym_26] = ACTIONS(57),
    [anon_sym_first] = ACTIONS(59),
    [anon_sym_27] = ACTIONS(57),
    [anon_sym_reverse] = ACTIONS(59),
    [anon_sym_28] = ACTIONS(57),
    [anon_sym_deshape] = ACTIONS(59),
    [anon_sym_29] = ACTIONS(57),
    [anon_sym_bits] = ACTIONS(59),
    [anon_sym_30] = ACTIONS(57),
    [anon_sym_transpose] = ACTIONS(59),
    [anon_sym_31] = ACTIONS(57),
    [anon_sym_rise] = ACTIONS(59),
    [anon_sym_32] = ACTIONS(57),
    [anon_sym_fall] = ACTIONS(59),
    [anon_sym_33] = ACTIONS(57),
    [anon_sym_classify] = ACTIONS(59),
    [anon_sym_34] = ACTIONS(57),
    [anon_sym_deduplicate] = ACTIONS(59),
    [anon_sym_35] = ACTIONS(57),
    [anon_sym_box] = ACTIONS(59),
    [anon_sym_36] = ACTIONS(57),
    [anon_sym_unbox] = ACTIONS(59),
    [anon_sym_37] = ACTIONS(57),
    [anon_sym_match] = ACTIONS(59),
    [anon_sym_38] = ACTIONS(57),
    [anon_sym_couple] = ACTIONS(59),
    [anon_sym_39] = ACTIONS(57),
    [anon_sym_join] = ACTIONS(59),
    [anon_sym_40] = ACTIONS(57),
    [anon_sym_select] = ACTIONS(59),
    [anon_sym_41] = ACTIONS(57),
    [anon_sym_pick] = ACTIONS(59),
    [anon_sym_42] = ACTIONS(57),
    [anon_sym_reshape] = ACTIONS(59),
    [anon_sym_43] = ACTIONS(57),
    [anon_sym_take] = ACTIONS(59),
    [anon_sym_44] = ACTIONS(57),
    [anon_sym_drop] = ACTIONS(59),
    [anon_sym_45] = ACTIONS(57),
    [anon_sym_rotate] = ACTIONS(59),
    [anon_sym_46] = ACTIONS(57),
    [anon_sym_windows] = ACTIONS(59),
    [anon_sym_47] = ACTIONS(57),
    [anon_sym_keep] = ACTIONS(59),
    [anon_sym_48] = ACTIONS(57),
    [anon_sym_find] = ACTIONS(59),
    [anon_sym_49] = ACTIONS(57),
    [anon_sym_member] = ACTIONS(59),
    [anon_sym_50] = ACTIONS(57),
    [anon_sym_indexof] = ACTIONS(59),
    [anon_sym_51] = ACTIONS(57),
    [anon_sym_reduce] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_fold] = ACTIONS(59),
    [anon_sym_52] = ACTIONS(57),
    [anon_sym_scan] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_each] = ACTIONS(59),
    [anon_sym_53] = ACTIONS(57),
    [anon_sym_rows] = ACTIONS(59),
    [anon_sym_54] = ACTIONS(57),
    [anon_sym_distribute] = ACTIONS(59),
    [anon_sym_55] = ACTIONS(57),
    [anon_sym_table] = ACTIONS(59),
    [anon_sym_56] = ACTIONS(57),
    [anon_sym_cross] = ACTIONS(59),
    [anon_sym_57] = ACTIONS(57),
    [anon_sym_repeat] = ACTIONS(59),
    [anon_sym_58] = ACTIONS(57),
    [anon_sym_group] = ACTIONS(59),
    [anon_sym_59] = ACTIONS(57),
    [anon_sym_partition] = ACTIONS(59),
    [anon_sym_60] = ACTIONS(57),
    [anon_sym_both] = ACTIONS(59),
    [anon_sym_61] = ACTIONS(57),
    [anon_sym_bracket] = ACTIONS(59),
    [anon_sym_62] = ACTIONS(57),
    [anon_sym_fork] = ACTIONS(59),
    [anon_sym_63] = ACTIONS(57),
    [anon_sym_dip] = ACTIONS(59),
    [anon_sym_64] = ACTIONS(57),
    [anon_sym_gap] = ACTIONS(59),
    [anon_sym_65] = ACTIONS(57),
    [anon_sym_restack] = ACTIONS(59),
    [anon_sym_66] = ACTIONS(57),
    [anon_sym_invert] = ACTIONS(59),
    [anon_sym_67] = ACTIONS(57),
    [anon_sym_under] = ACTIONS(59),
    [anon_sym_68] = ACTIONS(57),
    [anon_sym_level] = ACTIONS(59),
    [anon_sym_69] = ACTIONS(57),
    [anon_sym_fill] = ACTIONS(59),
    [anon_sym_70] = ACTIONS(57),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_try] = ACTIONS(59),
    [anon_sym_71] = ACTIONS(57),
    [anon_sym_assert] = ACTIONS(59),
    [anon_sym_72] = ACTIONS(57),
    [anon_sym_spawn] = ACTIONS(59),
    [anon_sym_73] = ACTIONS(57),
    [anon_sym_wait] = ACTIONS(59),
    [anon_sym_74] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(59),
    [anon_sym_75] = ACTIONS(57),
    [anon_sym_recur] = ACTIONS(59),
    [anon_sym_76] = ACTIONS(57),
    [anon_sym_random] = ACTIONS(59),
    [anon_sym_77] = ACTIONS(57),
    [anon_sym_gen] = ACTIONS(59),
    [anon_sym_deal] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(59),
    [anon_sym_tag] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_sig] = ACTIONS(59),
    [anon_sym_eta] = ACTIONS(59),
    [anon_sym_78] = ACTIONS(57),
    [anon_sym_pi] = ACTIONS(59),
    [anon_sym_79] = ACTIONS(57),
    [anon_sym_tau] = ACTIONS(59),
    [anon_sym_80] = ACTIONS(57),
    [anon_sym_infinity] = ACTIONS(59),
    [anon_sym_81] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_dump] = ACTIONS(59),
    [anon_sym_FIXME_modifier1] = ACTIONS(57),
    [anon_sym_FIXME_modifier2] = ACTIONS(57),
    [sym__end_of_line] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_character] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_system] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_leftArrow] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_identity] = ACTIONS(63),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_roll] = ACTIONS(63),
    [anon_sym_2] = ACTIONS(61),
    [anon_sym_unroll] = ACTIONS(63),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_4] = ACTIONS(61),
    [anon_sym_sign] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_absolutevalue] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_sqrt] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_sine] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_floor] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_ceiling] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_round] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_modulus] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_power] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_logarithm] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_minimum] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_maximum] = ACTIONS(63),
    [anon_sym_22] = ACTIONS(61),
    [anon_sym_atangent] = ACTIONS(63),
    [anon_sym_23] = ACTIONS(61),
    [anon_sym_length] = ACTIONS(63),
    [anon_sym_24] = ACTIONS(61),
    [anon_sym_shape] = ACTIONS(63),
    [anon_sym_25] = ACTIONS(61),
    [anon_sym_range] = ACTIONS(63),
    [anon_sym_26] = ACTIONS(61),
    [anon_sym_first] = ACTIONS(63),
    [anon_sym_27] = ACTIONS(61),
    [anon_sym_reverse] = ACTIONS(63),
    [anon_sym_28] = ACTIONS(61),
    [anon_sym_deshape] = ACTIONS(63),
    [anon_sym_29] = ACTIONS(61),
    [anon_sym_bits] = ACTIONS(63),
    [anon_sym_30] = ACTIONS(61),
    [anon_sym_transpose] = ACTIONS(63),
    [anon_sym_31] = ACTIONS(61),
    [anon_sym_rise] = ACTIONS(63),
    [anon_sym_32] = ACTIONS(61),
    [anon_sym_fall] = ACTIONS(63),
    [anon_sym_33] = ACTIONS(61),
    [anon_sym_classify] = ACTIONS(63),
    [anon_sym_34] = ACTIONS(61),
    [anon_sym_deduplicate] = ACTIONS(63),
    [anon_sym_35] = ACTIONS(61),
    [anon_sym_box] = ACTIONS(63),
    [anon_sym_36] = ACTIONS(61),
    [anon_sym_unbox] = ACTIONS(63),
    [anon_sym_37] = ACTIONS(61),
    [anon_sym_match] = ACTIONS(63),
    [anon_sym_38] = ACTIONS(61),
    [anon_sym_couple] = ACTIONS(63),
    [anon_sym_39] = ACTIONS(61),
    [anon_sym_join] = ACTIONS(63),
    [anon_sym_40] = ACTIONS(61),
    [anon_sym_select] = ACTIONS(63),
    [anon_sym_41] = ACTIONS(61),
    [anon_sym_pick] = ACTIONS(63),
    [anon_sym_42] = ACTIONS(61),
    [anon_sym_reshape] = ACTIONS(63),
    [anon_sym_43] = ACTIONS(61),
    [anon_sym_take] = ACTIONS(63),
    [anon_sym_44] = ACTIONS(61),
    [anon_sym_drop] = ACTIONS(63),
    [anon_sym_45] = ACTIONS(61),
    [anon_sym_rotate] = ACTIONS(63),
    [anon_sym_46] = ACTIONS(61),
    [anon_sym_windows] = ACTIONS(63),
    [anon_sym_47] = ACTIONS(61),
    [anon_sym_keep] = ACTIONS(63),
    [anon_sym_48] = ACTIONS(61),
    [anon_sym_find] = ACTIONS(63),
    [anon_sym_49] = ACTIONS(61),
    [anon_sym_member] = ACTIONS(63),
    [anon_sym_50] = ACTIONS(61),
    [anon_sym_indexof] = ACTIONS(63),
    [anon_sym_51] = ACTIONS(61),
    [anon_sym_reduce] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_fold] = ACTIONS(63),
    [anon_sym_52] = ACTIONS(61),
    [anon_sym_scan] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_each] = ACTIONS(63),
    [anon_sym_53] = ACTIONS(61),
    [anon_sym_rows] = ACTIONS(63),
    [anon_sym_54] = ACTIONS(61),
    [anon_sym_distribute] = ACTIONS(63),
    [anon_sym_55] = ACTIONS(61),
    [anon_sym_table] = ACTIONS(63),
    [anon_sym_56] = ACTIONS(61),
    [anon_sym_cross] = ACTIONS(63),
    [anon_sym_57] = ACTIONS(61),
    [anon_sym_repeat] = ACTIONS(63),
    [anon_sym_58] = ACTIONS(61),
    [anon_sym_group] = ACTIONS(63),
    [anon_sym_59] = ACTIONS(61),
    [anon_sym_partition] = ACTIONS(63),
    [anon_sym_60] = ACTIONS(61),
    [anon_sym_both] = ACTIONS(63),
    [anon_sym_61] = ACTIONS(61),
    [anon_sym_bracket] = ACTIONS(63),
    [anon_sym_62] = ACTIONS(61),
    [anon_sym_fork] = ACTIONS(63),
    [anon_sym_63] = ACTIONS(61),
    [anon_sym_dip] = ACTIONS(63),
    [anon_sym_64] = ACTIONS(61),
    [anon_sym_gap] = ACTIONS(63),
    [anon_sym_65] = ACTIONS(61),
    [anon_sym_restack] = ACTIONS(63),
    [anon_sym_66] = ACTIONS(61),
    [anon_sym_invert] = ACTIONS(63),
    [anon_sym_67] = ACTIONS(61),
    [anon_sym_under] = ACTIONS(63),
    [anon_sym_68] = ACTIONS(61),
    [anon_sym_level] = ACTIONS(63),
    [anon_sym_69] = ACTIONS(61),
    [anon_sym_fill] = ACTIONS(63),
    [anon_sym_70] = ACTIONS(61),
    [anon_sym_bind] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_try] = ACTIONS(63),
    [anon_sym_71] = ACTIONS(61),
    [anon_sym_assert] = ACTIONS(63),
    [anon_sym_72] = ACTIONS(61),
    [anon_sym_spawn] = ACTIONS(63),
    [anon_sym_73] = ACTIONS(61),
    [anon_sym_wait] = ACTIONS(63),
    [anon_sym_74] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_break] = ACTIONS(63),
    [anon_sym_75] = ACTIONS(61),
    [anon_sym_recur] = ACTIONS(63),
    [anon_sym_76] = ACTIONS(61),
    [anon_sym_random] = ACTIONS(63),
    [anon_sym_77] = ACTIONS(61),
    [anon_sym_gen] = ACTIONS(63),
    [anon_sym_deal] = ACTIONS(63),
    [anon_sym_use] = ACTIONS(63),
    [anon_sym_tag] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_sig] = ACTIONS(63),
    [anon_sym_eta] = ACTIONS(63),
    [anon_sym_78] = ACTIONS(61),
    [anon_sym_pi] = ACTIONS(63),
    [anon_sym_79] = ACTIONS(61),
    [anon_sym_tau] = ACTIONS(63),
    [anon_sym_80] = ACTIONS(61),
    [anon_sym_infinity] = ACTIONS(63),
    [anon_sym_81] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_dump] = ACTIONS(63),
    [anon_sym_FIXME_modifier1] = ACTIONS(61),
    [anon_sym_FIXME_modifier2] = ACTIONS(61),
    [sym__end_of_line] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_number] = ACTIONS(67),
    [sym_character] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_system] = ACTIONS(65),
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_leftArrow] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_identity] = ACTIONS(67),
    [anon_sym_] = ACTIONS(65),
    [anon_sym_roll] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(65),
    [anon_sym_unroll] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(65),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(65),
    [anon_sym_sign] = ACTIONS(67),
    [anon_sym_5] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_6] = ACTIONS(67),
    [anon_sym_absolutevalue] = ACTIONS(65),
    [anon_sym_7] = ACTIONS(65),
    [anon_sym_sqrt] = ACTIONS(67),
    [anon_sym_8] = ACTIONS(65),
    [anon_sym_sine] = ACTIONS(67),
    [anon_sym_9] = ACTIONS(65),
    [anon_sym_floor] = ACTIONS(67),
    [anon_sym_10] = ACTIONS(65),
    [anon_sym_ceiling] = ACTIONS(67),
    [anon_sym_11] = ACTIONS(65),
    [anon_sym_round] = ACTIONS(67),
    [anon_sym_12] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_13] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_14] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_15] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_16] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_17] = ACTIONS(65),
    [anon_sym_modulus] = ACTIONS(67),
    [anon_sym_18] = ACTIONS(65),
    [anon_sym_power] = ACTIONS(67),
    [anon_sym_19] = ACTIONS(65),
    [anon_sym_logarithm] = ACTIONS(67),
    [anon_sym_20] = ACTIONS(65),
    [anon_sym_minimum] = ACTIONS(67),
    [anon_sym_21] = ACTIONS(65),
    [anon_sym_maximum] = ACTIONS(67),
    [anon_sym_22] = ACTIONS(65),
    [anon_sym_atangent] = ACTIONS(67),
    [anon_sym_23] = ACTIONS(65),
    [anon_sym_length] = ACTIONS(67),
    [anon_sym_24] = ACTIONS(65),
    [anon_sym_shape] = ACTIONS(67),
    [anon_sym_25] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_26] = ACTIONS(65),
    [anon_sym_first] = ACTIONS(67),
    [anon_sym_27] = ACTIONS(65),
    [anon_sym_reverse] = ACTIONS(67),
    [anon_sym_28] = ACTIONS(65),
    [anon_sym_deshape] = ACTIONS(67),
    [anon_sym_29] = ACTIONS(65),
    [anon_sym_bits] = ACTIONS(67),
    [anon_sym_30] = ACTIONS(65),
    [anon_sym_transpose] = ACTIONS(67),
    [anon_sym_31] = ACTIONS(65),
    [anon_sym_rise] = ACTIONS(67),
    [anon_sym_32] = ACTIONS(65),
    [anon_sym_fall] = ACTIONS(67),
    [anon_sym_33] = ACTIONS(65),
    [anon_sym_classify] = ACTIONS(67),
    [anon_sym_34] = ACTIONS(65),
    [anon_sym_deduplicate] = ACTIONS(67),
    [anon_sym_35] = ACTIONS(65),
    [anon_sym_box] = ACTIONS(67),
    [anon_sym_36] = ACTIONS(65),
    [anon_sym_unbox] = ACTIONS(67),
    [anon_sym_37] = ACTIONS(65),
    [anon_sym_match] = ACTIONS(67),
    [anon_sym_38] = ACTIONS(65),
    [anon_sym_couple] = ACTIONS(67),
    [anon_sym_39] = ACTIONS(65),
    [anon_sym_join] = ACTIONS(67),
    [anon_sym_40] = ACTIONS(65),
    [anon_sym_select] = ACTIONS(67),
    [anon_sym_41] = ACTIONS(65),
    [anon_sym_pick] = ACTIONS(67),
    [anon_sym_42] = ACTIONS(65),
    [anon_sym_reshape] = ACTIONS(67),
    [anon_sym_43] = ACTIONS(65),
    [anon_sym_take] = ACTIONS(67),
    [anon_sym_44] = ACTIONS(65),
    [anon_sym_drop] = ACTIONS(67),
    [anon_sym_45] = ACTIONS(65),
    [anon_sym_rotate] = ACTIONS(67),
    [anon_sym_46] = ACTIONS(65),
    [anon_sym_windows] = ACTIONS(67),
    [anon_sym_47] = ACTIONS(65),
    [anon_sym_keep] = ACTIONS(67),
    [anon_sym_48] = ACTIONS(65),
    [anon_sym_find] = ACTIONS(67),
    [anon_sym_49] = ACTIONS(65),
    [anon_sym_member] = ACTIONS(67),
    [anon_sym_50] = ACTIONS(65),
    [anon_sym_indexof] = ACTIONS(67),
    [anon_sym_51] = ACTIONS(65),
    [anon_sym_reduce] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(67),
    [anon_sym_52] = ACTIONS(65),
    [anon_sym_scan] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(67),
    [anon_sym_53] = ACTIONS(65),
    [anon_sym_rows] = ACTIONS(67),
    [anon_sym_54] = ACTIONS(65),
    [anon_sym_distribute] = ACTIONS(67),
    [anon_sym_55] = ACTIONS(65),
    [anon_sym_table] = ACTIONS(67),
    [anon_sym_56] = ACTIONS(65),
    [anon_sym_cross] = ACTIONS(67),
    [anon_sym_57] = ACTIONS(65),
    [anon_sym_repeat] = ACTIONS(67),
    [anon_sym_58] = ACTIONS(65),
    [anon_sym_group] = ACTIONS(67),
    [anon_sym_59] = ACTIONS(65),
    [anon_sym_partition] = ACTIONS(67),
    [anon_sym_60] = ACTIONS(65),
    [anon_sym_both] = ACTIONS(67),
    [anon_sym_61] = ACTIONS(65),
    [anon_sym_bracket] = ACTIONS(67),
    [anon_sym_62] = ACTIONS(65),
    [anon_sym_fork] = ACTIONS(67),
    [anon_sym_63] = ACTIONS(65),
    [anon_sym_dip] = ACTIONS(67),
    [anon_sym_64] = ACTIONS(65),
    [anon_sym_gap] = ACTIONS(67),
    [anon_sym_65] = ACTIONS(65),
    [anon_sym_restack] = ACTIONS(67),
    [anon_sym_66] = ACTIONS(65),
    [anon_sym_invert] = ACTIONS(67),
    [anon_sym_67] = ACTIONS(65),
    [anon_sym_under] = ACTIONS(67),
    [anon_sym_68] = ACTIONS(65),
    [anon_sym_level] = ACTIONS(67),
    [anon_sym_69] = ACTIONS(65),
    [anon_sym_fill] = ACTIONS(67),
    [anon_sym_70] = ACTIONS(65),
    [anon_sym_bind] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_try] = ACTIONS(67),
    [anon_sym_71] = ACTIONS(65),
    [anon_sym_assert] = ACTIONS(67),
    [anon_sym_72] = ACTIONS(65),
    [anon_sym_spawn] = ACTIONS(67),
    [anon_sym_73] = ACTIONS(65),
    [anon_sym_wait] = ACTIONS(67),
    [anon_sym_74] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_break] = ACTIONS(67),
    [anon_sym_75] = ACTIONS(65),
    [anon_sym_recur] = ACTIONS(67),
    [anon_sym_76] = ACTIONS(65),
    [anon_sym_random] = ACTIONS(67),
    [anon_sym_77] = ACTIONS(65),
    [anon_sym_gen] = ACTIONS(67),
    [anon_sym_deal] = ACTIONS(67),
    [anon_sym_use] = ACTIONS(67),
    [anon_sym_tag] = ACTIONS(67),
    [anon_sym_type] = ACTIONS(67),
    [anon_sym_sig] = ACTIONS(67),
    [anon_sym_eta] = ACTIONS(67),
    [anon_sym_78] = ACTIONS(65),
    [anon_sym_pi] = ACTIONS(67),
    [anon_sym_79] = ACTIONS(65),
    [anon_sym_tau] = ACTIONS(67),
    [anon_sym_80] = ACTIONS(65),
    [anon_sym_infinity] = ACTIONS(67),
    [anon_sym_81] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_dump] = ACTIONS(67),
    [anon_sym_FIXME_modifier1] = ACTIONS(65),
    [anon_sym_FIXME_modifier2] = ACTIONS(65),
    [sym__end_of_line] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__end_of_line,
  [8] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__end_of_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROGRAM, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier1, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier2, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier2, 1),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uiua(void) {
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
