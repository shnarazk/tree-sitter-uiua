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
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 210
#define ALIAS_COUNT 0
#define TOKEN_COUNT 204
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_number = 1,
  sym_character = 2,
  sym_string = 3,
  sym_comment = 4,
  sym_openParen = 5,
  sym_closeParen = 6,
  sym_openCurly = 7,
  sym_closeCurly = 8,
  sym_openBracket = 9,
  sym_closeBracket = 10,
  sym_underscore = 11,
  sym_bar = 12,
  anon_sym_COLON = 13,
  anon_sym_DOT = 14,
  anon_sym_COMMA = 15,
  anon_sym_SEMI = 16,
  anon_sym_identity = 17,
  anon_sym_ = 18,
  anon_sym_roll = 19,
  anon_sym_2 = 20,
  anon_sym_unroll = 21,
  anon_sym_3 = 22,
  anon_sym_not = 23,
  anon_sym_4 = 24,
  anon_sym_sign = 25,
  anon_sym_5 = 26,
  anon_sym_BQUOTE = 27,
  anon_sym_6 = 28,
  anon_sym_absolutevalue = 29,
  anon_sym_7 = 30,
  anon_sym_sqrt = 31,
  anon_sym_8 = 32,
  anon_sym_sine = 33,
  anon_sym_9 = 34,
  anon_sym_floor = 35,
  anon_sym_10 = 36,
  anon_sym_ceiling = 37,
  anon_sym_11 = 38,
  anon_sym_round = 39,
  anon_sym_12 = 40,
  anon_sym_EQ = 41,
  anon_sym_BANG_EQ = 42,
  anon_sym_13 = 43,
  anon_sym_LT = 44,
  anon_sym_LT_EQ = 45,
  anon_sym_14 = 46,
  anon_sym_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_15 = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_STAR = 52,
  anon_sym_16 = 53,
  anon_sym_PERCENT = 54,
  anon_sym_17 = 55,
  anon_sym_modulus = 56,
  anon_sym_18 = 57,
  anon_sym_power = 58,
  anon_sym_19 = 59,
  anon_sym_logarithm = 60,
  anon_sym_20 = 61,
  anon_sym_minimum = 62,
  anon_sym_21 = 63,
  anon_sym_maximum = 64,
  anon_sym_22 = 65,
  anon_sym_atangent = 66,
  anon_sym_23 = 67,
  anon_sym_length = 68,
  anon_sym_24 = 69,
  anon_sym_shape = 70,
  anon_sym_25 = 71,
  anon_sym_range = 72,
  anon_sym_26 = 73,
  anon_sym_first = 74,
  anon_sym_27 = 75,
  anon_sym_reverse = 76,
  anon_sym_28 = 77,
  anon_sym_deshape = 78,
  anon_sym_29 = 79,
  anon_sym_bits = 80,
  anon_sym_30 = 81,
  anon_sym_transpose = 82,
  anon_sym_31 = 83,
  anon_sym_rise = 84,
  anon_sym_32 = 85,
  anon_sym_fall = 86,
  anon_sym_33 = 87,
  anon_sym_classify = 88,
  anon_sym_34 = 89,
  anon_sym_deduplicate = 90,
  anon_sym_35 = 91,
  anon_sym_box = 92,
  anon_sym_36 = 93,
  anon_sym_unbox = 94,
  anon_sym_37 = 95,
  anon_sym_match = 96,
  anon_sym_38 = 97,
  anon_sym_couple = 98,
  anon_sym_39 = 99,
  anon_sym_join = 100,
  anon_sym_40 = 101,
  anon_sym_select = 102,
  anon_sym_41 = 103,
  anon_sym_pick = 104,
  anon_sym_42 = 105,
  anon_sym_reshape = 106,
  anon_sym_43 = 107,
  anon_sym_take = 108,
  anon_sym_44 = 109,
  anon_sym_drop = 110,
  anon_sym_45 = 111,
  anon_sym_rotate = 112,
  anon_sym_46 = 113,
  anon_sym_windows = 114,
  anon_sym_47 = 115,
  anon_sym_keep = 116,
  anon_sym_48 = 117,
  anon_sym_find = 118,
  anon_sym_49 = 119,
  anon_sym_member = 120,
  anon_sym_50 = 121,
  anon_sym_indexof = 122,
  anon_sym_51 = 123,
  anon_sym_reduce = 124,
  anon_sym_SLASH = 125,
  anon_sym_fold = 126,
  anon_sym_52 = 127,
  anon_sym_scan = 128,
  anon_sym_BSLASH = 129,
  anon_sym_each = 130,
  anon_sym_53 = 131,
  anon_sym_rows = 132,
  anon_sym_54 = 133,
  anon_sym_distribute = 134,
  anon_sym_55 = 135,
  anon_sym_table = 136,
  anon_sym_56 = 137,
  anon_sym_cross = 138,
  anon_sym_57 = 139,
  anon_sym_repeat = 140,
  anon_sym_58 = 141,
  anon_sym_group = 142,
  anon_sym_59 = 143,
  anon_sym_partition = 144,
  anon_sym_60 = 145,
  anon_sym_both = 146,
  anon_sym_61 = 147,
  anon_sym_bracket = 148,
  anon_sym_62 = 149,
  anon_sym_fork = 150,
  anon_sym_63 = 151,
  anon_sym_dip = 152,
  anon_sym_64 = 153,
  anon_sym_gap = 154,
  anon_sym_65 = 155,
  anon_sym_restack = 156,
  anon_sym_66 = 157,
  anon_sym_invert = 158,
  anon_sym_67 = 159,
  anon_sym_under = 160,
  anon_sym_68 = 161,
  anon_sym_level = 162,
  anon_sym_69 = 163,
  anon_sym_fill = 164,
  anon_sym_70 = 165,
  anon_sym_bind = 166,
  anon_sym_SQUOTE = 167,
  anon_sym_QMARK = 168,
  anon_sym_try = 169,
  anon_sym_71 = 170,
  anon_sym_assert = 171,
  anon_sym_72 = 172,
  anon_sym_spawn = 173,
  anon_sym_73 = 174,
  anon_sym_wait = 175,
  anon_sym_74 = 176,
  anon_sym_BANG = 177,
  anon_sym_break = 178,
  anon_sym_75 = 179,
  anon_sym_recur = 180,
  anon_sym_76 = 181,
  anon_sym_random = 182,
  anon_sym_77 = 183,
  anon_sym_gen = 184,
  anon_sym_deal = 185,
  anon_sym_use = 186,
  anon_sym_tag = 187,
  anon_sym_type = 188,
  anon_sym_sig = 189,
  anon_sym_eta = 190,
  anon_sym_78 = 191,
  anon_sym_pi = 192,
  anon_sym_79 = 193,
  anon_sym_tau = 194,
  anon_sym_80 = 195,
  anon_sym_infinity = 196,
  anon_sym_81 = 197,
  anon_sym_TILDE = 198,
  anon_sym_dump = 199,
  anon_sym_FIXME_function2 = 200,
  anon_sym_FIXME_modifier1 = 201,
  anon_sym_FIXME_modifier2 = 202,
  sym__end_of_line = 203,
  sym_source_file = 204,
  aux_sym__PROGRAM = 205,
  sym_value = 206,
  sym_function1 = 207,
  sym_modifier1 = 208,
  sym_modifier2 = 209,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_string] = "string",
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
  [anon_sym_FIXME_function2] = "FIXME_function2",
  [anon_sym_FIXME_modifier1] = "FIXME_modifier1",
  [anon_sym_FIXME_modifier2] = "FIXME_modifier2",
  [sym__end_of_line] = "_end_of_line",
  [sym_source_file] = "source_file",
  [aux_sym__PROGRAM] = "_PROGRAM",
  [sym_value] = "value",
  [sym_function1] = "function1",
  [sym_modifier1] = "modifier1",
  [sym_modifier2] = "modifier2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
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
  [anon_sym_FIXME_function2] = anon_sym_FIXME_function2,
  [anon_sym_FIXME_modifier1] = anon_sym_FIXME_modifier1,
  [anon_sym_FIXME_modifier2] = anon_sym_FIXME_modifier2,
  [sym__end_of_line] = sym__end_of_line,
  [sym_source_file] = sym_source_file,
  [aux_sym__PROGRAM] = aux_sym__PROGRAM,
  [sym_value] = sym_value,
  [sym_function1] = sym_function1,
  [sym_modifier1] = sym_modifier1,
  [sym_modifier2] = sym_modifier2,
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
  [anon_sym_FIXME_function2] = {
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
  [aux_sym__PROGRAM] = {
    .visible = false,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_function1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(482);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '+') ADVANCE(355);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(352);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(434);
      if (lookahead == ']') ADVANCE(315);
      if (lookahead == '_') ADVANCE(316);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'j') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '~') ADVANCE(503);
      if (lookahead == 172) ADVANCE(329);
      if (lookahead == 175) ADVANCE(333);
      if (lookahead == 177) ADVANCE(331);
      if (lookahead == 215) ADVANCE(358);
      if (lookahead == 247) ADVANCE(360);
      if (lookahead == 951) ADVANCE(496);
      if (lookahead == 960) ADVANCE(498);
      if (lookahead == 964) ADVANCE(500);
      if (lookahead == 8261) ADVANCE(345);
      if (lookahead == 8319) ADVANCE(364);
      if (lookahead == 8345) ADVANCE(366);
      if (lookahead == 8600) ADVANCE(416);
      if (lookahead == 8601) ADVANCE(414);
      if (lookahead == 8613) ADVANCE(370);
      if (lookahead == 8615) ADVANCE(368);
      if (lookahead == 8620) ADVANCE(486);
      if (lookahead == 8623) ADVANCE(412);
      if (lookahead == 8624) ADVANCE(479);
      if (lookahead == 8626) ADVANCE(481);
      if (lookahead == 8630) ADVANCE(327);
      if (lookahead == 8631) ADVANCE(325);
      if (lookahead == 8635) ADVANCE(418);
      if (lookahead == 8652) ADVANCE(382);
      if (lookahead == 8673) ADVANCE(378);
      if (lookahead == 8693) ADVANCE(462);
      if (lookahead == 8714) ADVANCE(426);
      if (lookahead == 8728) ADVANCE(323);
      if (lookahead == 8730) ADVANCE(337);
      if (lookahead == 8734) ADVANCE(502);
      if (lookahead == 8736) ADVANCE(372);
      if (lookahead == 8743) ADVANCE(432);
      if (lookahead == 8745) ADVANCE(452);
      if (lookahead == 8757) ADVANCE(436);
      if (lookahead == 8762) ADVANCE(440);
      if (lookahead == 8773) ADVANCE(402);
      if (lookahead == 8800) ADVANCE(348);
      if (lookahead == 8801) ADVANCE(438);
      if (lookahead == 8804) ADVANCE(351);
      if (lookahead == 8805) ADVANCE(354);
      if (lookahead == 8834) ADVANCE(406);
      if (lookahead == 8835) ADVANCE(456);
      if (lookahead == 8847) ADVANCE(408);
      if (lookahead == 8851) ADVANCE(454);
      if (lookahead == 8852) ADVANCE(400);
      if (lookahead == 8853) ADVANCE(448);
      if (lookahead == 8855) ADVANCE(428);
      if (lookahead == 8857) ADVANCE(458);
      if (lookahead == 8859) ADVANCE(394);
      if (lookahead == 8860) ADVANCE(450);
      if (lookahead == 8861) ADVANCE(396);
      if (lookahead == 8862) ADVANCE(442);
      if (lookahead == 8863) ADVANCE(404);
      if (lookahead == 8864) ADVANCE(444);
      if (lookahead == 8865) ADVANCE(410);
      if (lookahead == 8866) ADVANCE(380);
      if (lookahead == 8901) ADVANCE(460);
      if (lookahead == 8943) ADVANCE(386);
      if (lookahead == 8968) ADVANCE(343);
      if (lookahead == 8970) ADVANCE(341);
      if (lookahead == 8981) ADVANCE(424);
      if (lookahead == 9013) ADVANCE(335);
      if (lookahead == 9033) ADVANCE(388);
      if (lookahead == 9039) ADVANCE(390);
      if (lookahead == 9046) ADVANCE(392);
      if (lookahead == 9048) ADVANCE(464);
      if (lookahead == 9050) ADVANCE(468);
      if (lookahead == 9052) ADVANCE(466);
      if (lookahead == 9059) ADVANCE(475);
      if (lookahead == 9060) ADVANCE(477);
      if (lookahead == 9061) ADVANCE(446);
      if (lookahead == 9099) ADVANCE(484);
      if (lookahead == 9633) ADVANCE(398);
      if (lookahead == 9651) ADVANCE(376);
      if (lookahead == 9661) ADVANCE(422);
      if (lookahead == 9675) ADVANCE(339);
      if (lookahead == 9707) ADVANCE(420);
      if (lookahead == 9727) ADVANCE(362);
      if (lookahead == 9837) ADVANCE(384);
      if (lookahead == 9858) ADVANCE(488);
      if (lookahead == 10747) ADVANCE(374);
      if (lookahead == 11034) ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(508);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'n' ||
          lookahead == 't') ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(298);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(306);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(506);
      if (lookahead == '2') ADVANCE(507);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(505);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'X') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'g') ADVANCE(492);
      if (lookahead == 'k') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'q') ADVANCE(227);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(342);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(455);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(409);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(483);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(461);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(447);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(397);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 288:
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 289:
      if (lookahead == 'w') ADVANCE(237);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(399);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(393);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(501);
      END_STATE();
    case 295:
      if (lookahead == 175) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 298:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 299:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_openParen);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_closeParen);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_openCurly);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_closeCurly);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_openBracket);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_closeBracket);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_bar);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_unroll);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_sign);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == 960) ADVANCE(303);
      if (lookahead == 8734) ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_absolutevalue);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_sine);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_ceiling);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_modulus);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_logarithm);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_minimum);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_maximum);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_atangent);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_first);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_deshape);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_transpose);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_rise);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_fall);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_classify);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_deduplicate);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_unbox);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_couple);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_reshape);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_take);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_44);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_rotate);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_windows);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_find);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_indexof);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_scan);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_rows);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_distribute);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_55);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_partition);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_bracket);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_fork);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_dip);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_gap);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_restack);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_invert);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_under);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_spawn);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_recur);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_deal);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_eta);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_tau);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_infinity);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_dump);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_FIXME_function2);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_FIXME_modifier1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_FIXME_modifier2);
      END_STATE();
    case 508:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
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
    [anon_sym_FIXME_function2] = ACTIONS(1),
    [anon_sym_FIXME_modifier1] = ACTIONS(1),
    [anon_sym_FIXME_modifier2] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [aux_sym__PROGRAM] = STATE(2),
    [sym_value] = STATE(2),
    [sym_function1] = STATE(2),
    [sym_modifier1] = STATE(2),
    [sym_modifier2] = STATE(2),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_identity] = ACTIONS(9),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_roll] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_unroll] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_sign] = ACTIONS(9),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(11),
    [anon_sym_absolutevalue] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(9),
    [anon_sym_sine] = ACTIONS(9),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_floor] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_ceiling] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_round] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_modulus] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(9),
    [anon_sym_power] = ACTIONS(9),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_logarithm] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(9),
    [anon_sym_minimum] = ACTIONS(9),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_maximum] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_atangent] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(9),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_range] = ACTIONS(9),
    [anon_sym_26] = ACTIONS(9),
    [anon_sym_first] = ACTIONS(9),
    [anon_sym_27] = ACTIONS(9),
    [anon_sym_reverse] = ACTIONS(9),
    [anon_sym_28] = ACTIONS(9),
    [anon_sym_deshape] = ACTIONS(9),
    [anon_sym_29] = ACTIONS(9),
    [anon_sym_bits] = ACTIONS(9),
    [anon_sym_30] = ACTIONS(9),
    [anon_sym_transpose] = ACTIONS(9),
    [anon_sym_31] = ACTIONS(9),
    [anon_sym_rise] = ACTIONS(9),
    [anon_sym_32] = ACTIONS(9),
    [anon_sym_fall] = ACTIONS(9),
    [anon_sym_33] = ACTIONS(9),
    [anon_sym_classify] = ACTIONS(9),
    [anon_sym_34] = ACTIONS(9),
    [anon_sym_deduplicate] = ACTIONS(9),
    [anon_sym_35] = ACTIONS(9),
    [anon_sym_box] = ACTIONS(9),
    [anon_sym_36] = ACTIONS(9),
    [anon_sym_unbox] = ACTIONS(9),
    [anon_sym_37] = ACTIONS(9),
    [anon_sym_match] = ACTIONS(9),
    [anon_sym_38] = ACTIONS(9),
    [anon_sym_couple] = ACTIONS(9),
    [anon_sym_39] = ACTIONS(9),
    [anon_sym_join] = ACTIONS(9),
    [anon_sym_40] = ACTIONS(9),
    [anon_sym_select] = ACTIONS(9),
    [anon_sym_41] = ACTIONS(9),
    [anon_sym_pick] = ACTIONS(9),
    [anon_sym_42] = ACTIONS(9),
    [anon_sym_reshape] = ACTIONS(9),
    [anon_sym_43] = ACTIONS(9),
    [anon_sym_take] = ACTIONS(9),
    [anon_sym_44] = ACTIONS(9),
    [anon_sym_drop] = ACTIONS(9),
    [anon_sym_45] = ACTIONS(9),
    [anon_sym_rotate] = ACTIONS(9),
    [anon_sym_46] = ACTIONS(9),
    [anon_sym_windows] = ACTIONS(9),
    [anon_sym_47] = ACTIONS(9),
    [anon_sym_keep] = ACTIONS(9),
    [anon_sym_48] = ACTIONS(9),
    [anon_sym_find] = ACTIONS(9),
    [anon_sym_49] = ACTIONS(9),
    [anon_sym_member] = ACTIONS(9),
    [anon_sym_50] = ACTIONS(9),
    [anon_sym_indexof] = ACTIONS(9),
    [anon_sym_51] = ACTIONS(9),
    [anon_sym_reduce] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_fold] = ACTIONS(9),
    [anon_sym_52] = ACTIONS(9),
    [anon_sym_scan] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_53] = ACTIONS(9),
    [anon_sym_rows] = ACTIONS(9),
    [anon_sym_54] = ACTIONS(9),
    [anon_sym_distribute] = ACTIONS(9),
    [anon_sym_55] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(9),
    [anon_sym_56] = ACTIONS(9),
    [anon_sym_cross] = ACTIONS(9),
    [anon_sym_57] = ACTIONS(9),
    [anon_sym_repeat] = ACTIONS(9),
    [anon_sym_58] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_59] = ACTIONS(9),
    [anon_sym_partition] = ACTIONS(9),
    [anon_sym_60] = ACTIONS(9),
    [anon_sym_both] = ACTIONS(9),
    [anon_sym_61] = ACTIONS(9),
    [anon_sym_bracket] = ACTIONS(9),
    [anon_sym_62] = ACTIONS(9),
    [anon_sym_fork] = ACTIONS(9),
    [anon_sym_63] = ACTIONS(9),
    [anon_sym_dip] = ACTIONS(9),
    [anon_sym_64] = ACTIONS(9),
    [anon_sym_gap] = ACTIONS(9),
    [anon_sym_65] = ACTIONS(9),
    [anon_sym_restack] = ACTIONS(9),
    [anon_sym_66] = ACTIONS(9),
    [anon_sym_invert] = ACTIONS(9),
    [anon_sym_67] = ACTIONS(9),
    [anon_sym_under] = ACTIONS(9),
    [anon_sym_68] = ACTIONS(9),
    [anon_sym_level] = ACTIONS(9),
    [anon_sym_69] = ACTIONS(9),
    [anon_sym_fill] = ACTIONS(9),
    [anon_sym_70] = ACTIONS(9),
    [anon_sym_bind] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_try] = ACTIONS(9),
    [anon_sym_71] = ACTIONS(9),
    [anon_sym_assert] = ACTIONS(9),
    [anon_sym_72] = ACTIONS(9),
    [anon_sym_spawn] = ACTIONS(9),
    [anon_sym_73] = ACTIONS(9),
    [anon_sym_wait] = ACTIONS(9),
    [anon_sym_74] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_75] = ACTIONS(9),
    [anon_sym_recur] = ACTIONS(9),
    [anon_sym_76] = ACTIONS(9),
    [anon_sym_random] = ACTIONS(9),
    [anon_sym_77] = ACTIONS(9),
    [anon_sym_gen] = ACTIONS(9),
    [anon_sym_deal] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_tag] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_sig] = ACTIONS(11),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_78] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(11),
    [anon_sym_79] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_80] = ACTIONS(9),
    [anon_sym_infinity] = ACTIONS(9),
    [anon_sym_81] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_dump] = ACTIONS(9),
    [anon_sym_FIXME_modifier1] = ACTIONS(13),
    [anon_sym_FIXME_modifier2] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__PROGRAM] = STATE(3),
    [sym_value] = STATE(3),
    [sym_function1] = STATE(3),
    [sym_modifier1] = STATE(3),
    [sym_modifier2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_number] = ACTIONS(5),
    [sym_character] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_identity] = ACTIONS(9),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_roll] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_unroll] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_sign] = ACTIONS(9),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(11),
    [anon_sym_absolutevalue] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(9),
    [anon_sym_sine] = ACTIONS(9),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_floor] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(9),
    [anon_sym_ceiling] = ACTIONS(9),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_round] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_modulus] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(9),
    [anon_sym_power] = ACTIONS(9),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_logarithm] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(9),
    [anon_sym_minimum] = ACTIONS(9),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_maximum] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_atangent] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(9),
    [anon_sym_25] = ACTIONS(9),
    [anon_sym_range] = ACTIONS(9),
    [anon_sym_26] = ACTIONS(9),
    [anon_sym_first] = ACTIONS(9),
    [anon_sym_27] = ACTIONS(9),
    [anon_sym_reverse] = ACTIONS(9),
    [anon_sym_28] = ACTIONS(9),
    [anon_sym_deshape] = ACTIONS(9),
    [anon_sym_29] = ACTIONS(9),
    [anon_sym_bits] = ACTIONS(9),
    [anon_sym_30] = ACTIONS(9),
    [anon_sym_transpose] = ACTIONS(9),
    [anon_sym_31] = ACTIONS(9),
    [anon_sym_rise] = ACTIONS(9),
    [anon_sym_32] = ACTIONS(9),
    [anon_sym_fall] = ACTIONS(9),
    [anon_sym_33] = ACTIONS(9),
    [anon_sym_classify] = ACTIONS(9),
    [anon_sym_34] = ACTIONS(9),
    [anon_sym_deduplicate] = ACTIONS(9),
    [anon_sym_35] = ACTIONS(9),
    [anon_sym_box] = ACTIONS(9),
    [anon_sym_36] = ACTIONS(9),
    [anon_sym_unbox] = ACTIONS(9),
    [anon_sym_37] = ACTIONS(9),
    [anon_sym_match] = ACTIONS(9),
    [anon_sym_38] = ACTIONS(9),
    [anon_sym_couple] = ACTIONS(9),
    [anon_sym_39] = ACTIONS(9),
    [anon_sym_join] = ACTIONS(9),
    [anon_sym_40] = ACTIONS(9),
    [anon_sym_select] = ACTIONS(9),
    [anon_sym_41] = ACTIONS(9),
    [anon_sym_pick] = ACTIONS(9),
    [anon_sym_42] = ACTIONS(9),
    [anon_sym_reshape] = ACTIONS(9),
    [anon_sym_43] = ACTIONS(9),
    [anon_sym_take] = ACTIONS(9),
    [anon_sym_44] = ACTIONS(9),
    [anon_sym_drop] = ACTIONS(9),
    [anon_sym_45] = ACTIONS(9),
    [anon_sym_rotate] = ACTIONS(9),
    [anon_sym_46] = ACTIONS(9),
    [anon_sym_windows] = ACTIONS(9),
    [anon_sym_47] = ACTIONS(9),
    [anon_sym_keep] = ACTIONS(9),
    [anon_sym_48] = ACTIONS(9),
    [anon_sym_find] = ACTIONS(9),
    [anon_sym_49] = ACTIONS(9),
    [anon_sym_member] = ACTIONS(9),
    [anon_sym_50] = ACTIONS(9),
    [anon_sym_indexof] = ACTIONS(9),
    [anon_sym_51] = ACTIONS(9),
    [anon_sym_reduce] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_fold] = ACTIONS(9),
    [anon_sym_52] = ACTIONS(9),
    [anon_sym_scan] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_53] = ACTIONS(9),
    [anon_sym_rows] = ACTIONS(9),
    [anon_sym_54] = ACTIONS(9),
    [anon_sym_distribute] = ACTIONS(9),
    [anon_sym_55] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(9),
    [anon_sym_56] = ACTIONS(9),
    [anon_sym_cross] = ACTIONS(9),
    [anon_sym_57] = ACTIONS(9),
    [anon_sym_repeat] = ACTIONS(9),
    [anon_sym_58] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_59] = ACTIONS(9),
    [anon_sym_partition] = ACTIONS(9),
    [anon_sym_60] = ACTIONS(9),
    [anon_sym_both] = ACTIONS(9),
    [anon_sym_61] = ACTIONS(9),
    [anon_sym_bracket] = ACTIONS(9),
    [anon_sym_62] = ACTIONS(9),
    [anon_sym_fork] = ACTIONS(9),
    [anon_sym_63] = ACTIONS(9),
    [anon_sym_dip] = ACTIONS(9),
    [anon_sym_64] = ACTIONS(9),
    [anon_sym_gap] = ACTIONS(9),
    [anon_sym_65] = ACTIONS(9),
    [anon_sym_restack] = ACTIONS(9),
    [anon_sym_66] = ACTIONS(9),
    [anon_sym_invert] = ACTIONS(9),
    [anon_sym_67] = ACTIONS(9),
    [anon_sym_under] = ACTIONS(9),
    [anon_sym_68] = ACTIONS(9),
    [anon_sym_level] = ACTIONS(9),
    [anon_sym_69] = ACTIONS(9),
    [anon_sym_fill] = ACTIONS(9),
    [anon_sym_70] = ACTIONS(9),
    [anon_sym_bind] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_try] = ACTIONS(9),
    [anon_sym_71] = ACTIONS(9),
    [anon_sym_assert] = ACTIONS(9),
    [anon_sym_72] = ACTIONS(9),
    [anon_sym_spawn] = ACTIONS(9),
    [anon_sym_73] = ACTIONS(9),
    [anon_sym_wait] = ACTIONS(9),
    [anon_sym_74] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_75] = ACTIONS(9),
    [anon_sym_recur] = ACTIONS(9),
    [anon_sym_76] = ACTIONS(9),
    [anon_sym_random] = ACTIONS(9),
    [anon_sym_77] = ACTIONS(9),
    [anon_sym_gen] = ACTIONS(9),
    [anon_sym_deal] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_tag] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_sig] = ACTIONS(11),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_78] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(11),
    [anon_sym_79] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_80] = ACTIONS(9),
    [anon_sym_infinity] = ACTIONS(9),
    [anon_sym_81] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_dump] = ACTIONS(9),
    [anon_sym_FIXME_modifier1] = ACTIONS(13),
    [anon_sym_FIXME_modifier2] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__PROGRAM] = STATE(3),
    [sym_value] = STATE(3),
    [sym_function1] = STATE(3),
    [sym_modifier1] = STATE(3),
    [sym_modifier2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_character] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_identity] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_roll] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_unroll] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(27),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_sign] = ACTIONS(27),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_6] = ACTIONS(30),
    [anon_sym_absolutevalue] = ACTIONS(27),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_sqrt] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_sine] = ACTIONS(27),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_floor] = ACTIONS(27),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(27),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_round] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_13] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(30),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_14] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(30),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_15] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_16] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_17] = ACTIONS(27),
    [anon_sym_modulus] = ACTIONS(27),
    [anon_sym_18] = ACTIONS(27),
    [anon_sym_power] = ACTIONS(27),
    [anon_sym_19] = ACTIONS(27),
    [anon_sym_logarithm] = ACTIONS(27),
    [anon_sym_20] = ACTIONS(27),
    [anon_sym_minimum] = ACTIONS(27),
    [anon_sym_21] = ACTIONS(27),
    [anon_sym_maximum] = ACTIONS(27),
    [anon_sym_22] = ACTIONS(27),
    [anon_sym_atangent] = ACTIONS(27),
    [anon_sym_23] = ACTIONS(27),
    [anon_sym_length] = ACTIONS(27),
    [anon_sym_24] = ACTIONS(27),
    [anon_sym_shape] = ACTIONS(27),
    [anon_sym_25] = ACTIONS(27),
    [anon_sym_range] = ACTIONS(27),
    [anon_sym_26] = ACTIONS(27),
    [anon_sym_first] = ACTIONS(27),
    [anon_sym_27] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_28] = ACTIONS(27),
    [anon_sym_deshape] = ACTIONS(27),
    [anon_sym_29] = ACTIONS(27),
    [anon_sym_bits] = ACTIONS(27),
    [anon_sym_30] = ACTIONS(27),
    [anon_sym_transpose] = ACTIONS(27),
    [anon_sym_31] = ACTIONS(27),
    [anon_sym_rise] = ACTIONS(27),
    [anon_sym_32] = ACTIONS(27),
    [anon_sym_fall] = ACTIONS(27),
    [anon_sym_33] = ACTIONS(27),
    [anon_sym_classify] = ACTIONS(27),
    [anon_sym_34] = ACTIONS(27),
    [anon_sym_deduplicate] = ACTIONS(27),
    [anon_sym_35] = ACTIONS(27),
    [anon_sym_box] = ACTIONS(27),
    [anon_sym_36] = ACTIONS(27),
    [anon_sym_unbox] = ACTIONS(27),
    [anon_sym_37] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_38] = ACTIONS(27),
    [anon_sym_couple] = ACTIONS(27),
    [anon_sym_39] = ACTIONS(27),
    [anon_sym_join] = ACTIONS(27),
    [anon_sym_40] = ACTIONS(27),
    [anon_sym_select] = ACTIONS(27),
    [anon_sym_41] = ACTIONS(27),
    [anon_sym_pick] = ACTIONS(27),
    [anon_sym_42] = ACTIONS(27),
    [anon_sym_reshape] = ACTIONS(27),
    [anon_sym_43] = ACTIONS(27),
    [anon_sym_take] = ACTIONS(27),
    [anon_sym_44] = ACTIONS(27),
    [anon_sym_drop] = ACTIONS(27),
    [anon_sym_45] = ACTIONS(27),
    [anon_sym_rotate] = ACTIONS(27),
    [anon_sym_46] = ACTIONS(27),
    [anon_sym_windows] = ACTIONS(27),
    [anon_sym_47] = ACTIONS(27),
    [anon_sym_keep] = ACTIONS(27),
    [anon_sym_48] = ACTIONS(27),
    [anon_sym_find] = ACTIONS(27),
    [anon_sym_49] = ACTIONS(27),
    [anon_sym_member] = ACTIONS(27),
    [anon_sym_50] = ACTIONS(27),
    [anon_sym_indexof] = ACTIONS(27),
    [anon_sym_51] = ACTIONS(27),
    [anon_sym_reduce] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_fold] = ACTIONS(27),
    [anon_sym_52] = ACTIONS(27),
    [anon_sym_scan] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_each] = ACTIONS(27),
    [anon_sym_53] = ACTIONS(27),
    [anon_sym_rows] = ACTIONS(27),
    [anon_sym_54] = ACTIONS(27),
    [anon_sym_distribute] = ACTIONS(27),
    [anon_sym_55] = ACTIONS(27),
    [anon_sym_table] = ACTIONS(27),
    [anon_sym_56] = ACTIONS(27),
    [anon_sym_cross] = ACTIONS(27),
    [anon_sym_57] = ACTIONS(27),
    [anon_sym_repeat] = ACTIONS(27),
    [anon_sym_58] = ACTIONS(27),
    [anon_sym_group] = ACTIONS(27),
    [anon_sym_59] = ACTIONS(27),
    [anon_sym_partition] = ACTIONS(27),
    [anon_sym_60] = ACTIONS(27),
    [anon_sym_both] = ACTIONS(27),
    [anon_sym_61] = ACTIONS(27),
    [anon_sym_bracket] = ACTIONS(27),
    [anon_sym_62] = ACTIONS(27),
    [anon_sym_fork] = ACTIONS(27),
    [anon_sym_63] = ACTIONS(27),
    [anon_sym_dip] = ACTIONS(27),
    [anon_sym_64] = ACTIONS(27),
    [anon_sym_gap] = ACTIONS(27),
    [anon_sym_65] = ACTIONS(27),
    [anon_sym_restack] = ACTIONS(27),
    [anon_sym_66] = ACTIONS(27),
    [anon_sym_invert] = ACTIONS(27),
    [anon_sym_67] = ACTIONS(27),
    [anon_sym_under] = ACTIONS(27),
    [anon_sym_68] = ACTIONS(27),
    [anon_sym_level] = ACTIONS(27),
    [anon_sym_69] = ACTIONS(27),
    [anon_sym_fill] = ACTIONS(27),
    [anon_sym_70] = ACTIONS(27),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_try] = ACTIONS(27),
    [anon_sym_71] = ACTIONS(27),
    [anon_sym_assert] = ACTIONS(27),
    [anon_sym_72] = ACTIONS(27),
    [anon_sym_spawn] = ACTIONS(27),
    [anon_sym_73] = ACTIONS(27),
    [anon_sym_wait] = ACTIONS(27),
    [anon_sym_74] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_break] = ACTIONS(27),
    [anon_sym_75] = ACTIONS(27),
    [anon_sym_recur] = ACTIONS(27),
    [anon_sym_76] = ACTIONS(27),
    [anon_sym_random] = ACTIONS(27),
    [anon_sym_77] = ACTIONS(27),
    [anon_sym_gen] = ACTIONS(27),
    [anon_sym_deal] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(27),
    [anon_sym_tag] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_sig] = ACTIONS(30),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_78] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(30),
    [anon_sym_79] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_80] = ACTIONS(27),
    [anon_sym_infinity] = ACTIONS(27),
    [anon_sym_81] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_dump] = ACTIONS(27),
    [anon_sym_FIXME_modifier1] = ACTIONS(33),
    [anon_sym_FIXME_modifier2] = ACTIONS(36),
    [sym__end_of_line] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [sym_character] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_identity] = ACTIONS(39),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_roll] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym_unroll] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(39),
    [anon_sym_sign] = ACTIONS(39),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_6] = ACTIONS(41),
    [anon_sym_absolutevalue] = ACTIONS(39),
    [anon_sym_7] = ACTIONS(39),
    [anon_sym_sqrt] = ACTIONS(39),
    [anon_sym_8] = ACTIONS(39),
    [anon_sym_sine] = ACTIONS(39),
    [anon_sym_9] = ACTIONS(39),
    [anon_sym_floor] = ACTIONS(39),
    [anon_sym_10] = ACTIONS(39),
    [anon_sym_ceiling] = ACTIONS(39),
    [anon_sym_11] = ACTIONS(39),
    [anon_sym_round] = ACTIONS(39),
    [anon_sym_12] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_13] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_14] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_15] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_16] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_17] = ACTIONS(39),
    [anon_sym_modulus] = ACTIONS(39),
    [anon_sym_18] = ACTIONS(39),
    [anon_sym_power] = ACTIONS(39),
    [anon_sym_19] = ACTIONS(39),
    [anon_sym_logarithm] = ACTIONS(39),
    [anon_sym_20] = ACTIONS(39),
    [anon_sym_minimum] = ACTIONS(39),
    [anon_sym_21] = ACTIONS(39),
    [anon_sym_maximum] = ACTIONS(39),
    [anon_sym_22] = ACTIONS(39),
    [anon_sym_atangent] = ACTIONS(39),
    [anon_sym_23] = ACTIONS(39),
    [anon_sym_length] = ACTIONS(39),
    [anon_sym_24] = ACTIONS(39),
    [anon_sym_shape] = ACTIONS(39),
    [anon_sym_25] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(39),
    [anon_sym_26] = ACTIONS(39),
    [anon_sym_first] = ACTIONS(39),
    [anon_sym_27] = ACTIONS(39),
    [anon_sym_reverse] = ACTIONS(39),
    [anon_sym_28] = ACTIONS(39),
    [anon_sym_deshape] = ACTIONS(39),
    [anon_sym_29] = ACTIONS(39),
    [anon_sym_bits] = ACTIONS(39),
    [anon_sym_30] = ACTIONS(39),
    [anon_sym_transpose] = ACTIONS(39),
    [anon_sym_31] = ACTIONS(39),
    [anon_sym_rise] = ACTIONS(39),
    [anon_sym_32] = ACTIONS(39),
    [anon_sym_fall] = ACTIONS(39),
    [anon_sym_33] = ACTIONS(39),
    [anon_sym_classify] = ACTIONS(39),
    [anon_sym_34] = ACTIONS(39),
    [anon_sym_deduplicate] = ACTIONS(39),
    [anon_sym_35] = ACTIONS(39),
    [anon_sym_box] = ACTIONS(39),
    [anon_sym_36] = ACTIONS(39),
    [anon_sym_unbox] = ACTIONS(39),
    [anon_sym_37] = ACTIONS(39),
    [anon_sym_match] = ACTIONS(39),
    [anon_sym_38] = ACTIONS(39),
    [anon_sym_couple] = ACTIONS(39),
    [anon_sym_39] = ACTIONS(39),
    [anon_sym_join] = ACTIONS(39),
    [anon_sym_40] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_41] = ACTIONS(39),
    [anon_sym_pick] = ACTIONS(39),
    [anon_sym_42] = ACTIONS(39),
    [anon_sym_reshape] = ACTIONS(39),
    [anon_sym_43] = ACTIONS(39),
    [anon_sym_take] = ACTIONS(39),
    [anon_sym_44] = ACTIONS(39),
    [anon_sym_drop] = ACTIONS(39),
    [anon_sym_45] = ACTIONS(39),
    [anon_sym_rotate] = ACTIONS(39),
    [anon_sym_46] = ACTIONS(39),
    [anon_sym_windows] = ACTIONS(39),
    [anon_sym_47] = ACTIONS(39),
    [anon_sym_keep] = ACTIONS(39),
    [anon_sym_48] = ACTIONS(39),
    [anon_sym_find] = ACTIONS(39),
    [anon_sym_49] = ACTIONS(39),
    [anon_sym_member] = ACTIONS(39),
    [anon_sym_50] = ACTIONS(39),
    [anon_sym_indexof] = ACTIONS(39),
    [anon_sym_51] = ACTIONS(39),
    [anon_sym_reduce] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_fold] = ACTIONS(39),
    [anon_sym_52] = ACTIONS(39),
    [anon_sym_scan] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_each] = ACTIONS(39),
    [anon_sym_53] = ACTIONS(39),
    [anon_sym_rows] = ACTIONS(39),
    [anon_sym_54] = ACTIONS(39),
    [anon_sym_distribute] = ACTIONS(39),
    [anon_sym_55] = ACTIONS(39),
    [anon_sym_table] = ACTIONS(39),
    [anon_sym_56] = ACTIONS(39),
    [anon_sym_cross] = ACTIONS(39),
    [anon_sym_57] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(39),
    [anon_sym_58] = ACTIONS(39),
    [anon_sym_group] = ACTIONS(39),
    [anon_sym_59] = ACTIONS(39),
    [anon_sym_partition] = ACTIONS(39),
    [anon_sym_60] = ACTIONS(39),
    [anon_sym_both] = ACTIONS(39),
    [anon_sym_61] = ACTIONS(39),
    [anon_sym_bracket] = ACTIONS(39),
    [anon_sym_62] = ACTIONS(39),
    [anon_sym_fork] = ACTIONS(39),
    [anon_sym_63] = ACTIONS(39),
    [anon_sym_dip] = ACTIONS(39),
    [anon_sym_64] = ACTIONS(39),
    [anon_sym_gap] = ACTIONS(39),
    [anon_sym_65] = ACTIONS(39),
    [anon_sym_restack] = ACTIONS(39),
    [anon_sym_66] = ACTIONS(39),
    [anon_sym_invert] = ACTIONS(39),
    [anon_sym_67] = ACTIONS(39),
    [anon_sym_under] = ACTIONS(39),
    [anon_sym_68] = ACTIONS(39),
    [anon_sym_level] = ACTIONS(39),
    [anon_sym_69] = ACTIONS(39),
    [anon_sym_fill] = ACTIONS(39),
    [anon_sym_70] = ACTIONS(39),
    [anon_sym_bind] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_try] = ACTIONS(39),
    [anon_sym_71] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_72] = ACTIONS(39),
    [anon_sym_spawn] = ACTIONS(39),
    [anon_sym_73] = ACTIONS(39),
    [anon_sym_wait] = ACTIONS(39),
    [anon_sym_74] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_75] = ACTIONS(39),
    [anon_sym_recur] = ACTIONS(39),
    [anon_sym_76] = ACTIONS(39),
    [anon_sym_random] = ACTIONS(39),
    [anon_sym_77] = ACTIONS(39),
    [anon_sym_gen] = ACTIONS(39),
    [anon_sym_deal] = ACTIONS(39),
    [anon_sym_use] = ACTIONS(39),
    [anon_sym_tag] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_sig] = ACTIONS(41),
    [anon_sym_eta] = ACTIONS(39),
    [anon_sym_78] = ACTIONS(39),
    [anon_sym_pi] = ACTIONS(41),
    [anon_sym_79] = ACTIONS(39),
    [anon_sym_tau] = ACTIONS(39),
    [anon_sym_80] = ACTIONS(39),
    [anon_sym_infinity] = ACTIONS(39),
    [anon_sym_81] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_dump] = ACTIONS(39),
    [anon_sym_FIXME_modifier1] = ACTIONS(39),
    [anon_sym_FIXME_modifier2] = ACTIONS(39),
    [sym__end_of_line] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [sym_character] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_identity] = ACTIONS(43),
    [anon_sym_] = ACTIONS(43),
    [anon_sym_roll] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(43),
    [anon_sym_unroll] = ACTIONS(43),
    [anon_sym_3] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_sign] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_absolutevalue] = ACTIONS(43),
    [anon_sym_7] = ACTIONS(43),
    [anon_sym_sqrt] = ACTIONS(43),
    [anon_sym_8] = ACTIONS(43),
    [anon_sym_sine] = ACTIONS(43),
    [anon_sym_9] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(43),
    [anon_sym_10] = ACTIONS(43),
    [anon_sym_ceiling] = ACTIONS(43),
    [anon_sym_11] = ACTIONS(43),
    [anon_sym_round] = ACTIONS(43),
    [anon_sym_12] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_13] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_14] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_15] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_16] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_17] = ACTIONS(43),
    [anon_sym_modulus] = ACTIONS(43),
    [anon_sym_18] = ACTIONS(43),
    [anon_sym_power] = ACTIONS(43),
    [anon_sym_19] = ACTIONS(43),
    [anon_sym_logarithm] = ACTIONS(43),
    [anon_sym_20] = ACTIONS(43),
    [anon_sym_minimum] = ACTIONS(43),
    [anon_sym_21] = ACTIONS(43),
    [anon_sym_maximum] = ACTIONS(43),
    [anon_sym_22] = ACTIONS(43),
    [anon_sym_atangent] = ACTIONS(43),
    [anon_sym_23] = ACTIONS(43),
    [anon_sym_length] = ACTIONS(43),
    [anon_sym_24] = ACTIONS(43),
    [anon_sym_shape] = ACTIONS(43),
    [anon_sym_25] = ACTIONS(43),
    [anon_sym_range] = ACTIONS(43),
    [anon_sym_26] = ACTIONS(43),
    [anon_sym_first] = ACTIONS(43),
    [anon_sym_27] = ACTIONS(43),
    [anon_sym_reverse] = ACTIONS(43),
    [anon_sym_28] = ACTIONS(43),
    [anon_sym_deshape] = ACTIONS(43),
    [anon_sym_29] = ACTIONS(43),
    [anon_sym_bits] = ACTIONS(43),
    [anon_sym_30] = ACTIONS(43),
    [anon_sym_transpose] = ACTIONS(43),
    [anon_sym_31] = ACTIONS(43),
    [anon_sym_rise] = ACTIONS(43),
    [anon_sym_32] = ACTIONS(43),
    [anon_sym_fall] = ACTIONS(43),
    [anon_sym_33] = ACTIONS(43),
    [anon_sym_classify] = ACTIONS(43),
    [anon_sym_34] = ACTIONS(43),
    [anon_sym_deduplicate] = ACTIONS(43),
    [anon_sym_35] = ACTIONS(43),
    [anon_sym_box] = ACTIONS(43),
    [anon_sym_36] = ACTIONS(43),
    [anon_sym_unbox] = ACTIONS(43),
    [anon_sym_37] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(43),
    [anon_sym_38] = ACTIONS(43),
    [anon_sym_couple] = ACTIONS(43),
    [anon_sym_39] = ACTIONS(43),
    [anon_sym_join] = ACTIONS(43),
    [anon_sym_40] = ACTIONS(43),
    [anon_sym_select] = ACTIONS(43),
    [anon_sym_41] = ACTIONS(43),
    [anon_sym_pick] = ACTIONS(43),
    [anon_sym_42] = ACTIONS(43),
    [anon_sym_reshape] = ACTIONS(43),
    [anon_sym_43] = ACTIONS(43),
    [anon_sym_take] = ACTIONS(43),
    [anon_sym_44] = ACTIONS(43),
    [anon_sym_drop] = ACTIONS(43),
    [anon_sym_45] = ACTIONS(43),
    [anon_sym_rotate] = ACTIONS(43),
    [anon_sym_46] = ACTIONS(43),
    [anon_sym_windows] = ACTIONS(43),
    [anon_sym_47] = ACTIONS(43),
    [anon_sym_keep] = ACTIONS(43),
    [anon_sym_48] = ACTIONS(43),
    [anon_sym_find] = ACTIONS(43),
    [anon_sym_49] = ACTIONS(43),
    [anon_sym_member] = ACTIONS(43),
    [anon_sym_50] = ACTIONS(43),
    [anon_sym_indexof] = ACTIONS(43),
    [anon_sym_51] = ACTIONS(43),
    [anon_sym_reduce] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_fold] = ACTIONS(43),
    [anon_sym_52] = ACTIONS(43),
    [anon_sym_scan] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_each] = ACTIONS(43),
    [anon_sym_53] = ACTIONS(43),
    [anon_sym_rows] = ACTIONS(43),
    [anon_sym_54] = ACTIONS(43),
    [anon_sym_distribute] = ACTIONS(43),
    [anon_sym_55] = ACTIONS(43),
    [anon_sym_table] = ACTIONS(43),
    [anon_sym_56] = ACTIONS(43),
    [anon_sym_cross] = ACTIONS(43),
    [anon_sym_57] = ACTIONS(43),
    [anon_sym_repeat] = ACTIONS(43),
    [anon_sym_58] = ACTIONS(43),
    [anon_sym_group] = ACTIONS(43),
    [anon_sym_59] = ACTIONS(43),
    [anon_sym_partition] = ACTIONS(43),
    [anon_sym_60] = ACTIONS(43),
    [anon_sym_both] = ACTIONS(43),
    [anon_sym_61] = ACTIONS(43),
    [anon_sym_bracket] = ACTIONS(43),
    [anon_sym_62] = ACTIONS(43),
    [anon_sym_fork] = ACTIONS(43),
    [anon_sym_63] = ACTIONS(43),
    [anon_sym_dip] = ACTIONS(43),
    [anon_sym_64] = ACTIONS(43),
    [anon_sym_gap] = ACTIONS(43),
    [anon_sym_65] = ACTIONS(43),
    [anon_sym_restack] = ACTIONS(43),
    [anon_sym_66] = ACTIONS(43),
    [anon_sym_invert] = ACTIONS(43),
    [anon_sym_67] = ACTIONS(43),
    [anon_sym_under] = ACTIONS(43),
    [anon_sym_68] = ACTIONS(43),
    [anon_sym_level] = ACTIONS(43),
    [anon_sym_69] = ACTIONS(43),
    [anon_sym_fill] = ACTIONS(43),
    [anon_sym_70] = ACTIONS(43),
    [anon_sym_bind] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_try] = ACTIONS(43),
    [anon_sym_71] = ACTIONS(43),
    [anon_sym_assert] = ACTIONS(43),
    [anon_sym_72] = ACTIONS(43),
    [anon_sym_spawn] = ACTIONS(43),
    [anon_sym_73] = ACTIONS(43),
    [anon_sym_wait] = ACTIONS(43),
    [anon_sym_74] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_75] = ACTIONS(43),
    [anon_sym_recur] = ACTIONS(43),
    [anon_sym_76] = ACTIONS(43),
    [anon_sym_random] = ACTIONS(43),
    [anon_sym_77] = ACTIONS(43),
    [anon_sym_gen] = ACTIONS(43),
    [anon_sym_deal] = ACTIONS(43),
    [anon_sym_use] = ACTIONS(43),
    [anon_sym_tag] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(43),
    [anon_sym_sig] = ACTIONS(45),
    [anon_sym_eta] = ACTIONS(43),
    [anon_sym_78] = ACTIONS(43),
    [anon_sym_pi] = ACTIONS(45),
    [anon_sym_79] = ACTIONS(43),
    [anon_sym_tau] = ACTIONS(43),
    [anon_sym_80] = ACTIONS(43),
    [anon_sym_infinity] = ACTIONS(43),
    [anon_sym_81] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_dump] = ACTIONS(43),
    [anon_sym_FIXME_modifier1] = ACTIONS(43),
    [anon_sym_FIXME_modifier2] = ACTIONS(43),
    [sym__end_of_line] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [sym_character] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_identity] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [anon_sym_roll] = ACTIONS(47),
    [anon_sym_2] = ACTIONS(47),
    [anon_sym_unroll] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_4] = ACTIONS(47),
    [anon_sym_sign] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(49),
    [anon_sym_absolutevalue] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(47),
    [anon_sym_sqrt] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(47),
    [anon_sym_sine] = ACTIONS(47),
    [anon_sym_9] = ACTIONS(47),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_10] = ACTIONS(47),
    [anon_sym_ceiling] = ACTIONS(47),
    [anon_sym_11] = ACTIONS(47),
    [anon_sym_round] = ACTIONS(47),
    [anon_sym_12] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_13] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_14] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_15] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_16] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_17] = ACTIONS(47),
    [anon_sym_modulus] = ACTIONS(47),
    [anon_sym_18] = ACTIONS(47),
    [anon_sym_power] = ACTIONS(47),
    [anon_sym_19] = ACTIONS(47),
    [anon_sym_logarithm] = ACTIONS(47),
    [anon_sym_20] = ACTIONS(47),
    [anon_sym_minimum] = ACTIONS(47),
    [anon_sym_21] = ACTIONS(47),
    [anon_sym_maximum] = ACTIONS(47),
    [anon_sym_22] = ACTIONS(47),
    [anon_sym_atangent] = ACTIONS(47),
    [anon_sym_23] = ACTIONS(47),
    [anon_sym_length] = ACTIONS(47),
    [anon_sym_24] = ACTIONS(47),
    [anon_sym_shape] = ACTIONS(47),
    [anon_sym_25] = ACTIONS(47),
    [anon_sym_range] = ACTIONS(47),
    [anon_sym_26] = ACTIONS(47),
    [anon_sym_first] = ACTIONS(47),
    [anon_sym_27] = ACTIONS(47),
    [anon_sym_reverse] = ACTIONS(47),
    [anon_sym_28] = ACTIONS(47),
    [anon_sym_deshape] = ACTIONS(47),
    [anon_sym_29] = ACTIONS(47),
    [anon_sym_bits] = ACTIONS(47),
    [anon_sym_30] = ACTIONS(47),
    [anon_sym_transpose] = ACTIONS(47),
    [anon_sym_31] = ACTIONS(47),
    [anon_sym_rise] = ACTIONS(47),
    [anon_sym_32] = ACTIONS(47),
    [anon_sym_fall] = ACTIONS(47),
    [anon_sym_33] = ACTIONS(47),
    [anon_sym_classify] = ACTIONS(47),
    [anon_sym_34] = ACTIONS(47),
    [anon_sym_deduplicate] = ACTIONS(47),
    [anon_sym_35] = ACTIONS(47),
    [anon_sym_box] = ACTIONS(47),
    [anon_sym_36] = ACTIONS(47),
    [anon_sym_unbox] = ACTIONS(47),
    [anon_sym_37] = ACTIONS(47),
    [anon_sym_match] = ACTIONS(47),
    [anon_sym_38] = ACTIONS(47),
    [anon_sym_couple] = ACTIONS(47),
    [anon_sym_39] = ACTIONS(47),
    [anon_sym_join] = ACTIONS(47),
    [anon_sym_40] = ACTIONS(47),
    [anon_sym_select] = ACTIONS(47),
    [anon_sym_41] = ACTIONS(47),
    [anon_sym_pick] = ACTIONS(47),
    [anon_sym_42] = ACTIONS(47),
    [anon_sym_reshape] = ACTIONS(47),
    [anon_sym_43] = ACTIONS(47),
    [anon_sym_take] = ACTIONS(47),
    [anon_sym_44] = ACTIONS(47),
    [anon_sym_drop] = ACTIONS(47),
    [anon_sym_45] = ACTIONS(47),
    [anon_sym_rotate] = ACTIONS(47),
    [anon_sym_46] = ACTIONS(47),
    [anon_sym_windows] = ACTIONS(47),
    [anon_sym_47] = ACTIONS(47),
    [anon_sym_keep] = ACTIONS(47),
    [anon_sym_48] = ACTIONS(47),
    [anon_sym_find] = ACTIONS(47),
    [anon_sym_49] = ACTIONS(47),
    [anon_sym_member] = ACTIONS(47),
    [anon_sym_50] = ACTIONS(47),
    [anon_sym_indexof] = ACTIONS(47),
    [anon_sym_51] = ACTIONS(47),
    [anon_sym_reduce] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_fold] = ACTIONS(47),
    [anon_sym_52] = ACTIONS(47),
    [anon_sym_scan] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_each] = ACTIONS(47),
    [anon_sym_53] = ACTIONS(47),
    [anon_sym_rows] = ACTIONS(47),
    [anon_sym_54] = ACTIONS(47),
    [anon_sym_distribute] = ACTIONS(47),
    [anon_sym_55] = ACTIONS(47),
    [anon_sym_table] = ACTIONS(47),
    [anon_sym_56] = ACTIONS(47),
    [anon_sym_cross] = ACTIONS(47),
    [anon_sym_57] = ACTIONS(47),
    [anon_sym_repeat] = ACTIONS(47),
    [anon_sym_58] = ACTIONS(47),
    [anon_sym_group] = ACTIONS(47),
    [anon_sym_59] = ACTIONS(47),
    [anon_sym_partition] = ACTIONS(47),
    [anon_sym_60] = ACTIONS(47),
    [anon_sym_both] = ACTIONS(47),
    [anon_sym_61] = ACTIONS(47),
    [anon_sym_bracket] = ACTIONS(47),
    [anon_sym_62] = ACTIONS(47),
    [anon_sym_fork] = ACTIONS(47),
    [anon_sym_63] = ACTIONS(47),
    [anon_sym_dip] = ACTIONS(47),
    [anon_sym_64] = ACTIONS(47),
    [anon_sym_gap] = ACTIONS(47),
    [anon_sym_65] = ACTIONS(47),
    [anon_sym_restack] = ACTIONS(47),
    [anon_sym_66] = ACTIONS(47),
    [anon_sym_invert] = ACTIONS(47),
    [anon_sym_67] = ACTIONS(47),
    [anon_sym_under] = ACTIONS(47),
    [anon_sym_68] = ACTIONS(47),
    [anon_sym_level] = ACTIONS(47),
    [anon_sym_69] = ACTIONS(47),
    [anon_sym_fill] = ACTIONS(47),
    [anon_sym_70] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_try] = ACTIONS(47),
    [anon_sym_71] = ACTIONS(47),
    [anon_sym_assert] = ACTIONS(47),
    [anon_sym_72] = ACTIONS(47),
    [anon_sym_spawn] = ACTIONS(47),
    [anon_sym_73] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [anon_sym_74] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(47),
    [anon_sym_75] = ACTIONS(47),
    [anon_sym_recur] = ACTIONS(47),
    [anon_sym_76] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_77] = ACTIONS(47),
    [anon_sym_gen] = ACTIONS(47),
    [anon_sym_deal] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(47),
    [anon_sym_tag] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_sig] = ACTIONS(49),
    [anon_sym_eta] = ACTIONS(47),
    [anon_sym_78] = ACTIONS(47),
    [anon_sym_pi] = ACTIONS(49),
    [anon_sym_79] = ACTIONS(47),
    [anon_sym_tau] = ACTIONS(47),
    [anon_sym_80] = ACTIONS(47),
    [anon_sym_infinity] = ACTIONS(47),
    [anon_sym_81] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_dump] = ACTIONS(47),
    [anon_sym_FIXME_modifier1] = ACTIONS(47),
    [anon_sym_FIXME_modifier2] = ACTIONS(47),
    [sym__end_of_line] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [sym_character] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_identity] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_roll] = ACTIONS(51),
    [anon_sym_2] = ACTIONS(51),
    [anon_sym_unroll] = ACTIONS(51),
    [anon_sym_3] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_4] = ACTIONS(51),
    [anon_sym_sign] = ACTIONS(51),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(53),
    [anon_sym_absolutevalue] = ACTIONS(51),
    [anon_sym_7] = ACTIONS(51),
    [anon_sym_sqrt] = ACTIONS(51),
    [anon_sym_8] = ACTIONS(51),
    [anon_sym_sine] = ACTIONS(51),
    [anon_sym_9] = ACTIONS(51),
    [anon_sym_floor] = ACTIONS(51),
    [anon_sym_10] = ACTIONS(51),
    [anon_sym_ceiling] = ACTIONS(51),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_round] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_13] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_14] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_15] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_16] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_17] = ACTIONS(51),
    [anon_sym_modulus] = ACTIONS(51),
    [anon_sym_18] = ACTIONS(51),
    [anon_sym_power] = ACTIONS(51),
    [anon_sym_19] = ACTIONS(51),
    [anon_sym_logarithm] = ACTIONS(51),
    [anon_sym_20] = ACTIONS(51),
    [anon_sym_minimum] = ACTIONS(51),
    [anon_sym_21] = ACTIONS(51),
    [anon_sym_maximum] = ACTIONS(51),
    [anon_sym_22] = ACTIONS(51),
    [anon_sym_atangent] = ACTIONS(51),
    [anon_sym_23] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_24] = ACTIONS(51),
    [anon_sym_shape] = ACTIONS(51),
    [anon_sym_25] = ACTIONS(51),
    [anon_sym_range] = ACTIONS(51),
    [anon_sym_26] = ACTIONS(51),
    [anon_sym_first] = ACTIONS(51),
    [anon_sym_27] = ACTIONS(51),
    [anon_sym_reverse] = ACTIONS(51),
    [anon_sym_28] = ACTIONS(51),
    [anon_sym_deshape] = ACTIONS(51),
    [anon_sym_29] = ACTIONS(51),
    [anon_sym_bits] = ACTIONS(51),
    [anon_sym_30] = ACTIONS(51),
    [anon_sym_transpose] = ACTIONS(51),
    [anon_sym_31] = ACTIONS(51),
    [anon_sym_rise] = ACTIONS(51),
    [anon_sym_32] = ACTIONS(51),
    [anon_sym_fall] = ACTIONS(51),
    [anon_sym_33] = ACTIONS(51),
    [anon_sym_classify] = ACTIONS(51),
    [anon_sym_34] = ACTIONS(51),
    [anon_sym_deduplicate] = ACTIONS(51),
    [anon_sym_35] = ACTIONS(51),
    [anon_sym_box] = ACTIONS(51),
    [anon_sym_36] = ACTIONS(51),
    [anon_sym_unbox] = ACTIONS(51),
    [anon_sym_37] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_38] = ACTIONS(51),
    [anon_sym_couple] = ACTIONS(51),
    [anon_sym_39] = ACTIONS(51),
    [anon_sym_join] = ACTIONS(51),
    [anon_sym_40] = ACTIONS(51),
    [anon_sym_select] = ACTIONS(51),
    [anon_sym_41] = ACTIONS(51),
    [anon_sym_pick] = ACTIONS(51),
    [anon_sym_42] = ACTIONS(51),
    [anon_sym_reshape] = ACTIONS(51),
    [anon_sym_43] = ACTIONS(51),
    [anon_sym_take] = ACTIONS(51),
    [anon_sym_44] = ACTIONS(51),
    [anon_sym_drop] = ACTIONS(51),
    [anon_sym_45] = ACTIONS(51),
    [anon_sym_rotate] = ACTIONS(51),
    [anon_sym_46] = ACTIONS(51),
    [anon_sym_windows] = ACTIONS(51),
    [anon_sym_47] = ACTIONS(51),
    [anon_sym_keep] = ACTIONS(51),
    [anon_sym_48] = ACTIONS(51),
    [anon_sym_find] = ACTIONS(51),
    [anon_sym_49] = ACTIONS(51),
    [anon_sym_member] = ACTIONS(51),
    [anon_sym_50] = ACTIONS(51),
    [anon_sym_indexof] = ACTIONS(51),
    [anon_sym_51] = ACTIONS(51),
    [anon_sym_reduce] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_fold] = ACTIONS(51),
    [anon_sym_52] = ACTIONS(51),
    [anon_sym_scan] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_each] = ACTIONS(51),
    [anon_sym_53] = ACTIONS(51),
    [anon_sym_rows] = ACTIONS(51),
    [anon_sym_54] = ACTIONS(51),
    [anon_sym_distribute] = ACTIONS(51),
    [anon_sym_55] = ACTIONS(51),
    [anon_sym_table] = ACTIONS(51),
    [anon_sym_56] = ACTIONS(51),
    [anon_sym_cross] = ACTIONS(51),
    [anon_sym_57] = ACTIONS(51),
    [anon_sym_repeat] = ACTIONS(51),
    [anon_sym_58] = ACTIONS(51),
    [anon_sym_group] = ACTIONS(51),
    [anon_sym_59] = ACTIONS(51),
    [anon_sym_partition] = ACTIONS(51),
    [anon_sym_60] = ACTIONS(51),
    [anon_sym_both] = ACTIONS(51),
    [anon_sym_61] = ACTIONS(51),
    [anon_sym_bracket] = ACTIONS(51),
    [anon_sym_62] = ACTIONS(51),
    [anon_sym_fork] = ACTIONS(51),
    [anon_sym_63] = ACTIONS(51),
    [anon_sym_dip] = ACTIONS(51),
    [anon_sym_64] = ACTIONS(51),
    [anon_sym_gap] = ACTIONS(51),
    [anon_sym_65] = ACTIONS(51),
    [anon_sym_restack] = ACTIONS(51),
    [anon_sym_66] = ACTIONS(51),
    [anon_sym_invert] = ACTIONS(51),
    [anon_sym_67] = ACTIONS(51),
    [anon_sym_under] = ACTIONS(51),
    [anon_sym_68] = ACTIONS(51),
    [anon_sym_level] = ACTIONS(51),
    [anon_sym_69] = ACTIONS(51),
    [anon_sym_fill] = ACTIONS(51),
    [anon_sym_70] = ACTIONS(51),
    [anon_sym_bind] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_try] = ACTIONS(51),
    [anon_sym_71] = ACTIONS(51),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_72] = ACTIONS(51),
    [anon_sym_spawn] = ACTIONS(51),
    [anon_sym_73] = ACTIONS(51),
    [anon_sym_wait] = ACTIONS(51),
    [anon_sym_74] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_75] = ACTIONS(51),
    [anon_sym_recur] = ACTIONS(51),
    [anon_sym_76] = ACTIONS(51),
    [anon_sym_random] = ACTIONS(51),
    [anon_sym_77] = ACTIONS(51),
    [anon_sym_gen] = ACTIONS(51),
    [anon_sym_deal] = ACTIONS(51),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_tag] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_sig] = ACTIONS(53),
    [anon_sym_eta] = ACTIONS(51),
    [anon_sym_78] = ACTIONS(51),
    [anon_sym_pi] = ACTIONS(53),
    [anon_sym_79] = ACTIONS(51),
    [anon_sym_tau] = ACTIONS(51),
    [anon_sym_80] = ACTIONS(51),
    [anon_sym_infinity] = ACTIONS(51),
    [anon_sym_81] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_dump] = ACTIONS(51),
    [anon_sym_FIXME_modifier1] = ACTIONS(51),
    [anon_sym_FIXME_modifier2] = ACTIONS(51),
    [sym__end_of_line] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__end_of_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__PROGRAM, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__PROGRAM, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function1, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function1, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier1, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier1, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier2, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier2, 1),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
