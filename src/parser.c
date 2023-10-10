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
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 68
#define SYMBOL_COUNT 233
#define ALIAS_COUNT 0
#define TOKEN_COUNT 217
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOLLAR = 1,
  anon_sym_ = 2,
  aux_sym_number_token1 = 3,
  aux_sym_character_token1 = 4,
  sym_string = 5,
  sym_multiLineString = 6,
  sym_signature = 7,
  sym_identifier = 8,
  sym_identifier_deprecated = 9,
  sym_system = 10,
  sym_comment = 11,
  sym_openParen = 12,
  sym_closeParen = 13,
  sym_openCurly = 14,
  sym_closeCurly = 15,
  sym_openBracket = 16,
  sym_closeBracket = 17,
  sym_underscore = 18,
  sym_bar = 19,
  sym_leftArrow = 20,
  anon_sym_eta = 21,
  anon_sym_2 = 22,
  anon_sym_pi = 23,
  anon_sym_3 = 24,
  anon_sym_tau = 25,
  anon_sym_4 = 26,
  anon_sym_infinity = 27,
  anon_sym_5 = 28,
  anon_sym_DOT = 29,
  anon_sym_COMMA = 30,
  anon_sym_COLON = 31,
  anon_sym_SEMI = 32,
  anon_sym_identity = 33,
  anon_sym_id = 34,
  anon_sym_6 = 35,
  anon_sym_not = 36,
  anon_sym_7 = 37,
  anon_sym_sign = 38,
  anon_sym_8 = 39,
  anon_sym_BQUOTE = 40,
  anon_sym_absolutevalue = 41,
  anon_sym_9 = 42,
  anon_sym_sqrt = 43,
  anon_sym_10 = 44,
  anon_sym_sine = 45,
  anon_sym_11 = 46,
  anon_sym_floor = 47,
  anon_sym_12 = 48,
  anon_sym_ceiling = 49,
  anon_sym_13 = 50,
  anon_sym_round = 51,
  anon_sym_14 = 52,
  anon_sym_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_15 = 55,
  anon_sym_LT = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_16 = 58,
  anon_sym_GT = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_17 = 61,
  anon_sym_PLUS = 62,
  anon_sym_DASH = 63,
  anon_sym_STAR = 64,
  anon_sym_18 = 65,
  anon_sym_PERCENT = 66,
  anon_sym_19 = 67,
  anon_sym_modulus = 68,
  anon_sym_20 = 69,
  anon_sym_power = 70,
  anon_sym_21 = 71,
  anon_sym_logarithm = 72,
  anon_sym_22 = 73,
  anon_sym_minimum = 74,
  anon_sym_23 = 75,
  anon_sym_maximum = 76,
  anon_sym_24 = 77,
  anon_sym_atangent = 78,
  anon_sym_25 = 79,
  anon_sym_length = 80,
  anon_sym_26 = 81,
  anon_sym_shape = 82,
  anon_sym_27 = 83,
  anon_sym_range = 84,
  anon_sym_28 = 85,
  anon_sym_first = 86,
  anon_sym_29 = 87,
  anon_sym_reverse = 88,
  anon_sym_30 = 89,
  anon_sym_deshape = 90,
  anon_sym_31 = 91,
  anon_sym_bits = 92,
  anon_sym_32 = 93,
  anon_sym_transpose = 94,
  anon_sym_33 = 95,
  anon_sym_rise = 96,
  anon_sym_34 = 97,
  anon_sym_fall = 98,
  anon_sym_35 = 99,
  anon_sym_classify = 100,
  anon_sym_36 = 101,
  anon_sym_deduplicate = 102,
  anon_sym_37 = 103,
  anon_sym_box = 104,
  anon_sym_38 = 105,
  anon_sym_unbox = 106,
  anon_sym_39 = 107,
  anon_sym_match = 108,
  anon_sym_40 = 109,
  anon_sym_couple = 110,
  anon_sym_41 = 111,
  anon_sym_join = 112,
  anon_sym_42 = 113,
  anon_sym_select = 114,
  anon_sym_43 = 115,
  anon_sym_pick = 116,
  anon_sym_44 = 117,
  anon_sym_reshape = 118,
  anon_sym_45 = 119,
  anon_sym_take = 120,
  anon_sym_46 = 121,
  anon_sym_drop = 122,
  anon_sym_47 = 123,
  anon_sym_rotate = 124,
  anon_sym_48 = 125,
  anon_sym_windows = 126,
  anon_sym_49 = 127,
  anon_sym_keep = 128,
  anon_sym_50 = 129,
  anon_sym_find = 130,
  anon_sym_51 = 131,
  anon_sym_member = 132,
  anon_sym_52 = 133,
  anon_sym_indexof = 134,
  anon_sym_53 = 135,
  anon_sym_assert = 136,
  anon_sym_54 = 137,
  anon_sym_wait = 138,
  anon_sym_BANG = 139,
  anon_sym_break = 140,
  anon_sym_55 = 141,
  anon_sym_recur = 142,
  anon_sym_56 = 143,
  anon_sym_random = 144,
  anon_sym_57 = 145,
  anon_sym_gen = 146,
  anon_sym_deal = 147,
  anon_sym_use = 148,
  anon_sym_tag = 149,
  anon_sym_type = 150,
  anon_sym_sig = 151,
  anon_sym_TILDE = 152,
  anon_sym_dump = 153,
  anon_sym_reduce = 154,
  anon_sym_SLASH = 155,
  anon_sym_scan = 156,
  anon_sym_BSLASH = 157,
  anon_sym_each = 158,
  anon_sym_58 = 159,
  anon_sym_rows = 160,
  anon_sym_59 = 161,
  anon_sym_repeat = 162,
  anon_sym_60 = 163,
  anon_sym_dip = 164,
  anon_sym_di = 165,
  anon_sym_61 = 166,
  anon_sym_gap = 167,
  anon_sym_ga = 168,
  anon_sym_62 = 169,
  anon_sym_invert = 170,
  anon_sym_63 = 171,
  anon_sym_spawn = 172,
  anon_sym_fold = 173,
  anon_sym_64 = 174,
  anon_sym_distribute = 175,
  anon_sym_65 = 176,
  anon_sym_table = 177,
  anon_sym_66 = 178,
  anon_sym_cross = 179,
  anon_sym_67 = 180,
  anon_sym_group = 181,
  anon_sym_68 = 182,
  anon_sym_partition = 183,
  anon_sym_69 = 184,
  anon_sym_both = 185,
  anon_sym_70 = 186,
  anon_sym_bracket = 187,
  anon_sym_71 = 188,
  anon_sym_fork = 189,
  anon_sym_72 = 190,
  anon_sym_under = 191,
  anon_sym_73 = 192,
  anon_sym_level = 193,
  anon_sym_74 = 194,
  anon_sym_fill = 195,
  anon_sym_75 = 196,
  anon_sym_bind = 197,
  anon_sym_SQUOTE = 198,
  anon_sym_QMARK = 199,
  anon_sym_try = 200,
  anon_sym_76 = 201,
  anon_sym_77 = 202,
  anon_sym_78 = 203,
  anon_sym_79 = 204,
  anon_sym_80 = 205,
  anon_sym_81 = 206,
  anon_sym_82 = 207,
  anon_sym_roll = 208,
  anon_sym_83 = 209,
  anon_sym_unroll = 210,
  anon_sym_84 = 211,
  anon_sym_restack = 212,
  anon_sym_85 = 213,
  anon_sym_86 = 214,
  sym__whitespace = 215,
  sym__end_of_line = 216,
  sym_source_file = 217,
  sym_PROGRAM = 218,
  sym_atom = 219,
  sym_array = 220,
  sym_number = 221,
  sym_character = 222,
  sym_primitive = 223,
  sym_constant = 224,
  sym_function = 225,
  sym_modifier1 = 226,
  sym_modifier2 = 227,
  sym_deprecated = 228,
  aux_sym_PROGRAM_repeat1 = 229,
  aux_sym_atom_repeat1 = 230,
  aux_sym_array_repeat1 = 231,
  aux_sym_array_repeat2 = 232,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_] = "¯",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_character_token1] = "character_token1",
  [sym_string] = "string",
  [sym_multiLineString] = "multiLineString",
  [sym_signature] = "signature",
  [sym_identifier] = "identifier",
  [sym_identifier_deprecated] = "identifier_deprecated",
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
  [sym_leftArrow] = "leftArrow",
  [anon_sym_eta] = "eta",
  [anon_sym_2] = "η",
  [anon_sym_pi] = "pi",
  [anon_sym_3] = "π",
  [anon_sym_tau] = "tau",
  [anon_sym_4] = "τ",
  [anon_sym_infinity] = "infinity",
  [anon_sym_5] = "∞",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_identity] = "identity",
  [anon_sym_id] = "id",
  [anon_sym_6] = "∘",
  [anon_sym_not] = "not",
  [anon_sym_7] = "¬",
  [anon_sym_sign] = "sign",
  [anon_sym_8] = "±",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_absolutevalue] = "absolute value",
  [anon_sym_9] = "⌵",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_10] = "√",
  [anon_sym_sine] = "sine",
  [anon_sym_11] = "○",
  [anon_sym_floor] = "floor",
  [anon_sym_12] = "⌊",
  [anon_sym_ceiling] = "ceiling",
  [anon_sym_13] = "⌈",
  [anon_sym_round] = "round",
  [anon_sym_14] = "⁅",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_15] = "≠",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_16] = "≤",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_17] = "≥",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_18] = "×",
  [anon_sym_PERCENT] = "%",
  [anon_sym_19] = "÷",
  [anon_sym_modulus] = "modulus",
  [anon_sym_20] = "◿",
  [anon_sym_power] = "power",
  [anon_sym_21] = "ⁿ",
  [anon_sym_logarithm] = "logarithm",
  [anon_sym_22] = "ₙ",
  [anon_sym_minimum] = "minimum",
  [anon_sym_23] = "↧",
  [anon_sym_maximum] = "maximum",
  [anon_sym_24] = "↥",
  [anon_sym_atangent] = "atangent",
  [anon_sym_25] = "∠",
  [anon_sym_length] = "length",
  [anon_sym_26] = "⧻",
  [anon_sym_shape] = "shape",
  [anon_sym_27] = "△",
  [anon_sym_range] = "range",
  [anon_sym_28] = "⇡",
  [anon_sym_first] = "first",
  [anon_sym_29] = "⊢",
  [anon_sym_reverse] = "reverse",
  [anon_sym_30] = "⇌",
  [anon_sym_deshape] = "deshape",
  [anon_sym_31] = "♭",
  [anon_sym_bits] = "bits",
  [anon_sym_32] = "⋯",
  [anon_sym_transpose] = "transpose",
  [anon_sym_33] = "⍉",
  [anon_sym_rise] = "rise",
  [anon_sym_34] = "⍏",
  [anon_sym_fall] = "fall",
  [anon_sym_35] = "⍖",
  [anon_sym_classify] = "classify",
  [anon_sym_36] = "⊛",
  [anon_sym_deduplicate] = "deduplicate",
  [anon_sym_37] = "⊝",
  [anon_sym_box] = "box",
  [anon_sym_38] = "□",
  [anon_sym_unbox] = "unbox",
  [anon_sym_39] = "⊔",
  [anon_sym_match] = "match",
  [anon_sym_40] = "≅",
  [anon_sym_couple] = "couple",
  [anon_sym_41] = "⊟",
  [anon_sym_join] = "join",
  [anon_sym_42] = "⊂",
  [anon_sym_select] = "select",
  [anon_sym_43] = "⊏",
  [anon_sym_pick] = "pick",
  [anon_sym_44] = "⊡",
  [anon_sym_reshape] = "reshape",
  [anon_sym_45] = "↯",
  [anon_sym_take] = "take",
  [anon_sym_46] = "↙",
  [anon_sym_drop] = "drop",
  [anon_sym_47] = "↘",
  [anon_sym_rotate] = "rotate",
  [anon_sym_48] = "↻",
  [anon_sym_windows] = "windows",
  [anon_sym_49] = "◫",
  [anon_sym_keep] = "keep",
  [anon_sym_50] = "▽",
  [anon_sym_find] = "find",
  [anon_sym_51] = "⌕",
  [anon_sym_member] = "member",
  [anon_sym_52] = "∊",
  [anon_sym_indexof] = "indexof",
  [anon_sym_53] = "⊗",
  [anon_sym_assert] = "assert",
  [anon_sym_54] = "⍤",
  [anon_sym_wait] = "wait",
  [anon_sym_BANG] = "!",
  [anon_sym_break] = "break",
  [anon_sym_55] = "⎋",
  [anon_sym_recur] = "recur",
  [anon_sym_56] = "↬",
  [anon_sym_random] = "random",
  [anon_sym_57] = "⚂",
  [anon_sym_gen] = "gen",
  [anon_sym_deal] = "deal",
  [anon_sym_use] = "use",
  [anon_sym_tag] = "tag",
  [anon_sym_type] = "type",
  [anon_sym_sig] = "sig",
  [anon_sym_TILDE] = "~",
  [anon_sym_dump] = "dump",
  [anon_sym_reduce] = "reduce",
  [anon_sym_SLASH] = "/",
  [anon_sym_scan] = "scan",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_each] = "each",
  [anon_sym_58] = "∵",
  [anon_sym_rows] = "rows",
  [anon_sym_59] = "≡",
  [anon_sym_repeat] = "repeat",
  [anon_sym_60] = "⍥",
  [anon_sym_dip] = "dip",
  [anon_sym_di] = "di",
  [anon_sym_61] = "⊙",
  [anon_sym_gap] = "gap",
  [anon_sym_ga] = "ga",
  [anon_sym_62] = "⋅",
  [anon_sym_invert] = "invert",
  [anon_sym_63] = "⍘",
  [anon_sym_spawn] = "spawn",
  [anon_sym_fold] = "fold",
  [anon_sym_64] = "∧",
  [anon_sym_distribute] = "distribute",
  [anon_sym_65] = "∺",
  [anon_sym_table] = "table",
  [anon_sym_66] = "⊞",
  [anon_sym_cross] = "cross",
  [anon_sym_67] = "⊠",
  [anon_sym_group] = "group",
  [anon_sym_68] = "⊕",
  [anon_sym_partition] = "partition",
  [anon_sym_69] = "⊜",
  [anon_sym_both] = "both",
  [anon_sym_70] = "∩",
  [anon_sym_bracket] = "bracket",
  [anon_sym_71] = "⊓",
  [anon_sym_fork] = "fork",
  [anon_sym_72] = "⊃",
  [anon_sym_under] = "under",
  [anon_sym_73] = "⍜",
  [anon_sym_level] = "level",
  [anon_sym_74] = "⍚",
  [anon_sym_fill] = "fill",
  [anon_sym_75] = "⬚",
  [anon_sym_bind] = "bind",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_QMARK] = "\?",
  [anon_sym_try] = "try",
  [anon_sym_76] = "⍣",
  [anon_sym_77] = "❥",
  [anon_sym_78] = "→",
  [anon_sym_79] = "∷",
  [anon_sym_80] = "·",
  [anon_sym_81] = "⍛",
  [anon_sym_82] = "⌂",
  [anon_sym_roll] = "roll",
  [anon_sym_83] = "↷",
  [anon_sym_unroll] = "unroll",
  [anon_sym_84] = "↶",
  [anon_sym_restack] = "restack",
  [anon_sym_85] = "⇵",
  [anon_sym_86] = "↰",
  [sym__whitespace] = "_whitespace",
  [sym__end_of_line] = "_end_of_line",
  [sym_source_file] = "source_file",
  [sym_PROGRAM] = "PROGRAM",
  [sym_atom] = "atom",
  [sym_array] = "array",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_primitive] = "primitive",
  [sym_constant] = "constant",
  [sym_function] = "function",
  [sym_modifier1] = "modifier1",
  [sym_modifier2] = "modifier2",
  [sym_deprecated] = "deprecated",
  [aux_sym_PROGRAM_repeat1] = "PROGRAM_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_] = anon_sym_,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [sym_string] = sym_string,
  [sym_multiLineString] = sym_multiLineString,
  [sym_signature] = sym_signature,
  [sym_identifier] = sym_identifier,
  [sym_identifier_deprecated] = sym_identifier_deprecated,
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
  [sym_leftArrow] = sym_leftArrow,
  [anon_sym_eta] = anon_sym_eta,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_tau] = anon_sym_tau,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_infinity] = anon_sym_infinity,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_sign] = anon_sym_sign,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_absolutevalue] = anon_sym_absolutevalue,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_sine] = anon_sym_sine,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_ceiling] = anon_sym_ceiling,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_modulus] = anon_sym_modulus,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_power] = anon_sym_power,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_logarithm] = anon_sym_logarithm,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_minimum] = anon_sym_minimum,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_maximum] = anon_sym_maximum,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_atangent] = anon_sym_atangent,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_deshape] = anon_sym_deshape,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_transpose] = anon_sym_transpose,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_rise] = anon_sym_rise,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_fall] = anon_sym_fall,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_classify] = anon_sym_classify,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_deduplicate] = anon_sym_deduplicate,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_38] = anon_sym_38,
  [anon_sym_unbox] = anon_sym_unbox,
  [anon_sym_39] = anon_sym_39,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_40] = anon_sym_40,
  [anon_sym_couple] = anon_sym_couple,
  [anon_sym_41] = anon_sym_41,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_42] = anon_sym_42,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_43] = anon_sym_43,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_44] = anon_sym_44,
  [anon_sym_reshape] = anon_sym_reshape,
  [anon_sym_45] = anon_sym_45,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_46] = anon_sym_46,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_47] = anon_sym_47,
  [anon_sym_rotate] = anon_sym_rotate,
  [anon_sym_48] = anon_sym_48,
  [anon_sym_windows] = anon_sym_windows,
  [anon_sym_49] = anon_sym_49,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_50] = anon_sym_50,
  [anon_sym_find] = anon_sym_find,
  [anon_sym_51] = anon_sym_51,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_52] = anon_sym_52,
  [anon_sym_indexof] = anon_sym_indexof,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_recur] = anon_sym_recur,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_gen] = anon_sym_gen,
  [anon_sym_deal] = anon_sym_deal,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_sig] = anon_sym_sig,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_dump] = anon_sym_dump,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_scan] = anon_sym_scan,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_rows] = anon_sym_rows,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_dip] = anon_sym_dip,
  [anon_sym_di] = anon_sym_di,
  [anon_sym_61] = anon_sym_61,
  [anon_sym_gap] = anon_sym_gap,
  [anon_sym_ga] = anon_sym_ga,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_invert] = anon_sym_invert,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_spawn] = anon_sym_spawn,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_distribute] = anon_sym_distribute,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_cross] = anon_sym_cross,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_partition] = anon_sym_partition,
  [anon_sym_69] = anon_sym_69,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_70] = anon_sym_70,
  [anon_sym_bracket] = anon_sym_bracket,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_fork] = anon_sym_fork,
  [anon_sym_72] = anon_sym_72,
  [anon_sym_under] = anon_sym_under,
  [anon_sym_73] = anon_sym_73,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_74] = anon_sym_74,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_75] = anon_sym_75,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_76] = anon_sym_76,
  [anon_sym_77] = anon_sym_77,
  [anon_sym_78] = anon_sym_78,
  [anon_sym_79] = anon_sym_79,
  [anon_sym_80] = anon_sym_80,
  [anon_sym_81] = anon_sym_81,
  [anon_sym_82] = anon_sym_82,
  [anon_sym_roll] = anon_sym_roll,
  [anon_sym_83] = anon_sym_83,
  [anon_sym_unroll] = anon_sym_unroll,
  [anon_sym_84] = anon_sym_84,
  [anon_sym_restack] = anon_sym_restack,
  [anon_sym_85] = anon_sym_85,
  [anon_sym_86] = anon_sym_86,
  [sym__whitespace] = sym__whitespace,
  [sym__end_of_line] = sym__end_of_line,
  [sym_source_file] = sym_source_file,
  [sym_PROGRAM] = sym_PROGRAM,
  [sym_atom] = sym_atom,
  [sym_array] = sym_array,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_primitive] = sym_primitive,
  [sym_constant] = sym_constant,
  [sym_function] = sym_function,
  [sym_modifier1] = sym_modifier1,
  [sym_modifier2] = sym_modifier2,
  [sym_deprecated] = sym_deprecated,
  [aux_sym_PROGRAM_repeat1] = aux_sym_PROGRAM_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiLineString] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_deprecated] = {
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
  [sym_leftArrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_eta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolutevalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceiling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
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
  [anon_sym_15] = {
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
  [anon_sym_16] = {
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
  [anon_sym_17] = {
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
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logarithm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minimum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atangent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deshape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transpose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_33] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_34] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_35] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_36] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deduplicate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_37] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_38] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_39] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_couple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_41] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_42] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_43] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_44] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reshape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_45] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_46] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_47] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_49] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_50] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_51] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_52] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
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
  [anon_sym_55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_57] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dump] = {
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
  [anon_sym_58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_59] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_60] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_di] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ga] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spawn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cross] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_67] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_68] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_69] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_70] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bracket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fork] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_under] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_75] = {
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
  [anon_sym_76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_78] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_79] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_81] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_82] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_85] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_86] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
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
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
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
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
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
  [sym_deprecated] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_PROGRAM_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat2] = {
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
  [10] = 4,
  [11] = 4,
  [12] = 12,
  [13] = 9,
  [14] = 14,
  [15] = 5,
  [16] = 9,
  [17] = 14,
  [18] = 12,
  [19] = 8,
  [20] = 5,
  [21] = 14,
  [22] = 8,
  [23] = 7,
  [24] = 24,
  [25] = 24,
  [26] = 24,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 29,
  [31] = 29,
  [32] = 27,
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
  [49] = 33,
  [50] = 39,
  [51] = 38,
  [52] = 34,
  [53] = 42,
  [54] = 35,
  [55] = 36,
  [56] = 41,
  [57] = 57,
  [58] = 37,
  [59] = 48,
  [60] = 47,
  [61] = 46,
  [62] = 45,
  [63] = 40,
  [64] = 44,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 7,
  [69] = 39,
  [70] = 70,
  [71] = 38,
  [72] = 34,
  [73] = 73,
  [74] = 35,
  [75] = 36,
  [76] = 73,
  [77] = 37,
  [78] = 41,
  [79] = 42,
  [80] = 40,
  [81] = 44,
  [82] = 33,
  [83] = 73,
  [84] = 45,
  [85] = 46,
  [86] = 47,
  [87] = 70,
  [88] = 48,
  [89] = 89,
  [90] = 90,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 8240
    ? (c < 3204
      ? (c < 1545
        ? (c < 903
          ? (c < 182
            ? (c < 167
              ? (c < 161
                ? c == '"'
                : c <= 161)
              : (c <= 167 || c == 171))
            : (c <= 182 || (c < 191
              ? c == 187
              : (c <= 191 || c == 894))))
          : (c <= 903 || (c < 1472
            ? (c < 1417
              ? (c >= 1370 && c <= 1375)
              : (c <= 1418 || c == 1470))
            : (c <= 1472 || (c < 1478
              ? c == 1475
              : (c <= 1478 || (c >= 1523 && c <= 1524)))))))
        : (c <= 1546 || (c < 2096
          ? (c < 1642
            ? (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))
            : (c <= 1645 || (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))
            : (c <= 2557 || (c < 2800
              ? c == 2678
              : (c <= 2800 || c == 3191))))))))
      : (c <= 3204 || (c < 5941
        ? (c < 4057
          ? (c < 3860
            ? (c < 3674
              ? (c < 3663
                ? c == 3572
                : c <= 3663)
              : (c <= 3675 || (c >= 3844 && c <= 3858)))
            : (c <= 3860 || (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))))
          : (c <= 4058 || (c < 5120
            ? (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))
            : (c <= 5120 || (c < 5787
              ? c == 5742
              : (c <= 5788 || (c >= 5867 && c <= 5869)))))))
        : (c <= 5942 || (c < 7002
          ? (c < 6468
            ? (c < 6104
              ? (c >= 6100 && c <= 6102)
              : (c <= 6106 || (c >= 6144 && c <= 6154)))
            : (c <= 6469 || (c < 6816
              ? (c >= 6686 && c <= 6687)
              : (c <= 6822 || (c >= 6824 && c <= 6829)))))
          : (c <= 7008 || (c < 7294
            ? (c < 7164
              ? (c >= 7037 && c <= 7038)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43256
      ? (c < 11824
        ? (c < 10214
          ? (c < 8969
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8262 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11513
            ? (c < 10712
              ? (c >= 10627 && c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 12539
          ? (c < 12308
            ? (c < 12289
              ? (c >= 11858 && c <= 11869)
              : (c <= 12291 || (c >= 12296 && c <= 12305)))
            : (c <= 12319 || (c < 12349
              ? c == 12336
              : (c <= 12349 || c == 12448))))
          : (c <= 12539 || (c < 42622
            ? (c < 42509
              ? (c >= 42238 && c <= 42239)
              : (c <= 42511 || c == 42611))
            : (c <= 42622 || (c < 43124
              ? (c >= 42738 && c <= 42743)
              : (c <= 43127 || (c >= 43214 && c <= 43215)))))))))
      : (c <= 43258 || (c < 65281
        ? (c < 44011
          ? (c < 43486
            ? (c < 43359
              ? (c < 43310
                ? c == 43260
                : c <= 43311)
              : (c <= 43359 || (c >= 43457 && c <= 43469)))
            : (c <= 43487 || (c < 43742
              ? (c >= 43612 && c <= 43615)
              : (c <= 43743 || (c >= 43760 && c <= 43761)))))
          : (c <= 44011 || (c < 65108
            ? (c < 65040
              ? (c >= 64830 && c <= 64831)
              : (c <= 65049 || (c >= 65072 && c <= 65106)))
            : (c <= 65121 || (c < 65128
              ? c == 65123
              : (c <= 65128 || (c >= 65130 && c <= 65131)))))))
        : (c <= 65283 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c >= 65285 && c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 8240
    ? (c < 3204
      ? (c < 1523
        ? (c < 894
          ? (c < 171
            ? (c < 161
              ? (c < '}'
                ? (c >= '"' && c <= ']')
                : c <= '}')
              : (c <= 161 || c == 167))
            : (c <= 171 || (c < 187
              ? c == 182
              : (c <= 187 || c == 191))))
          : (c <= 894 || (c < 1470
            ? (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))
            : (c <= 1470 || (c < 1475
              ? c == 1472
              : (c <= 1475 || c == 1478))))))
        : (c <= 1524 || (c < 2096
          ? (c < 1642
            ? (c < 1563
              ? (c < 1548
                ? (c >= 1545 && c <= 1546)
                : c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))
            : (c <= 1645 || (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))
            : (c <= 2557 || (c < 2800
              ? c == 2678
              : (c <= 2800 || c == 3191))))))))
      : (c <= 3204 || (c < 5941
        ? (c < 4057
          ? (c < 3860
            ? (c < 3674
              ? (c < 3663
                ? c == 3572
                : c <= 3663)
              : (c <= 3675 || (c >= 3844 && c <= 3858)))
            : (c <= 3860 || (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))))
          : (c <= 4058 || (c < 5120
            ? (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))
            : (c <= 5120 || (c < 5787
              ? c == 5742
              : (c <= 5788 || (c >= 5867 && c <= 5869)))))))
        : (c <= 5942 || (c < 7002
          ? (c < 6468
            ? (c < 6104
              ? (c >= 6100 && c <= 6102)
              : (c <= 6106 || (c >= 6144 && c <= 6154)))
            : (c <= 6469 || (c < 6816
              ? (c >= 6686 && c <= 6687)
              : (c <= 6822 || (c >= 6824 && c <= 6829)))))
          : (c <= 7008 || (c < 7294
            ? (c < 7164
              ? (c >= 7037 && c <= 7038)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43256
      ? (c < 11824
        ? (c < 10214
          ? (c < 8969
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8262 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11513
            ? (c < 10712
              ? (c >= 10627 && c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 12539
          ? (c < 12308
            ? (c < 12289
              ? (c >= 11858 && c <= 11869)
              : (c <= 12291 || (c >= 12296 && c <= 12305)))
            : (c <= 12319 || (c < 12349
              ? c == 12336
              : (c <= 12349 || c == 12448))))
          : (c <= 12539 || (c < 42622
            ? (c < 42509
              ? (c >= 42238 && c <= 42239)
              : (c <= 42511 || c == 42611))
            : (c <= 42622 || (c < 43124
              ? (c >= 42738 && c <= 42743)
              : (c <= 43127 || (c >= 43214 && c <= 43215)))))))))
      : (c <= 43258 || (c < 65281
        ? (c < 44011
          ? (c < 43486
            ? (c < 43359
              ? (c < 43310
                ? c == 43260
                : c <= 43311)
              : (c <= 43359 || (c >= 43457 && c <= 43469)))
            : (c <= 43487 || (c < 43742
              ? (c >= 43612 && c <= 43615)
              : (c <= 43743 || (c >= 43760 && c <= 43761)))))
          : (c <= 44011 || (c < 65108
            ? (c < 65040
              ? (c >= 64830 && c <= 64831)
              : (c <= 65049 || (c >= 65072 && c <= 65106)))
            : (c <= 65121 || (c < 65128
              ? c == 65123
              : (c <= 65128 || (c >= 65130 && c <= 65131)))))))
        : (c <= 65283 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c >= 65285 && c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 8240
    ? (c < 3204
      ? (c < 1523
        ? (c < 894
          ? (c < 171
            ? (c < 161
              ? (c < '_'
                ? (c >= '"' && c <= ']')
                : c <= '}')
              : (c <= 161 || c == 167))
            : (c <= 171 || (c < 187
              ? c == 182
              : (c <= 187 || c == 191))))
          : (c <= 894 || (c < 1470
            ? (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))
            : (c <= 1470 || (c < 1475
              ? c == 1472
              : (c <= 1475 || c == 1478))))))
        : (c <= 1524 || (c < 2096
          ? (c < 1642
            ? (c < 1563
              ? (c < 1548
                ? (c >= 1545 && c <= 1546)
                : c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))
            : (c <= 1645 || (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))
            : (c <= 2557 || (c < 2800
              ? c == 2678
              : (c <= 2800 || c == 3191))))))))
      : (c <= 3204 || (c < 5941
        ? (c < 4057
          ? (c < 3860
            ? (c < 3674
              ? (c < 3663
                ? c == 3572
                : c <= 3663)
              : (c <= 3675 || (c >= 3844 && c <= 3858)))
            : (c <= 3860 || (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))))
          : (c <= 4058 || (c < 5120
            ? (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))
            : (c <= 5120 || (c < 5787
              ? c == 5742
              : (c <= 5788 || (c >= 5867 && c <= 5869)))))))
        : (c <= 5942 || (c < 7002
          ? (c < 6468
            ? (c < 6104
              ? (c >= 6100 && c <= 6102)
              : (c <= 6106 || (c >= 6144 && c <= 6154)))
            : (c <= 6469 || (c < 6816
              ? (c >= 6686 && c <= 6687)
              : (c <= 6822 || (c >= 6824 && c <= 6829)))))
          : (c <= 7008 || (c < 7294
            ? (c < 7164
              ? (c >= 7037 && c <= 7038)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43256
      ? (c < 11824
        ? (c < 10214
          ? (c < 8969
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8262 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11513
            ? (c < 10712
              ? (c >= 10627 && c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 12539
          ? (c < 12308
            ? (c < 12289
              ? (c >= 11858 && c <= 11869)
              : (c <= 12291 || (c >= 12296 && c <= 12305)))
            : (c <= 12319 || (c < 12349
              ? c == 12336
              : (c <= 12349 || c == 12448))))
          : (c <= 12539 || (c < 42622
            ? (c < 42509
              ? (c >= 42238 && c <= 42239)
              : (c <= 42511 || c == 42611))
            : (c <= 42622 || (c < 43124
              ? (c >= 42738 && c <= 42743)
              : (c <= 43127 || (c >= 43214 && c <= 43215)))))))))
      : (c <= 43258 || (c < 65281
        ? (c < 44011
          ? (c < 43486
            ? (c < 43359
              ? (c < 43310
                ? c == 43260
                : c <= 43311)
              : (c <= 43359 || (c >= 43457 && c <= 43469)))
            : (c <= 43487 || (c < 43742
              ? (c >= 43612 && c <= 43615)
              : (c <= 43743 || (c >= 43760 && c <= 43761)))))
          : (c <= 44011 || (c < 65108
            ? (c < 65040
              ? (c >= 64830 && c <= 64831)
              : (c <= 65049 || (c >= 65072 && c <= 65106)))
            : (c <= 65121 || (c < 65128
              ? c == 65123
              : (c <= 65128 || (c >= 65130 && c <= 65131)))))))
        : (c <= 65283 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c >= 65285 && c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 8240
    ? (c < 3204
      ? (c < 1523
        ? (c < 894
          ? (c < 171
            ? (c < 161
              ? (c < '_'
                ? (c >= '"' && c <= ')')
                : c <= '}')
              : (c <= 161 || c == 167))
            : (c <= 171 || (c < 187
              ? c == 182
              : (c <= 187 || c == 191))))
          : (c <= 894 || (c < 1470
            ? (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))
            : (c <= 1470 || (c < 1475
              ? c == 1472
              : (c <= 1475 || c == 1478))))))
        : (c <= 1524 || (c < 2096
          ? (c < 1642
            ? (c < 1563
              ? (c < 1548
                ? (c >= 1545 && c <= 1546)
                : c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))
            : (c <= 1645 || (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))
            : (c <= 2557 || (c < 2800
              ? c == 2678
              : (c <= 2800 || c == 3191))))))))
      : (c <= 3204 || (c < 5941
        ? (c < 4057
          ? (c < 3860
            ? (c < 3674
              ? (c < 3663
                ? c == 3572
                : c <= 3663)
              : (c <= 3675 || (c >= 3844 && c <= 3858)))
            : (c <= 3860 || (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))))
          : (c <= 4058 || (c < 5120
            ? (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))
            : (c <= 5120 || (c < 5787
              ? c == 5742
              : (c <= 5788 || (c >= 5867 && c <= 5869)))))))
        : (c <= 5942 || (c < 7002
          ? (c < 6468
            ? (c < 6104
              ? (c >= 6100 && c <= 6102)
              : (c <= 6106 || (c >= 6144 && c <= 6154)))
            : (c <= 6469 || (c < 6816
              ? (c >= 6686 && c <= 6687)
              : (c <= 6822 || (c >= 6824 && c <= 6829)))))
          : (c <= 7008 || (c < 7294
            ? (c < 7164
              ? (c >= 7037 && c <= 7038)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43256
      ? (c < 11824
        ? (c < 10214
          ? (c < 8969
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8262 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11513
            ? (c < 10712
              ? (c >= 10627 && c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 12539
          ? (c < 12308
            ? (c < 12289
              ? (c >= 11858 && c <= 11869)
              : (c <= 12291 || (c >= 12296 && c <= 12305)))
            : (c <= 12319 || (c < 12349
              ? c == 12336
              : (c <= 12349 || c == 12448))))
          : (c <= 12539 || (c < 42622
            ? (c < 42509
              ? (c >= 42238 && c <= 42239)
              : (c <= 42511 || c == 42611))
            : (c <= 42622 || (c < 43124
              ? (c >= 42738 && c <= 42743)
              : (c <= 43127 || (c >= 43214 && c <= 43215)))))))))
      : (c <= 43258 || (c < 65281
        ? (c < 44011
          ? (c < 43486
            ? (c < 43359
              ? (c < 43310
                ? c == 43260
                : c <= 43311)
              : (c <= 43359 || (c >= 43457 && c <= 43469)))
            : (c <= 43487 || (c < 43742
              ? (c >= 43612 && c <= 43615)
              : (c <= 43743 || (c >= 43760 && c <= 43761)))))
          : (c <= 44011 || (c < 65108
            ? (c < 65040
              ? (c >= 64830 && c <= 64831)
              : (c <= 65049 || (c >= 65072 && c <= 65106)))
            : (c <= 65121 || (c < 65128
              ? c == 65123
              : (c <= 65128 || (c >= 65130 && c <= 65131)))))))
        : (c <= 65283 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c >= 65285 && c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 8240
    ? (c < 3204
      ? (c < 1523
        ? (c < 894
          ? (c < 171
            ? (c < 161
              ? (c < '_'
                ? (c >= '"' && c <= ']')
                : c <= '_')
              : (c <= 161 || c == 167))
            : (c <= 171 || (c < 187
              ? c == 182
              : (c <= 187 || c == 191))))
          : (c <= 894 || (c < 1470
            ? (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))
            : (c <= 1470 || (c < 1475
              ? c == 1472
              : (c <= 1475 || c == 1478))))))
        : (c <= 1524 || (c < 2096
          ? (c < 1642
            ? (c < 1563
              ? (c < 1548
                ? (c >= 1545 && c <= 1546)
                : c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))
            : (c <= 1645 || (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))
            : (c <= 2557 || (c < 2800
              ? c == 2678
              : (c <= 2800 || c == 3191))))))))
      : (c <= 3204 || (c < 5941
        ? (c < 4057
          ? (c < 3860
            ? (c < 3674
              ? (c < 3663
                ? c == 3572
                : c <= 3663)
              : (c <= 3675 || (c >= 3844 && c <= 3858)))
            : (c <= 3860 || (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))))
          : (c <= 4058 || (c < 5120
            ? (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))
            : (c <= 5120 || (c < 5787
              ? c == 5742
              : (c <= 5788 || (c >= 5867 && c <= 5869)))))))
        : (c <= 5942 || (c < 7002
          ? (c < 6468
            ? (c < 6104
              ? (c >= 6100 && c <= 6102)
              : (c <= 6106 || (c >= 6144 && c <= 6154)))
            : (c <= 6469 || (c < 6816
              ? (c >= 6686 && c <= 6687)
              : (c <= 6822 || (c >= 6824 && c <= 6829)))))
          : (c <= 7008 || (c < 7294
            ? (c < 7164
              ? (c >= 7037 && c <= 7038)
              : (c <= 7167 || (c >= 7227 && c <= 7231)))
            : (c <= 7295 || (c < 7379
              ? (c >= 7360 && c <= 7367)
              : (c <= 7379 || (c >= 8208 && c <= 8231)))))))))))
    : (c <= 8259 || (c < 43256
      ? (c < 11824
        ? (c < 10214
          ? (c < 8969
            ? (c < 8317
              ? (c < 8275
                ? (c >= 8262 && c <= 8273)
                : c <= 8286)
              : (c <= 8318 || (c >= 8333 && c <= 8334)))
            : (c <= 8971 || (c < 10088
              ? (c >= 9001 && c <= 9002)
              : (c <= 10101 || (c >= 10181 && c <= 10182)))))
          : (c <= 10223 || (c < 11513
            ? (c < 10712
              ? (c >= 10627 && c <= 10648)
              : (c <= 10715 || (c >= 10748 && c <= 10749)))
            : (c <= 11516 || (c < 11632
              ? (c >= 11518 && c <= 11519)
              : (c <= 11632 || (c >= 11776 && c <= 11822)))))))
        : (c <= 11855 || (c < 12539
          ? (c < 12308
            ? (c < 12289
              ? (c >= 11858 && c <= 11869)
              : (c <= 12291 || (c >= 12296 && c <= 12305)))
            : (c <= 12319 || (c < 12349
              ? c == 12336
              : (c <= 12349 || c == 12448))))
          : (c <= 12539 || (c < 42622
            ? (c < 42509
              ? (c >= 42238 && c <= 42239)
              : (c <= 42511 || c == 42611))
            : (c <= 42622 || (c < 43124
              ? (c >= 42738 && c <= 42743)
              : (c <= 43127 || (c >= 43214 && c <= 43215)))))))))
      : (c <= 43258 || (c < 65281
        ? (c < 44011
          ? (c < 43486
            ? (c < 43359
              ? (c < 43310
                ? c == 43260
                : c <= 43311)
              : (c <= 43359 || (c >= 43457 && c <= 43469)))
            : (c <= 43487 || (c < 43742
              ? (c >= 43612 && c <= 43615)
              : (c <= 43743 || (c >= 43760 && c <= 43761)))))
          : (c <= 44011 || (c < 65108
            ? (c < 65040
              ? (c >= 64830 && c <= 64831)
              : (c <= 65049 || (c >= 65072 && c <= 65106)))
            : (c <= 65121 || (c < 65128
              ? c == 65123
              : (c <= 65128 || (c >= 65130 && c <= 65131)))))))
        : (c <= 65283 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c >= 65285 && c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 951) ADVANCE(340);
      if (lookahead == 960) ADVANCE(344);
      if (lookahead == 964) ADVANCE(347);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8592) ADVANCE(337);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8734) ADVANCE(349);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(537);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 951) ADVANCE(340);
      if (lookahead == 960) ADVANCE(344);
      if (lookahead == 964) ADVANCE(347);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8734) ADVANCE(349);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'n' ||
          lookahead == 't') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(455);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(461);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(533);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 142:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 144:
      if (lookahead == 'x') ADVANCE(427);
      END_STATE();
    case 145:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 149:
      if (lookahead == 175) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 155:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 951) ADVANCE(340);
      if (lookahead == 960) ADVANCE(344);
      if (lookahead == 964) ADVANCE(347);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8592) ADVANCE(337);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8734) ADVANCE(349);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 156:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8592) ADVANCE(337);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(173);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(460);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(387);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(476);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(353);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '~') ADVANCE(473);
      if (lookahead == 172) ADVANCE(358);
      if (lookahead == 175) ADVANCE(161);
      if (lookahead == 177) ADVANCE(360);
      if (lookahead == 183) ADVANCE(526);
      if (lookahead == 215) ADVANCE(386);
      if (lookahead == 247) ADVANCE(388);
      if (lookahead == 8261) ADVANCE(373);
      if (lookahead == 8319) ADVANCE(392);
      if (lookahead == 8345) ADVANCE(394);
      if (lookahead == 8592) ADVANCE(337);
      if (lookahead == 8594) ADVANCE(524);
      if (lookahead == 8600) ADVANCE(444);
      if (lookahead == 8601) ADVANCE(442);
      if (lookahead == 8613) ADVANCE(398);
      if (lookahead == 8615) ADVANCE(396);
      if (lookahead == 8620) ADVANCE(464);
      if (lookahead == 8623) ADVANCE(440);
      if (lookahead == 8624) ADVANCE(535);
      if (lookahead == 8630) ADVANCE(532);
      if (lookahead == 8631) ADVANCE(530);
      if (lookahead == 8635) ADVANCE(446);
      if (lookahead == 8652) ADVANCE(410);
      if (lookahead == 8673) ADVANCE(406);
      if (lookahead == 8693) ADVANCE(534);
      if (lookahead == 8714) ADVANCE(454);
      if (lookahead == 8728) ADVANCE(356);
      if (lookahead == 8730) ADVANCE(365);
      if (lookahead == 8736) ADVANCE(400);
      if (lookahead == 8743) ADVANCE(495);
      if (lookahead == 8745) ADVANCE(507);
      if (lookahead == 8757) ADVANCE(480);
      if (lookahead == 8759) ADVANCE(525);
      if (lookahead == 8762) ADVANCE(497);
      if (lookahead == 8773) ADVANCE(430);
      if (lookahead == 8800) ADVANCE(376);
      if (lookahead == 8801) ADVANCE(482);
      if (lookahead == 8804) ADVANCE(379);
      if (lookahead == 8805) ADVANCE(382);
      if (lookahead == 8834) ADVANCE(434);
      if (lookahead == 8835) ADVANCE(511);
      if (lookahead == 8847) ADVANCE(436);
      if (lookahead == 8851) ADVANCE(509);
      if (lookahead == 8852) ADVANCE(428);
      if (lookahead == 8853) ADVANCE(503);
      if (lookahead == 8855) ADVANCE(456);
      if (lookahead == 8857) ADVANCE(487);
      if (lookahead == 8859) ADVANCE(422);
      if (lookahead == 8860) ADVANCE(505);
      if (lookahead == 8861) ADVANCE(424);
      if (lookahead == 8862) ADVANCE(499);
      if (lookahead == 8863) ADVANCE(432);
      if (lookahead == 8864) ADVANCE(501);
      if (lookahead == 8865) ADVANCE(438);
      if (lookahead == 8866) ADVANCE(408);
      if (lookahead == 8901) ADVANCE(490);
      if (lookahead == 8943) ADVANCE(414);
      if (lookahead == 8962) ADVANCE(528);
      if (lookahead == 8968) ADVANCE(371);
      if (lookahead == 8970) ADVANCE(369);
      if (lookahead == 8981) ADVANCE(452);
      if (lookahead == 9013) ADVANCE(363);
      if (lookahead == 9033) ADVANCE(416);
      if (lookahead == 9039) ADVANCE(418);
      if (lookahead == 9046) ADVANCE(420);
      if (lookahead == 9048) ADVANCE(492);
      if (lookahead == 9050) ADVANCE(515);
      if (lookahead == 9051) ADVANCE(527);
      if (lookahead == 9052) ADVANCE(513);
      if (lookahead == 9059) ADVANCE(522);
      if (lookahead == 9060) ADVANCE(458);
      if (lookahead == 9061) ADVANCE(484);
      if (lookahead == 9099) ADVANCE(462);
      if (lookahead == 9633) ADVANCE(426);
      if (lookahead == 9651) ADVANCE(404);
      if (lookahead == 9661) ADVANCE(450);
      if (lookahead == 9675) ADVANCE(367);
      if (lookahead == 9707) ADVANCE(448);
      if (lookahead == 9727) ADVANCE(390);
      if (lookahead == 9837) ADVANCE(412);
      if (lookahead == 9858) ADVANCE(466);
      if (lookahead == 10085) ADVANCE(523);
      if (lookahead == 10747) ADVANCE(402);
      if (lookahead == 11034) ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(173);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 951) ADVANCE(339);
      if (lookahead == 960) ADVANCE(343);
      if (lookahead == 964) ADVANCE(346);
      if (lookahead == 8734) ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 951 ||
          lookahead == 960 ||
          lookahead == 964) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '0') ADVANCE(116);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_multiLineString);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_signature);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_signature);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 't') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 's') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 'v') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'q') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'v') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'w') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 's') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 't') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'v') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'x') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'h') ADVANCE(506);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'h') ADVANCE(479);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'k') ADVANCE(510);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'k') ADVANCE(437);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier_deprecated);
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_system);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_openParen);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_closeParen);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_openCurly);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_closeCurly);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_openBracket);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_closeBracket);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_bar);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_leftArrow);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_eta);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_pi);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'c') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_tau);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_infinity);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_sign);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_absolutevalue);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_sine);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ceiling);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_modulus);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_logarithm);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_minimum);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_maximum);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_atangent);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_first);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_deshape);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_transpose);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_rise);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_fall);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_classify);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_deduplicate);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_unbox);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_couple);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_44);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_reshape);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_take);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_rotate);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_windows);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_find);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_indexof);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_55);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_recur);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_deal);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_dump);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_scan);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_rows);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_dip);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_di);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 's') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_gap);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ga);
      if (lookahead == 'p') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_invert);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_spawn);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_distribute);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_partition);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bracket);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_fork);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_under);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_82);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_83);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_unroll);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_84);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_restack);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_85);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_86);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 157},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 155},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 157},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 157},
  [27] = {.lex_state = 157},
  [28] = {.lex_state = 157},
  [29] = {.lex_state = 157},
  [30] = {.lex_state = 157},
  [31] = {.lex_state = 157},
  [32] = {.lex_state = 157},
  [33] = {.lex_state = 156},
  [34] = {.lex_state = 156},
  [35] = {.lex_state = 156},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 156},
  [38] = {.lex_state = 156},
  [39] = {.lex_state = 156},
  [40] = {.lex_state = 156},
  [41] = {.lex_state = 156},
  [42] = {.lex_state = 156},
  [43] = {.lex_state = 156},
  [44] = {.lex_state = 156},
  [45] = {.lex_state = 156},
  [46] = {.lex_state = 156},
  [47] = {.lex_state = 156},
  [48] = {.lex_state = 156},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 157},
  [68] = {.lex_state = 158},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 158},
  [71] = {.lex_state = 158},
  [72] = {.lex_state = 158},
  [73] = {.lex_state = 158},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 158},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 158},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 158},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [sym_multiLineString] = ACTIONS(1),
    [sym_signature] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_identifier_deprecated] = ACTIONS(1),
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
    [sym_leftArrow] = ACTIONS(1),
    [anon_sym_eta] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_tau] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_infinity] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_sign] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_absolutevalue] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_sine] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_ceiling] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_modulus] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_power] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_logarithm] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_minimum] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_maximum] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_atangent] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_deshape] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_transpose] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_rise] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_fall] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_classify] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_deduplicate] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
    [anon_sym_unbox] = ACTIONS(1),
    [anon_sym_39] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_40] = ACTIONS(1),
    [anon_sym_couple] = ACTIONS(1),
    [anon_sym_41] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_42] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_43] = ACTIONS(1),
    [anon_sym_pick] = ACTIONS(1),
    [anon_sym_44] = ACTIONS(1),
    [anon_sym_reshape] = ACTIONS(1),
    [anon_sym_45] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_46] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_47] = ACTIONS(1),
    [anon_sym_rotate] = ACTIONS(1),
    [anon_sym_48] = ACTIONS(1),
    [anon_sym_windows] = ACTIONS(1),
    [anon_sym_49] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_50] = ACTIONS(1),
    [anon_sym_find] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_indexof] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_recur] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_deal] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_dump] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_scan] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_rows] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_dip] = ACTIONS(1),
    [anon_sym_di] = ACTIONS(1),
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_gap] = ACTIONS(1),
    [anon_sym_ga] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_invert] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_spawn] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_distribute] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_cross] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_partition] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_bracket] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_fork] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
    [anon_sym_under] = ACTIONS(1),
    [anon_sym_73] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_74] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_75] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_76] = ACTIONS(1),
    [anon_sym_77] = ACTIONS(1),
    [anon_sym_78] = ACTIONS(1),
    [anon_sym_79] = ACTIONS(1),
    [anon_sym_80] = ACTIONS(1),
    [anon_sym_81] = ACTIONS(1),
    [anon_sym_82] = ACTIONS(1),
    [anon_sym_roll] = ACTIONS(1),
    [anon_sym_83] = ACTIONS(1),
    [anon_sym_unroll] = ACTIONS(1),
    [anon_sym_84] = ACTIONS(1),
    [anon_sym_restack] = ACTIONS(1),
    [anon_sym_85] = ACTIONS(1),
    [anon_sym_86] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_PROGRAM] = STATE(89),
    [sym_atom] = STATE(43),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_primitive] = STATE(47),
    [sym_function] = STATE(42),
    [sym_modifier1] = STATE(42),
    [sym_modifier2] = STATE(42),
    [sym_deprecated] = STATE(42),
    [aux_sym_PROGRAM_repeat1] = STATE(3),
    [aux_sym_array_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(11),
    [aux_sym_character_token1] = ACTIONS(13),
    [sym_multiLineString] = ACTIONS(15),
    [sym_signature] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_identifier_deprecated] = ACTIONS(17),
    [sym_system] = ACTIONS(15),
    [sym_comment] = ACTIONS(19),
    [sym_openParen] = ACTIONS(21),
    [sym_openCurly] = ACTIONS(23),
    [sym_openBracket] = ACTIONS(25),
    [sym_leftArrow] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_identity] = ACTIONS(29),
    [anon_sym_id] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_sign] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_absolutevalue] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_sqrt] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(29),
    [anon_sym_sine] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(29),
    [anon_sym_floor] = ACTIONS(29),
    [anon_sym_12] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_13] = ACTIONS(29),
    [anon_sym_round] = ACTIONS(29),
    [anon_sym_14] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_15] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_16] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_17] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_18] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_19] = ACTIONS(29),
    [anon_sym_modulus] = ACTIONS(29),
    [anon_sym_20] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_21] = ACTIONS(29),
    [anon_sym_logarithm] = ACTIONS(29),
    [anon_sym_22] = ACTIONS(29),
    [anon_sym_minimum] = ACTIONS(29),
    [anon_sym_23] = ACTIONS(29),
    [anon_sym_maximum] = ACTIONS(29),
    [anon_sym_24] = ACTIONS(29),
    [anon_sym_atangent] = ACTIONS(29),
    [anon_sym_25] = ACTIONS(29),
    [anon_sym_length] = ACTIONS(29),
    [anon_sym_26] = ACTIONS(29),
    [anon_sym_shape] = ACTIONS(29),
    [anon_sym_27] = ACTIONS(29),
    [anon_sym_range] = ACTIONS(29),
    [anon_sym_28] = ACTIONS(29),
    [anon_sym_first] = ACTIONS(29),
    [anon_sym_29] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_30] = ACTIONS(29),
    [anon_sym_deshape] = ACTIONS(29),
    [anon_sym_31] = ACTIONS(29),
    [anon_sym_bits] = ACTIONS(29),
    [anon_sym_32] = ACTIONS(29),
    [anon_sym_transpose] = ACTIONS(29),
    [anon_sym_33] = ACTIONS(29),
    [anon_sym_rise] = ACTIONS(29),
    [anon_sym_34] = ACTIONS(29),
    [anon_sym_fall] = ACTIONS(29),
    [anon_sym_35] = ACTIONS(29),
    [anon_sym_classify] = ACTIONS(29),
    [anon_sym_36] = ACTIONS(29),
    [anon_sym_deduplicate] = ACTIONS(29),
    [anon_sym_37] = ACTIONS(29),
    [anon_sym_box] = ACTIONS(29),
    [anon_sym_38] = ACTIONS(29),
    [anon_sym_unbox] = ACTIONS(29),
    [anon_sym_39] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_40] = ACTIONS(29),
    [anon_sym_couple] = ACTIONS(29),
    [anon_sym_41] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(29),
    [anon_sym_42] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_43] = ACTIONS(29),
    [anon_sym_pick] = ACTIONS(29),
    [anon_sym_44] = ACTIONS(29),
    [anon_sym_reshape] = ACTIONS(29),
    [anon_sym_45] = ACTIONS(29),
    [anon_sym_take] = ACTIONS(29),
    [anon_sym_46] = ACTIONS(29),
    [anon_sym_drop] = ACTIONS(29),
    [anon_sym_47] = ACTIONS(29),
    [anon_sym_rotate] = ACTIONS(29),
    [anon_sym_48] = ACTIONS(29),
    [anon_sym_windows] = ACTIONS(29),
    [anon_sym_49] = ACTIONS(29),
    [anon_sym_keep] = ACTIONS(29),
    [anon_sym_50] = ACTIONS(29),
    [anon_sym_find] = ACTIONS(29),
    [anon_sym_51] = ACTIONS(29),
    [anon_sym_member] = ACTIONS(29),
    [anon_sym_52] = ACTIONS(29),
    [anon_sym_indexof] = ACTIONS(29),
    [anon_sym_53] = ACTIONS(29),
    [anon_sym_assert] = ACTIONS(29),
    [anon_sym_54] = ACTIONS(29),
    [anon_sym_wait] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_55] = ACTIONS(29),
    [anon_sym_recur] = ACTIONS(29),
    [anon_sym_56] = ACTIONS(29),
    [anon_sym_random] = ACTIONS(29),
    [anon_sym_57] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_deal] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_tag] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_sig] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_dump] = ACTIONS(29),
    [anon_sym_reduce] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_scan] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_each] = ACTIONS(33),
    [anon_sym_58] = ACTIONS(33),
    [anon_sym_rows] = ACTIONS(33),
    [anon_sym_59] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(33),
    [anon_sym_60] = ACTIONS(33),
    [anon_sym_dip] = ACTIONS(33),
    [anon_sym_di] = ACTIONS(35),
    [anon_sym_61] = ACTIONS(33),
    [anon_sym_gap] = ACTIONS(33),
    [anon_sym_ga] = ACTIONS(35),
    [anon_sym_62] = ACTIONS(33),
    [anon_sym_invert] = ACTIONS(33),
    [anon_sym_63] = ACTIONS(33),
    [anon_sym_spawn] = ACTIONS(33),
    [anon_sym_fold] = ACTIONS(37),
    [anon_sym_64] = ACTIONS(37),
    [anon_sym_distribute] = ACTIONS(37),
    [anon_sym_65] = ACTIONS(37),
    [anon_sym_table] = ACTIONS(37),
    [anon_sym_66] = ACTIONS(37),
    [anon_sym_cross] = ACTIONS(37),
    [anon_sym_67] = ACTIONS(37),
    [anon_sym_group] = ACTIONS(37),
    [anon_sym_68] = ACTIONS(37),
    [anon_sym_partition] = ACTIONS(37),
    [anon_sym_69] = ACTIONS(37),
    [anon_sym_both] = ACTIONS(37),
    [anon_sym_70] = ACTIONS(37),
    [anon_sym_bracket] = ACTIONS(37),
    [anon_sym_71] = ACTIONS(37),
    [anon_sym_fork] = ACTIONS(37),
    [anon_sym_72] = ACTIONS(37),
    [anon_sym_under] = ACTIONS(37),
    [anon_sym_73] = ACTIONS(37),
    [anon_sym_level] = ACTIONS(37),
    [anon_sym_74] = ACTIONS(37),
    [anon_sym_fill] = ACTIONS(37),
    [anon_sym_75] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(37),
    [anon_sym_76] = ACTIONS(37),
    [anon_sym_77] = ACTIONS(39),
    [anon_sym_78] = ACTIONS(39),
    [anon_sym_79] = ACTIONS(39),
    [anon_sym_80] = ACTIONS(39),
    [anon_sym_81] = ACTIONS(39),
    [anon_sym_82] = ACTIONS(39),
    [anon_sym_roll] = ACTIONS(39),
    [anon_sym_83] = ACTIONS(39),
    [anon_sym_unroll] = ACTIONS(39),
    [anon_sym_84] = ACTIONS(39),
    [anon_sym_restack] = ACTIONS(39),
    [anon_sym_85] = ACTIONS(39),
    [anon_sym_86] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(27),
  },
  [2] = {
    [sym_atom] = STATE(43),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_primitive] = STATE(47),
    [sym_function] = STATE(42),
    [sym_modifier1] = STATE(42),
    [sym_modifier2] = STATE(42),
    [sym_deprecated] = STATE(42),
    [aux_sym_PROGRAM_repeat1] = STATE(2),
    [aux_sym_array_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(43),
    [anon_sym_] = ACTIONS(46),
    [aux_sym_number_token1] = ACTIONS(49),
    [aux_sym_character_token1] = ACTIONS(52),
    [sym_multiLineString] = ACTIONS(55),
    [sym_signature] = ACTIONS(55),
    [sym_identifier] = ACTIONS(58),
    [sym_identifier_deprecated] = ACTIONS(58),
    [sym_system] = ACTIONS(55),
    [sym_comment] = ACTIONS(61),
    [sym_openParen] = ACTIONS(64),
    [sym_openCurly] = ACTIONS(67),
    [sym_openBracket] = ACTIONS(70),
    [sym_leftArrow] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_identity] = ACTIONS(76),
    [anon_sym_id] = ACTIONS(79),
    [anon_sym_6] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(76),
    [anon_sym_sign] = ACTIONS(76),
    [anon_sym_8] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_absolutevalue] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(76),
    [anon_sym_sqrt] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(76),
    [anon_sym_sine] = ACTIONS(76),
    [anon_sym_11] = ACTIONS(76),
    [anon_sym_floor] = ACTIONS(76),
    [anon_sym_12] = ACTIONS(76),
    [anon_sym_ceiling] = ACTIONS(76),
    [anon_sym_13] = ACTIONS(76),
    [anon_sym_round] = ACTIONS(76),
    [anon_sym_14] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_BANG_EQ] = ACTIONS(76),
    [anon_sym_15] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [anon_sym_16] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [anon_sym_17] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_18] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_19] = ACTIONS(76),
    [anon_sym_modulus] = ACTIONS(76),
    [anon_sym_20] = ACTIONS(76),
    [anon_sym_power] = ACTIONS(76),
    [anon_sym_21] = ACTIONS(76),
    [anon_sym_logarithm] = ACTIONS(76),
    [anon_sym_22] = ACTIONS(76),
    [anon_sym_minimum] = ACTIONS(76),
    [anon_sym_23] = ACTIONS(76),
    [anon_sym_maximum] = ACTIONS(76),
    [anon_sym_24] = ACTIONS(76),
    [anon_sym_atangent] = ACTIONS(76),
    [anon_sym_25] = ACTIONS(76),
    [anon_sym_length] = ACTIONS(76),
    [anon_sym_26] = ACTIONS(76),
    [anon_sym_shape] = ACTIONS(76),
    [anon_sym_27] = ACTIONS(76),
    [anon_sym_range] = ACTIONS(76),
    [anon_sym_28] = ACTIONS(76),
    [anon_sym_first] = ACTIONS(76),
    [anon_sym_29] = ACTIONS(76),
    [anon_sym_reverse] = ACTIONS(76),
    [anon_sym_30] = ACTIONS(76),
    [anon_sym_deshape] = ACTIONS(76),
    [anon_sym_31] = ACTIONS(76),
    [anon_sym_bits] = ACTIONS(76),
    [anon_sym_32] = ACTIONS(76),
    [anon_sym_transpose] = ACTIONS(76),
    [anon_sym_33] = ACTIONS(76),
    [anon_sym_rise] = ACTIONS(76),
    [anon_sym_34] = ACTIONS(76),
    [anon_sym_fall] = ACTIONS(76),
    [anon_sym_35] = ACTIONS(76),
    [anon_sym_classify] = ACTIONS(76),
    [anon_sym_36] = ACTIONS(76),
    [anon_sym_deduplicate] = ACTIONS(76),
    [anon_sym_37] = ACTIONS(76),
    [anon_sym_box] = ACTIONS(76),
    [anon_sym_38] = ACTIONS(76),
    [anon_sym_unbox] = ACTIONS(76),
    [anon_sym_39] = ACTIONS(76),
    [anon_sym_match] = ACTIONS(76),
    [anon_sym_40] = ACTIONS(76),
    [anon_sym_couple] = ACTIONS(76),
    [anon_sym_41] = ACTIONS(76),
    [anon_sym_join] = ACTIONS(76),
    [anon_sym_42] = ACTIONS(76),
    [anon_sym_select] = ACTIONS(76),
    [anon_sym_43] = ACTIONS(76),
    [anon_sym_pick] = ACTIONS(76),
    [anon_sym_44] = ACTIONS(76),
    [anon_sym_reshape] = ACTIONS(76),
    [anon_sym_45] = ACTIONS(76),
    [anon_sym_take] = ACTIONS(76),
    [anon_sym_46] = ACTIONS(76),
    [anon_sym_drop] = ACTIONS(76),
    [anon_sym_47] = ACTIONS(76),
    [anon_sym_rotate] = ACTIONS(76),
    [anon_sym_48] = ACTIONS(76),
    [anon_sym_windows] = ACTIONS(76),
    [anon_sym_49] = ACTIONS(76),
    [anon_sym_keep] = ACTIONS(76),
    [anon_sym_50] = ACTIONS(76),
    [anon_sym_find] = ACTIONS(76),
    [anon_sym_51] = ACTIONS(76),
    [anon_sym_member] = ACTIONS(76),
    [anon_sym_52] = ACTIONS(76),
    [anon_sym_indexof] = ACTIONS(76),
    [anon_sym_53] = ACTIONS(76),
    [anon_sym_assert] = ACTIONS(76),
    [anon_sym_54] = ACTIONS(76),
    [anon_sym_wait] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_55] = ACTIONS(76),
    [anon_sym_recur] = ACTIONS(76),
    [anon_sym_56] = ACTIONS(76),
    [anon_sym_random] = ACTIONS(76),
    [anon_sym_57] = ACTIONS(76),
    [anon_sym_gen] = ACTIONS(76),
    [anon_sym_deal] = ACTIONS(76),
    [anon_sym_use] = ACTIONS(76),
    [anon_sym_tag] = ACTIONS(76),
    [anon_sym_type] = ACTIONS(76),
    [anon_sym_sig] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_dump] = ACTIONS(76),
    [anon_sym_reduce] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_scan] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
    [anon_sym_each] = ACTIONS(82),
    [anon_sym_58] = ACTIONS(82),
    [anon_sym_rows] = ACTIONS(82),
    [anon_sym_59] = ACTIONS(82),
    [anon_sym_repeat] = ACTIONS(82),
    [anon_sym_60] = ACTIONS(82),
    [anon_sym_dip] = ACTIONS(82),
    [anon_sym_di] = ACTIONS(85),
    [anon_sym_61] = ACTIONS(82),
    [anon_sym_gap] = ACTIONS(82),
    [anon_sym_ga] = ACTIONS(85),
    [anon_sym_62] = ACTIONS(82),
    [anon_sym_invert] = ACTIONS(82),
    [anon_sym_63] = ACTIONS(82),
    [anon_sym_spawn] = ACTIONS(82),
    [anon_sym_fold] = ACTIONS(88),
    [anon_sym_64] = ACTIONS(88),
    [anon_sym_distribute] = ACTIONS(88),
    [anon_sym_65] = ACTIONS(88),
    [anon_sym_table] = ACTIONS(88),
    [anon_sym_66] = ACTIONS(88),
    [anon_sym_cross] = ACTIONS(88),
    [anon_sym_67] = ACTIONS(88),
    [anon_sym_group] = ACTIONS(88),
    [anon_sym_68] = ACTIONS(88),
    [anon_sym_partition] = ACTIONS(88),
    [anon_sym_69] = ACTIONS(88),
    [anon_sym_both] = ACTIONS(88),
    [anon_sym_70] = ACTIONS(88),
    [anon_sym_bracket] = ACTIONS(88),
    [anon_sym_71] = ACTIONS(88),
    [anon_sym_fork] = ACTIONS(88),
    [anon_sym_72] = ACTIONS(88),
    [anon_sym_under] = ACTIONS(88),
    [anon_sym_73] = ACTIONS(88),
    [anon_sym_level] = ACTIONS(88),
    [anon_sym_74] = ACTIONS(88),
    [anon_sym_fill] = ACTIONS(88),
    [anon_sym_75] = ACTIONS(88),
    [anon_sym_bind] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_76] = ACTIONS(88),
    [anon_sym_77] = ACTIONS(91),
    [anon_sym_78] = ACTIONS(91),
    [anon_sym_79] = ACTIONS(91),
    [anon_sym_80] = ACTIONS(91),
    [anon_sym_81] = ACTIONS(91),
    [anon_sym_82] = ACTIONS(91),
    [anon_sym_roll] = ACTIONS(91),
    [anon_sym_83] = ACTIONS(91),
    [anon_sym_unroll] = ACTIONS(91),
    [anon_sym_84] = ACTIONS(91),
    [anon_sym_restack] = ACTIONS(91),
    [anon_sym_85] = ACTIONS(91),
    [anon_sym_86] = ACTIONS(91),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(73),
  },
  [3] = {
    [sym_atom] = STATE(43),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_primitive] = STATE(47),
    [sym_function] = STATE(42),
    [sym_modifier1] = STATE(42),
    [sym_modifier2] = STATE(42),
    [sym_deprecated] = STATE(42),
    [aux_sym_PROGRAM_repeat1] = STATE(2),
    [aux_sym_array_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(11),
    [aux_sym_character_token1] = ACTIONS(13),
    [sym_multiLineString] = ACTIONS(15),
    [sym_signature] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_identifier_deprecated] = ACTIONS(17),
    [sym_system] = ACTIONS(15),
    [sym_comment] = ACTIONS(96),
    [sym_openParen] = ACTIONS(21),
    [sym_openCurly] = ACTIONS(23),
    [sym_openBracket] = ACTIONS(25),
    [sym_leftArrow] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_identity] = ACTIONS(29),
    [anon_sym_id] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_sign] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_absolutevalue] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_sqrt] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(29),
    [anon_sym_sine] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(29),
    [anon_sym_floor] = ACTIONS(29),
    [anon_sym_12] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_13] = ACTIONS(29),
    [anon_sym_round] = ACTIONS(29),
    [anon_sym_14] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_15] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_16] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_17] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_18] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_19] = ACTIONS(29),
    [anon_sym_modulus] = ACTIONS(29),
    [anon_sym_20] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_21] = ACTIONS(29),
    [anon_sym_logarithm] = ACTIONS(29),
    [anon_sym_22] = ACTIONS(29),
    [anon_sym_minimum] = ACTIONS(29),
    [anon_sym_23] = ACTIONS(29),
    [anon_sym_maximum] = ACTIONS(29),
    [anon_sym_24] = ACTIONS(29),
    [anon_sym_atangent] = ACTIONS(29),
    [anon_sym_25] = ACTIONS(29),
    [anon_sym_length] = ACTIONS(29),
    [anon_sym_26] = ACTIONS(29),
    [anon_sym_shape] = ACTIONS(29),
    [anon_sym_27] = ACTIONS(29),
    [anon_sym_range] = ACTIONS(29),
    [anon_sym_28] = ACTIONS(29),
    [anon_sym_first] = ACTIONS(29),
    [anon_sym_29] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_30] = ACTIONS(29),
    [anon_sym_deshape] = ACTIONS(29),
    [anon_sym_31] = ACTIONS(29),
    [anon_sym_bits] = ACTIONS(29),
    [anon_sym_32] = ACTIONS(29),
    [anon_sym_transpose] = ACTIONS(29),
    [anon_sym_33] = ACTIONS(29),
    [anon_sym_rise] = ACTIONS(29),
    [anon_sym_34] = ACTIONS(29),
    [anon_sym_fall] = ACTIONS(29),
    [anon_sym_35] = ACTIONS(29),
    [anon_sym_classify] = ACTIONS(29),
    [anon_sym_36] = ACTIONS(29),
    [anon_sym_deduplicate] = ACTIONS(29),
    [anon_sym_37] = ACTIONS(29),
    [anon_sym_box] = ACTIONS(29),
    [anon_sym_38] = ACTIONS(29),
    [anon_sym_unbox] = ACTIONS(29),
    [anon_sym_39] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_40] = ACTIONS(29),
    [anon_sym_couple] = ACTIONS(29),
    [anon_sym_41] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(29),
    [anon_sym_42] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_43] = ACTIONS(29),
    [anon_sym_pick] = ACTIONS(29),
    [anon_sym_44] = ACTIONS(29),
    [anon_sym_reshape] = ACTIONS(29),
    [anon_sym_45] = ACTIONS(29),
    [anon_sym_take] = ACTIONS(29),
    [anon_sym_46] = ACTIONS(29),
    [anon_sym_drop] = ACTIONS(29),
    [anon_sym_47] = ACTIONS(29),
    [anon_sym_rotate] = ACTIONS(29),
    [anon_sym_48] = ACTIONS(29),
    [anon_sym_windows] = ACTIONS(29),
    [anon_sym_49] = ACTIONS(29),
    [anon_sym_keep] = ACTIONS(29),
    [anon_sym_50] = ACTIONS(29),
    [anon_sym_find] = ACTIONS(29),
    [anon_sym_51] = ACTIONS(29),
    [anon_sym_member] = ACTIONS(29),
    [anon_sym_52] = ACTIONS(29),
    [anon_sym_indexof] = ACTIONS(29),
    [anon_sym_53] = ACTIONS(29),
    [anon_sym_assert] = ACTIONS(29),
    [anon_sym_54] = ACTIONS(29),
    [anon_sym_wait] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_55] = ACTIONS(29),
    [anon_sym_recur] = ACTIONS(29),
    [anon_sym_56] = ACTIONS(29),
    [anon_sym_random] = ACTIONS(29),
    [anon_sym_57] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_deal] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_tag] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_sig] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_dump] = ACTIONS(29),
    [anon_sym_reduce] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_scan] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_each] = ACTIONS(33),
    [anon_sym_58] = ACTIONS(33),
    [anon_sym_rows] = ACTIONS(33),
    [anon_sym_59] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(33),
    [anon_sym_60] = ACTIONS(33),
    [anon_sym_dip] = ACTIONS(33),
    [anon_sym_di] = ACTIONS(35),
    [anon_sym_61] = ACTIONS(33),
    [anon_sym_gap] = ACTIONS(33),
    [anon_sym_ga] = ACTIONS(35),
    [anon_sym_62] = ACTIONS(33),
    [anon_sym_invert] = ACTIONS(33),
    [anon_sym_63] = ACTIONS(33),
    [anon_sym_spawn] = ACTIONS(33),
    [anon_sym_fold] = ACTIONS(37),
    [anon_sym_64] = ACTIONS(37),
    [anon_sym_distribute] = ACTIONS(37),
    [anon_sym_65] = ACTIONS(37),
    [anon_sym_table] = ACTIONS(37),
    [anon_sym_66] = ACTIONS(37),
    [anon_sym_cross] = ACTIONS(37),
    [anon_sym_67] = ACTIONS(37),
    [anon_sym_group] = ACTIONS(37),
    [anon_sym_68] = ACTIONS(37),
    [anon_sym_partition] = ACTIONS(37),
    [anon_sym_69] = ACTIONS(37),
    [anon_sym_both] = ACTIONS(37),
    [anon_sym_70] = ACTIONS(37),
    [anon_sym_bracket] = ACTIONS(37),
    [anon_sym_71] = ACTIONS(37),
    [anon_sym_fork] = ACTIONS(37),
    [anon_sym_72] = ACTIONS(37),
    [anon_sym_under] = ACTIONS(37),
    [anon_sym_73] = ACTIONS(37),
    [anon_sym_level] = ACTIONS(37),
    [anon_sym_74] = ACTIONS(37),
    [anon_sym_fill] = ACTIONS(37),
    [anon_sym_75] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(37),
    [anon_sym_76] = ACTIONS(37),
    [anon_sym_77] = ACTIONS(39),
    [anon_sym_78] = ACTIONS(39),
    [anon_sym_79] = ACTIONS(39),
    [anon_sym_80] = ACTIONS(39),
    [anon_sym_81] = ACTIONS(39),
    [anon_sym_82] = ACTIONS(39),
    [anon_sym_roll] = ACTIONS(39),
    [anon_sym_83] = ACTIONS(39),
    [anon_sym_unroll] = ACTIONS(39),
    [anon_sym_84] = ACTIONS(39),
    [anon_sym_restack] = ACTIONS(39),
    [anon_sym_85] = ACTIONS(39),
    [anon_sym_86] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(98),
  },
  [4] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [5] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [6] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(6),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [anon_sym_] = ACTIONS(137),
    [aux_sym_number_token1] = ACTIONS(140),
    [aux_sym_character_token1] = ACTIONS(143),
    [sym_multiLineString] = ACTIONS(146),
    [sym_signature] = ACTIONS(146),
    [sym_identifier] = ACTIONS(149),
    [sym_identifier_deprecated] = ACTIONS(149),
    [sym_system] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(152),
    [sym_closeParen] = ACTIONS(155),
    [sym_openCurly] = ACTIONS(157),
    [sym_openBracket] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_identity] = ACTIONS(163),
    [anon_sym_id] = ACTIONS(166),
    [anon_sym_6] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_7] = ACTIONS(163),
    [anon_sym_sign] = ACTIONS(163),
    [anon_sym_8] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [anon_sym_absolutevalue] = ACTIONS(163),
    [anon_sym_9] = ACTIONS(163),
    [anon_sym_sqrt] = ACTIONS(163),
    [anon_sym_10] = ACTIONS(163),
    [anon_sym_sine] = ACTIONS(163),
    [anon_sym_11] = ACTIONS(163),
    [anon_sym_floor] = ACTIONS(163),
    [anon_sym_12] = ACTIONS(163),
    [anon_sym_ceiling] = ACTIONS(163),
    [anon_sym_13] = ACTIONS(163),
    [anon_sym_round] = ACTIONS(163),
    [anon_sym_14] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_15] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_16] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_17] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_18] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_19] = ACTIONS(163),
    [anon_sym_modulus] = ACTIONS(163),
    [anon_sym_20] = ACTIONS(163),
    [anon_sym_power] = ACTIONS(163),
    [anon_sym_21] = ACTIONS(163),
    [anon_sym_logarithm] = ACTIONS(163),
    [anon_sym_22] = ACTIONS(163),
    [anon_sym_minimum] = ACTIONS(163),
    [anon_sym_23] = ACTIONS(163),
    [anon_sym_maximum] = ACTIONS(163),
    [anon_sym_24] = ACTIONS(163),
    [anon_sym_atangent] = ACTIONS(163),
    [anon_sym_25] = ACTIONS(163),
    [anon_sym_length] = ACTIONS(163),
    [anon_sym_26] = ACTIONS(163),
    [anon_sym_shape] = ACTIONS(163),
    [anon_sym_27] = ACTIONS(163),
    [anon_sym_range] = ACTIONS(163),
    [anon_sym_28] = ACTIONS(163),
    [anon_sym_first] = ACTIONS(163),
    [anon_sym_29] = ACTIONS(163),
    [anon_sym_reverse] = ACTIONS(163),
    [anon_sym_30] = ACTIONS(163),
    [anon_sym_deshape] = ACTIONS(163),
    [anon_sym_31] = ACTIONS(163),
    [anon_sym_bits] = ACTIONS(163),
    [anon_sym_32] = ACTIONS(163),
    [anon_sym_transpose] = ACTIONS(163),
    [anon_sym_33] = ACTIONS(163),
    [anon_sym_rise] = ACTIONS(163),
    [anon_sym_34] = ACTIONS(163),
    [anon_sym_fall] = ACTIONS(163),
    [anon_sym_35] = ACTIONS(163),
    [anon_sym_classify] = ACTIONS(163),
    [anon_sym_36] = ACTIONS(163),
    [anon_sym_deduplicate] = ACTIONS(163),
    [anon_sym_37] = ACTIONS(163),
    [anon_sym_box] = ACTIONS(163),
    [anon_sym_38] = ACTIONS(163),
    [anon_sym_unbox] = ACTIONS(163),
    [anon_sym_39] = ACTIONS(163),
    [anon_sym_match] = ACTIONS(163),
    [anon_sym_40] = ACTIONS(163),
    [anon_sym_couple] = ACTIONS(163),
    [anon_sym_41] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_42] = ACTIONS(163),
    [anon_sym_select] = ACTIONS(163),
    [anon_sym_43] = ACTIONS(163),
    [anon_sym_pick] = ACTIONS(163),
    [anon_sym_44] = ACTIONS(163),
    [anon_sym_reshape] = ACTIONS(163),
    [anon_sym_45] = ACTIONS(163),
    [anon_sym_take] = ACTIONS(163),
    [anon_sym_46] = ACTIONS(163),
    [anon_sym_drop] = ACTIONS(163),
    [anon_sym_47] = ACTIONS(163),
    [anon_sym_rotate] = ACTIONS(163),
    [anon_sym_48] = ACTIONS(163),
    [anon_sym_windows] = ACTIONS(163),
    [anon_sym_49] = ACTIONS(163),
    [anon_sym_keep] = ACTIONS(163),
    [anon_sym_50] = ACTIONS(163),
    [anon_sym_find] = ACTIONS(163),
    [anon_sym_51] = ACTIONS(163),
    [anon_sym_member] = ACTIONS(163),
    [anon_sym_52] = ACTIONS(163),
    [anon_sym_indexof] = ACTIONS(163),
    [anon_sym_53] = ACTIONS(163),
    [anon_sym_assert] = ACTIONS(163),
    [anon_sym_54] = ACTIONS(163),
    [anon_sym_wait] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_break] = ACTIONS(163),
    [anon_sym_55] = ACTIONS(163),
    [anon_sym_recur] = ACTIONS(163),
    [anon_sym_56] = ACTIONS(163),
    [anon_sym_random] = ACTIONS(163),
    [anon_sym_57] = ACTIONS(163),
    [anon_sym_gen] = ACTIONS(163),
    [anon_sym_deal] = ACTIONS(163),
    [anon_sym_use] = ACTIONS(163),
    [anon_sym_tag] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_sig] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_dump] = ACTIONS(163),
    [anon_sym_reduce] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_scan] = ACTIONS(169),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_each] = ACTIONS(169),
    [anon_sym_58] = ACTIONS(169),
    [anon_sym_rows] = ACTIONS(169),
    [anon_sym_59] = ACTIONS(169),
    [anon_sym_repeat] = ACTIONS(169),
    [anon_sym_60] = ACTIONS(169),
    [anon_sym_dip] = ACTIONS(169),
    [anon_sym_di] = ACTIONS(172),
    [anon_sym_61] = ACTIONS(169),
    [anon_sym_gap] = ACTIONS(169),
    [anon_sym_ga] = ACTIONS(172),
    [anon_sym_62] = ACTIONS(169),
    [anon_sym_invert] = ACTIONS(169),
    [anon_sym_63] = ACTIONS(169),
    [anon_sym_spawn] = ACTIONS(169),
    [anon_sym_fold] = ACTIONS(175),
    [anon_sym_64] = ACTIONS(175),
    [anon_sym_distribute] = ACTIONS(175),
    [anon_sym_65] = ACTIONS(175),
    [anon_sym_table] = ACTIONS(175),
    [anon_sym_66] = ACTIONS(175),
    [anon_sym_cross] = ACTIONS(175),
    [anon_sym_67] = ACTIONS(175),
    [anon_sym_group] = ACTIONS(175),
    [anon_sym_68] = ACTIONS(175),
    [anon_sym_partition] = ACTIONS(175),
    [anon_sym_69] = ACTIONS(175),
    [anon_sym_both] = ACTIONS(175),
    [anon_sym_70] = ACTIONS(175),
    [anon_sym_bracket] = ACTIONS(175),
    [anon_sym_71] = ACTIONS(175),
    [anon_sym_fork] = ACTIONS(175),
    [anon_sym_72] = ACTIONS(175),
    [anon_sym_under] = ACTIONS(175),
    [anon_sym_73] = ACTIONS(175),
    [anon_sym_level] = ACTIONS(175),
    [anon_sym_74] = ACTIONS(175),
    [anon_sym_fill] = ACTIONS(175),
    [anon_sym_75] = ACTIONS(175),
    [anon_sym_bind] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(175),
    [anon_sym_try] = ACTIONS(175),
    [anon_sym_76] = ACTIONS(175),
    [anon_sym_77] = ACTIONS(178),
    [anon_sym_78] = ACTIONS(178),
    [anon_sym_79] = ACTIONS(178),
    [anon_sym_80] = ACTIONS(178),
    [anon_sym_81] = ACTIONS(178),
    [anon_sym_82] = ACTIONS(178),
    [anon_sym_roll] = ACTIONS(178),
    [anon_sym_83] = ACTIONS(178),
    [anon_sym_unroll] = ACTIONS(178),
    [anon_sym_84] = ACTIONS(178),
    [anon_sym_restack] = ACTIONS(178),
    [anon_sym_85] = ACTIONS(178),
    [anon_sym_86] = ACTIONS(178),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [7] = {
    [sym_constant] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [aux_sym_number_token1] = ACTIONS(183),
    [aux_sym_character_token1] = ACTIONS(181),
    [sym_multiLineString] = ACTIONS(181),
    [sym_signature] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_identifier_deprecated] = ACTIONS(183),
    [sym_system] = ACTIONS(181),
    [sym_comment] = ACTIONS(183),
    [sym_openParen] = ACTIONS(181),
    [sym_openCurly] = ACTIONS(181),
    [sym_openBracket] = ACTIONS(181),
    [sym_underscore] = ACTIONS(181),
    [sym_leftArrow] = ACTIONS(181),
    [anon_sym_eta] = ACTIONS(185),
    [anon_sym_2] = ACTIONS(187),
    [anon_sym_pi] = ACTIONS(187),
    [anon_sym_3] = ACTIONS(187),
    [anon_sym_tau] = ACTIONS(185),
    [anon_sym_4] = ACTIONS(187),
    [anon_sym_infinity] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_identity] = ACTIONS(181),
    [anon_sym_id] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_7] = ACTIONS(181),
    [anon_sym_sign] = ACTIONS(181),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_absolutevalue] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_sqrt] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(181),
    [anon_sym_sine] = ACTIONS(181),
    [anon_sym_11] = ACTIONS(181),
    [anon_sym_floor] = ACTIONS(181),
    [anon_sym_12] = ACTIONS(181),
    [anon_sym_ceiling] = ACTIONS(181),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_round] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_16] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_17] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_18] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_19] = ACTIONS(181),
    [anon_sym_modulus] = ACTIONS(181),
    [anon_sym_20] = ACTIONS(181),
    [anon_sym_power] = ACTIONS(181),
    [anon_sym_21] = ACTIONS(181),
    [anon_sym_logarithm] = ACTIONS(181),
    [anon_sym_22] = ACTIONS(181),
    [anon_sym_minimum] = ACTIONS(181),
    [anon_sym_23] = ACTIONS(181),
    [anon_sym_maximum] = ACTIONS(181),
    [anon_sym_24] = ACTIONS(181),
    [anon_sym_atangent] = ACTIONS(181),
    [anon_sym_25] = ACTIONS(181),
    [anon_sym_length] = ACTIONS(181),
    [anon_sym_26] = ACTIONS(181),
    [anon_sym_shape] = ACTIONS(181),
    [anon_sym_27] = ACTIONS(181),
    [anon_sym_range] = ACTIONS(181),
    [anon_sym_28] = ACTIONS(181),
    [anon_sym_first] = ACTIONS(181),
    [anon_sym_29] = ACTIONS(181),
    [anon_sym_reverse] = ACTIONS(181),
    [anon_sym_30] = ACTIONS(181),
    [anon_sym_deshape] = ACTIONS(181),
    [anon_sym_31] = ACTIONS(181),
    [anon_sym_bits] = ACTIONS(181),
    [anon_sym_32] = ACTIONS(181),
    [anon_sym_transpose] = ACTIONS(181),
    [anon_sym_33] = ACTIONS(181),
    [anon_sym_rise] = ACTIONS(181),
    [anon_sym_34] = ACTIONS(181),
    [anon_sym_fall] = ACTIONS(181),
    [anon_sym_35] = ACTIONS(181),
    [anon_sym_classify] = ACTIONS(181),
    [anon_sym_36] = ACTIONS(181),
    [anon_sym_deduplicate] = ACTIONS(181),
    [anon_sym_37] = ACTIONS(181),
    [anon_sym_box] = ACTIONS(181),
    [anon_sym_38] = ACTIONS(181),
    [anon_sym_unbox] = ACTIONS(181),
    [anon_sym_39] = ACTIONS(181),
    [anon_sym_match] = ACTIONS(181),
    [anon_sym_40] = ACTIONS(181),
    [anon_sym_couple] = ACTIONS(181),
    [anon_sym_41] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_42] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_43] = ACTIONS(181),
    [anon_sym_pick] = ACTIONS(181),
    [anon_sym_44] = ACTIONS(181),
    [anon_sym_reshape] = ACTIONS(181),
    [anon_sym_45] = ACTIONS(181),
    [anon_sym_take] = ACTIONS(181),
    [anon_sym_46] = ACTIONS(181),
    [anon_sym_drop] = ACTIONS(181),
    [anon_sym_47] = ACTIONS(181),
    [anon_sym_rotate] = ACTIONS(181),
    [anon_sym_48] = ACTIONS(181),
    [anon_sym_windows] = ACTIONS(181),
    [anon_sym_49] = ACTIONS(181),
    [anon_sym_keep] = ACTIONS(181),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_find] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(181),
    [anon_sym_member] = ACTIONS(181),
    [anon_sym_52] = ACTIONS(181),
    [anon_sym_indexof] = ACTIONS(181),
    [anon_sym_53] = ACTIONS(181),
    [anon_sym_assert] = ACTIONS(181),
    [anon_sym_54] = ACTIONS(181),
    [anon_sym_wait] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_break] = ACTIONS(181),
    [anon_sym_55] = ACTIONS(181),
    [anon_sym_recur] = ACTIONS(181),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_random] = ACTIONS(181),
    [anon_sym_57] = ACTIONS(181),
    [anon_sym_gen] = ACTIONS(181),
    [anon_sym_deal] = ACTIONS(181),
    [anon_sym_use] = ACTIONS(181),
    [anon_sym_tag] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_sig] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_dump] = ACTIONS(181),
    [anon_sym_reduce] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_scan] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_each] = ACTIONS(181),
    [anon_sym_58] = ACTIONS(181),
    [anon_sym_rows] = ACTIONS(181),
    [anon_sym_59] = ACTIONS(181),
    [anon_sym_repeat] = ACTIONS(181),
    [anon_sym_60] = ACTIONS(181),
    [anon_sym_dip] = ACTIONS(181),
    [anon_sym_di] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(181),
    [anon_sym_gap] = ACTIONS(181),
    [anon_sym_ga] = ACTIONS(183),
    [anon_sym_62] = ACTIONS(181),
    [anon_sym_invert] = ACTIONS(181),
    [anon_sym_63] = ACTIONS(181),
    [anon_sym_spawn] = ACTIONS(181),
    [anon_sym_fold] = ACTIONS(181),
    [anon_sym_64] = ACTIONS(181),
    [anon_sym_distribute] = ACTIONS(181),
    [anon_sym_65] = ACTIONS(181),
    [anon_sym_table] = ACTIONS(181),
    [anon_sym_66] = ACTIONS(181),
    [anon_sym_cross] = ACTIONS(181),
    [anon_sym_67] = ACTIONS(181),
    [anon_sym_group] = ACTIONS(181),
    [anon_sym_68] = ACTIONS(181),
    [anon_sym_partition] = ACTIONS(181),
    [anon_sym_69] = ACTIONS(181),
    [anon_sym_both] = ACTIONS(181),
    [anon_sym_70] = ACTIONS(181),
    [anon_sym_bracket] = ACTIONS(181),
    [anon_sym_71] = ACTIONS(181),
    [anon_sym_fork] = ACTIONS(181),
    [anon_sym_72] = ACTIONS(181),
    [anon_sym_under] = ACTIONS(181),
    [anon_sym_73] = ACTIONS(181),
    [anon_sym_level] = ACTIONS(181),
    [anon_sym_74] = ACTIONS(181),
    [anon_sym_fill] = ACTIONS(181),
    [anon_sym_75] = ACTIONS(181),
    [anon_sym_bind] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_try] = ACTIONS(181),
    [anon_sym_76] = ACTIONS(181),
    [anon_sym_77] = ACTIONS(181),
    [anon_sym_78] = ACTIONS(181),
    [anon_sym_79] = ACTIONS(181),
    [anon_sym_80] = ACTIONS(181),
    [anon_sym_81] = ACTIONS(181),
    [anon_sym_82] = ACTIONS(181),
    [anon_sym_roll] = ACTIONS(181),
    [anon_sym_83] = ACTIONS(181),
    [anon_sym_unroll] = ACTIONS(181),
    [anon_sym_84] = ACTIONS(181),
    [anon_sym_restack] = ACTIONS(181),
    [anon_sym_85] = ACTIONS(181),
    [anon_sym_86] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(181),
  },
  [8] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(189),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [9] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(8),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(191),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [10] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(15),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [11] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(5),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [12] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_] = ACTIONS(198),
    [aux_sym_number_token1] = ACTIONS(201),
    [aux_sym_character_token1] = ACTIONS(204),
    [sym_multiLineString] = ACTIONS(207),
    [sym_signature] = ACTIONS(207),
    [sym_identifier] = ACTIONS(210),
    [sym_identifier_deprecated] = ACTIONS(210),
    [sym_system] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(213),
    [sym_openCurly] = ACTIONS(216),
    [sym_openBracket] = ACTIONS(219),
    [sym_closeBracket] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_identity] = ACTIONS(224),
    [anon_sym_id] = ACTIONS(227),
    [anon_sym_6] = ACTIONS(224),
    [anon_sym_not] = ACTIONS(224),
    [anon_sym_7] = ACTIONS(224),
    [anon_sym_sign] = ACTIONS(224),
    [anon_sym_8] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_absolutevalue] = ACTIONS(224),
    [anon_sym_9] = ACTIONS(224),
    [anon_sym_sqrt] = ACTIONS(224),
    [anon_sym_10] = ACTIONS(224),
    [anon_sym_sine] = ACTIONS(224),
    [anon_sym_11] = ACTIONS(224),
    [anon_sym_floor] = ACTIONS(224),
    [anon_sym_12] = ACTIONS(224),
    [anon_sym_ceiling] = ACTIONS(224),
    [anon_sym_13] = ACTIONS(224),
    [anon_sym_round] = ACTIONS(224),
    [anon_sym_14] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_15] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(224),
    [anon_sym_16] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(224),
    [anon_sym_17] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_18] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(224),
    [anon_sym_19] = ACTIONS(224),
    [anon_sym_modulus] = ACTIONS(224),
    [anon_sym_20] = ACTIONS(224),
    [anon_sym_power] = ACTIONS(224),
    [anon_sym_21] = ACTIONS(224),
    [anon_sym_logarithm] = ACTIONS(224),
    [anon_sym_22] = ACTIONS(224),
    [anon_sym_minimum] = ACTIONS(224),
    [anon_sym_23] = ACTIONS(224),
    [anon_sym_maximum] = ACTIONS(224),
    [anon_sym_24] = ACTIONS(224),
    [anon_sym_atangent] = ACTIONS(224),
    [anon_sym_25] = ACTIONS(224),
    [anon_sym_length] = ACTIONS(224),
    [anon_sym_26] = ACTIONS(224),
    [anon_sym_shape] = ACTIONS(224),
    [anon_sym_27] = ACTIONS(224),
    [anon_sym_range] = ACTIONS(224),
    [anon_sym_28] = ACTIONS(224),
    [anon_sym_first] = ACTIONS(224),
    [anon_sym_29] = ACTIONS(224),
    [anon_sym_reverse] = ACTIONS(224),
    [anon_sym_30] = ACTIONS(224),
    [anon_sym_deshape] = ACTIONS(224),
    [anon_sym_31] = ACTIONS(224),
    [anon_sym_bits] = ACTIONS(224),
    [anon_sym_32] = ACTIONS(224),
    [anon_sym_transpose] = ACTIONS(224),
    [anon_sym_33] = ACTIONS(224),
    [anon_sym_rise] = ACTIONS(224),
    [anon_sym_34] = ACTIONS(224),
    [anon_sym_fall] = ACTIONS(224),
    [anon_sym_35] = ACTIONS(224),
    [anon_sym_classify] = ACTIONS(224),
    [anon_sym_36] = ACTIONS(224),
    [anon_sym_deduplicate] = ACTIONS(224),
    [anon_sym_37] = ACTIONS(224),
    [anon_sym_box] = ACTIONS(224),
    [anon_sym_38] = ACTIONS(224),
    [anon_sym_unbox] = ACTIONS(224),
    [anon_sym_39] = ACTIONS(224),
    [anon_sym_match] = ACTIONS(224),
    [anon_sym_40] = ACTIONS(224),
    [anon_sym_couple] = ACTIONS(224),
    [anon_sym_41] = ACTIONS(224),
    [anon_sym_join] = ACTIONS(224),
    [anon_sym_42] = ACTIONS(224),
    [anon_sym_select] = ACTIONS(224),
    [anon_sym_43] = ACTIONS(224),
    [anon_sym_pick] = ACTIONS(224),
    [anon_sym_44] = ACTIONS(224),
    [anon_sym_reshape] = ACTIONS(224),
    [anon_sym_45] = ACTIONS(224),
    [anon_sym_take] = ACTIONS(224),
    [anon_sym_46] = ACTIONS(224),
    [anon_sym_drop] = ACTIONS(224),
    [anon_sym_47] = ACTIONS(224),
    [anon_sym_rotate] = ACTIONS(224),
    [anon_sym_48] = ACTIONS(224),
    [anon_sym_windows] = ACTIONS(224),
    [anon_sym_49] = ACTIONS(224),
    [anon_sym_keep] = ACTIONS(224),
    [anon_sym_50] = ACTIONS(224),
    [anon_sym_find] = ACTIONS(224),
    [anon_sym_51] = ACTIONS(224),
    [anon_sym_member] = ACTIONS(224),
    [anon_sym_52] = ACTIONS(224),
    [anon_sym_indexof] = ACTIONS(224),
    [anon_sym_53] = ACTIONS(224),
    [anon_sym_assert] = ACTIONS(224),
    [anon_sym_54] = ACTIONS(224),
    [anon_sym_wait] = ACTIONS(224),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_break] = ACTIONS(224),
    [anon_sym_55] = ACTIONS(224),
    [anon_sym_recur] = ACTIONS(224),
    [anon_sym_56] = ACTIONS(224),
    [anon_sym_random] = ACTIONS(224),
    [anon_sym_57] = ACTIONS(224),
    [anon_sym_gen] = ACTIONS(224),
    [anon_sym_deal] = ACTIONS(224),
    [anon_sym_use] = ACTIONS(224),
    [anon_sym_tag] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(224),
    [anon_sym_sig] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_dump] = ACTIONS(224),
    [anon_sym_reduce] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_scan] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [anon_sym_each] = ACTIONS(230),
    [anon_sym_58] = ACTIONS(230),
    [anon_sym_rows] = ACTIONS(230),
    [anon_sym_59] = ACTIONS(230),
    [anon_sym_repeat] = ACTIONS(230),
    [anon_sym_60] = ACTIONS(230),
    [anon_sym_dip] = ACTIONS(230),
    [anon_sym_di] = ACTIONS(233),
    [anon_sym_61] = ACTIONS(230),
    [anon_sym_gap] = ACTIONS(230),
    [anon_sym_ga] = ACTIONS(233),
    [anon_sym_62] = ACTIONS(230),
    [anon_sym_invert] = ACTIONS(230),
    [anon_sym_63] = ACTIONS(230),
    [anon_sym_spawn] = ACTIONS(230),
    [anon_sym_fold] = ACTIONS(236),
    [anon_sym_64] = ACTIONS(236),
    [anon_sym_distribute] = ACTIONS(236),
    [anon_sym_65] = ACTIONS(236),
    [anon_sym_table] = ACTIONS(236),
    [anon_sym_66] = ACTIONS(236),
    [anon_sym_cross] = ACTIONS(236),
    [anon_sym_67] = ACTIONS(236),
    [anon_sym_group] = ACTIONS(236),
    [anon_sym_68] = ACTIONS(236),
    [anon_sym_partition] = ACTIONS(236),
    [anon_sym_69] = ACTIONS(236),
    [anon_sym_both] = ACTIONS(236),
    [anon_sym_70] = ACTIONS(236),
    [anon_sym_bracket] = ACTIONS(236),
    [anon_sym_71] = ACTIONS(236),
    [anon_sym_fork] = ACTIONS(236),
    [anon_sym_72] = ACTIONS(236),
    [anon_sym_under] = ACTIONS(236),
    [anon_sym_73] = ACTIONS(236),
    [anon_sym_level] = ACTIONS(236),
    [anon_sym_74] = ACTIONS(236),
    [anon_sym_fill] = ACTIONS(236),
    [anon_sym_75] = ACTIONS(236),
    [anon_sym_bind] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_try] = ACTIONS(236),
    [anon_sym_76] = ACTIONS(236),
    [anon_sym_77] = ACTIONS(239),
    [anon_sym_78] = ACTIONS(239),
    [anon_sym_79] = ACTIONS(239),
    [anon_sym_80] = ACTIONS(239),
    [anon_sym_81] = ACTIONS(239),
    [anon_sym_82] = ACTIONS(239),
    [anon_sym_roll] = ACTIONS(239),
    [anon_sym_83] = ACTIONS(239),
    [anon_sym_unroll] = ACTIONS(239),
    [anon_sym_84] = ACTIONS(239),
    [anon_sym_restack] = ACTIONS(239),
    [anon_sym_85] = ACTIONS(239),
    [anon_sym_86] = ACTIONS(239),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [13] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(118),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [14] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(6),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_closeParen] = ACTIONS(256),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [15] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [16] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(22),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(193),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [17] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(6),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_closeParen] = ACTIONS(274),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [18] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_] = ACTIONS(198),
    [aux_sym_number_token1] = ACTIONS(201),
    [aux_sym_character_token1] = ACTIONS(204),
    [sym_multiLineString] = ACTIONS(207),
    [sym_signature] = ACTIONS(207),
    [sym_identifier] = ACTIONS(210),
    [sym_identifier_deprecated] = ACTIONS(210),
    [sym_system] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(213),
    [sym_openCurly] = ACTIONS(216),
    [sym_closeCurly] = ACTIONS(222),
    [sym_openBracket] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_identity] = ACTIONS(224),
    [anon_sym_id] = ACTIONS(227),
    [anon_sym_6] = ACTIONS(224),
    [anon_sym_not] = ACTIONS(224),
    [anon_sym_7] = ACTIONS(224),
    [anon_sym_sign] = ACTIONS(224),
    [anon_sym_8] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_absolutevalue] = ACTIONS(224),
    [anon_sym_9] = ACTIONS(224),
    [anon_sym_sqrt] = ACTIONS(224),
    [anon_sym_10] = ACTIONS(224),
    [anon_sym_sine] = ACTIONS(224),
    [anon_sym_11] = ACTIONS(224),
    [anon_sym_floor] = ACTIONS(224),
    [anon_sym_12] = ACTIONS(224),
    [anon_sym_ceiling] = ACTIONS(224),
    [anon_sym_13] = ACTIONS(224),
    [anon_sym_round] = ACTIONS(224),
    [anon_sym_14] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_15] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(224),
    [anon_sym_16] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(224),
    [anon_sym_17] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(224),
    [anon_sym_18] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(224),
    [anon_sym_19] = ACTIONS(224),
    [anon_sym_modulus] = ACTIONS(224),
    [anon_sym_20] = ACTIONS(224),
    [anon_sym_power] = ACTIONS(224),
    [anon_sym_21] = ACTIONS(224),
    [anon_sym_logarithm] = ACTIONS(224),
    [anon_sym_22] = ACTIONS(224),
    [anon_sym_minimum] = ACTIONS(224),
    [anon_sym_23] = ACTIONS(224),
    [anon_sym_maximum] = ACTIONS(224),
    [anon_sym_24] = ACTIONS(224),
    [anon_sym_atangent] = ACTIONS(224),
    [anon_sym_25] = ACTIONS(224),
    [anon_sym_length] = ACTIONS(224),
    [anon_sym_26] = ACTIONS(224),
    [anon_sym_shape] = ACTIONS(224),
    [anon_sym_27] = ACTIONS(224),
    [anon_sym_range] = ACTIONS(224),
    [anon_sym_28] = ACTIONS(224),
    [anon_sym_first] = ACTIONS(224),
    [anon_sym_29] = ACTIONS(224),
    [anon_sym_reverse] = ACTIONS(224),
    [anon_sym_30] = ACTIONS(224),
    [anon_sym_deshape] = ACTIONS(224),
    [anon_sym_31] = ACTIONS(224),
    [anon_sym_bits] = ACTIONS(224),
    [anon_sym_32] = ACTIONS(224),
    [anon_sym_transpose] = ACTIONS(224),
    [anon_sym_33] = ACTIONS(224),
    [anon_sym_rise] = ACTIONS(224),
    [anon_sym_34] = ACTIONS(224),
    [anon_sym_fall] = ACTIONS(224),
    [anon_sym_35] = ACTIONS(224),
    [anon_sym_classify] = ACTIONS(224),
    [anon_sym_36] = ACTIONS(224),
    [anon_sym_deduplicate] = ACTIONS(224),
    [anon_sym_37] = ACTIONS(224),
    [anon_sym_box] = ACTIONS(224),
    [anon_sym_38] = ACTIONS(224),
    [anon_sym_unbox] = ACTIONS(224),
    [anon_sym_39] = ACTIONS(224),
    [anon_sym_match] = ACTIONS(224),
    [anon_sym_40] = ACTIONS(224),
    [anon_sym_couple] = ACTIONS(224),
    [anon_sym_41] = ACTIONS(224),
    [anon_sym_join] = ACTIONS(224),
    [anon_sym_42] = ACTIONS(224),
    [anon_sym_select] = ACTIONS(224),
    [anon_sym_43] = ACTIONS(224),
    [anon_sym_pick] = ACTIONS(224),
    [anon_sym_44] = ACTIONS(224),
    [anon_sym_reshape] = ACTIONS(224),
    [anon_sym_45] = ACTIONS(224),
    [anon_sym_take] = ACTIONS(224),
    [anon_sym_46] = ACTIONS(224),
    [anon_sym_drop] = ACTIONS(224),
    [anon_sym_47] = ACTIONS(224),
    [anon_sym_rotate] = ACTIONS(224),
    [anon_sym_48] = ACTIONS(224),
    [anon_sym_windows] = ACTIONS(224),
    [anon_sym_49] = ACTIONS(224),
    [anon_sym_keep] = ACTIONS(224),
    [anon_sym_50] = ACTIONS(224),
    [anon_sym_find] = ACTIONS(224),
    [anon_sym_51] = ACTIONS(224),
    [anon_sym_member] = ACTIONS(224),
    [anon_sym_52] = ACTIONS(224),
    [anon_sym_indexof] = ACTIONS(224),
    [anon_sym_53] = ACTIONS(224),
    [anon_sym_assert] = ACTIONS(224),
    [anon_sym_54] = ACTIONS(224),
    [anon_sym_wait] = ACTIONS(224),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_break] = ACTIONS(224),
    [anon_sym_55] = ACTIONS(224),
    [anon_sym_recur] = ACTIONS(224),
    [anon_sym_56] = ACTIONS(224),
    [anon_sym_random] = ACTIONS(224),
    [anon_sym_57] = ACTIONS(224),
    [anon_sym_gen] = ACTIONS(224),
    [anon_sym_deal] = ACTIONS(224),
    [anon_sym_use] = ACTIONS(224),
    [anon_sym_tag] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(224),
    [anon_sym_sig] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_dump] = ACTIONS(224),
    [anon_sym_reduce] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_scan] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [anon_sym_each] = ACTIONS(230),
    [anon_sym_58] = ACTIONS(230),
    [anon_sym_rows] = ACTIONS(230),
    [anon_sym_59] = ACTIONS(230),
    [anon_sym_repeat] = ACTIONS(230),
    [anon_sym_60] = ACTIONS(230),
    [anon_sym_dip] = ACTIONS(230),
    [anon_sym_di] = ACTIONS(233),
    [anon_sym_61] = ACTIONS(230),
    [anon_sym_gap] = ACTIONS(230),
    [anon_sym_ga] = ACTIONS(233),
    [anon_sym_62] = ACTIONS(230),
    [anon_sym_invert] = ACTIONS(230),
    [anon_sym_63] = ACTIONS(230),
    [anon_sym_spawn] = ACTIONS(230),
    [anon_sym_fold] = ACTIONS(236),
    [anon_sym_64] = ACTIONS(236),
    [anon_sym_distribute] = ACTIONS(236),
    [anon_sym_65] = ACTIONS(236),
    [anon_sym_table] = ACTIONS(236),
    [anon_sym_66] = ACTIONS(236),
    [anon_sym_cross] = ACTIONS(236),
    [anon_sym_67] = ACTIONS(236),
    [anon_sym_group] = ACTIONS(236),
    [anon_sym_68] = ACTIONS(236),
    [anon_sym_partition] = ACTIONS(236),
    [anon_sym_69] = ACTIONS(236),
    [anon_sym_both] = ACTIONS(236),
    [anon_sym_70] = ACTIONS(236),
    [anon_sym_bracket] = ACTIONS(236),
    [anon_sym_71] = ACTIONS(236),
    [anon_sym_fork] = ACTIONS(236),
    [anon_sym_72] = ACTIONS(236),
    [anon_sym_under] = ACTIONS(236),
    [anon_sym_73] = ACTIONS(236),
    [anon_sym_level] = ACTIONS(236),
    [anon_sym_74] = ACTIONS(236),
    [anon_sym_fill] = ACTIONS(236),
    [anon_sym_75] = ACTIONS(236),
    [anon_sym_bind] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_try] = ACTIONS(236),
    [anon_sym_76] = ACTIONS(236),
    [anon_sym_77] = ACTIONS(239),
    [anon_sym_78] = ACTIONS(239),
    [anon_sym_79] = ACTIONS(239),
    [anon_sym_80] = ACTIONS(239),
    [anon_sym_81] = ACTIONS(239),
    [anon_sym_82] = ACTIONS(239),
    [anon_sym_roll] = ACTIONS(239),
    [anon_sym_83] = ACTIONS(239),
    [anon_sym_unroll] = ACTIONS(239),
    [anon_sym_84] = ACTIONS(239),
    [anon_sym_restack] = ACTIONS(239),
    [anon_sym_85] = ACTIONS(239),
    [anon_sym_86] = ACTIONS(239),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [19] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(276),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [20] = {
    [sym_atom] = STATE(70),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [sym_closeBracket] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [21] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(6),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_closeParen] = ACTIONS(278),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [22] = {
    [sym_atom] = STATE(87),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(27),
    [aux_sym_array_repeat2] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_closeCurly] = ACTIONS(132),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [23] = {
    [sym_constant] = STATE(50),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [aux_sym_number_token1] = ACTIONS(183),
    [aux_sym_character_token1] = ACTIONS(181),
    [sym_multiLineString] = ACTIONS(181),
    [sym_signature] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_identifier_deprecated] = ACTIONS(183),
    [sym_system] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(181),
    [sym_closeParen] = ACTIONS(181),
    [sym_openCurly] = ACTIONS(181),
    [sym_openBracket] = ACTIONS(181),
    [sym_underscore] = ACTIONS(181),
    [anon_sym_eta] = ACTIONS(280),
    [anon_sym_2] = ACTIONS(282),
    [anon_sym_pi] = ACTIONS(282),
    [anon_sym_3] = ACTIONS(282),
    [anon_sym_tau] = ACTIONS(280),
    [anon_sym_4] = ACTIONS(282),
    [anon_sym_infinity] = ACTIONS(280),
    [anon_sym_5] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_identity] = ACTIONS(181),
    [anon_sym_id] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_7] = ACTIONS(181),
    [anon_sym_sign] = ACTIONS(181),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_absolutevalue] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_sqrt] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(181),
    [anon_sym_sine] = ACTIONS(181),
    [anon_sym_11] = ACTIONS(181),
    [anon_sym_floor] = ACTIONS(181),
    [anon_sym_12] = ACTIONS(181),
    [anon_sym_ceiling] = ACTIONS(181),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_round] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_16] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_17] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_18] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_19] = ACTIONS(181),
    [anon_sym_modulus] = ACTIONS(181),
    [anon_sym_20] = ACTIONS(181),
    [anon_sym_power] = ACTIONS(181),
    [anon_sym_21] = ACTIONS(181),
    [anon_sym_logarithm] = ACTIONS(181),
    [anon_sym_22] = ACTIONS(181),
    [anon_sym_minimum] = ACTIONS(181),
    [anon_sym_23] = ACTIONS(181),
    [anon_sym_maximum] = ACTIONS(181),
    [anon_sym_24] = ACTIONS(181),
    [anon_sym_atangent] = ACTIONS(181),
    [anon_sym_25] = ACTIONS(181),
    [anon_sym_length] = ACTIONS(181),
    [anon_sym_26] = ACTIONS(181),
    [anon_sym_shape] = ACTIONS(181),
    [anon_sym_27] = ACTIONS(181),
    [anon_sym_range] = ACTIONS(181),
    [anon_sym_28] = ACTIONS(181),
    [anon_sym_first] = ACTIONS(181),
    [anon_sym_29] = ACTIONS(181),
    [anon_sym_reverse] = ACTIONS(181),
    [anon_sym_30] = ACTIONS(181),
    [anon_sym_deshape] = ACTIONS(181),
    [anon_sym_31] = ACTIONS(181),
    [anon_sym_bits] = ACTIONS(181),
    [anon_sym_32] = ACTIONS(181),
    [anon_sym_transpose] = ACTIONS(181),
    [anon_sym_33] = ACTIONS(181),
    [anon_sym_rise] = ACTIONS(181),
    [anon_sym_34] = ACTIONS(181),
    [anon_sym_fall] = ACTIONS(181),
    [anon_sym_35] = ACTIONS(181),
    [anon_sym_classify] = ACTIONS(181),
    [anon_sym_36] = ACTIONS(181),
    [anon_sym_deduplicate] = ACTIONS(181),
    [anon_sym_37] = ACTIONS(181),
    [anon_sym_box] = ACTIONS(181),
    [anon_sym_38] = ACTIONS(181),
    [anon_sym_unbox] = ACTIONS(181),
    [anon_sym_39] = ACTIONS(181),
    [anon_sym_match] = ACTIONS(181),
    [anon_sym_40] = ACTIONS(181),
    [anon_sym_couple] = ACTIONS(181),
    [anon_sym_41] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_42] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_43] = ACTIONS(181),
    [anon_sym_pick] = ACTIONS(181),
    [anon_sym_44] = ACTIONS(181),
    [anon_sym_reshape] = ACTIONS(181),
    [anon_sym_45] = ACTIONS(181),
    [anon_sym_take] = ACTIONS(181),
    [anon_sym_46] = ACTIONS(181),
    [anon_sym_drop] = ACTIONS(181),
    [anon_sym_47] = ACTIONS(181),
    [anon_sym_rotate] = ACTIONS(181),
    [anon_sym_48] = ACTIONS(181),
    [anon_sym_windows] = ACTIONS(181),
    [anon_sym_49] = ACTIONS(181),
    [anon_sym_keep] = ACTIONS(181),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_find] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(181),
    [anon_sym_member] = ACTIONS(181),
    [anon_sym_52] = ACTIONS(181),
    [anon_sym_indexof] = ACTIONS(181),
    [anon_sym_53] = ACTIONS(181),
    [anon_sym_assert] = ACTIONS(181),
    [anon_sym_54] = ACTIONS(181),
    [anon_sym_wait] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_break] = ACTIONS(181),
    [anon_sym_55] = ACTIONS(181),
    [anon_sym_recur] = ACTIONS(181),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_random] = ACTIONS(181),
    [anon_sym_57] = ACTIONS(181),
    [anon_sym_gen] = ACTIONS(181),
    [anon_sym_deal] = ACTIONS(181),
    [anon_sym_use] = ACTIONS(181),
    [anon_sym_tag] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_sig] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_dump] = ACTIONS(181),
    [anon_sym_reduce] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_scan] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_each] = ACTIONS(181),
    [anon_sym_58] = ACTIONS(181),
    [anon_sym_rows] = ACTIONS(181),
    [anon_sym_59] = ACTIONS(181),
    [anon_sym_repeat] = ACTIONS(181),
    [anon_sym_60] = ACTIONS(181),
    [anon_sym_dip] = ACTIONS(181),
    [anon_sym_di] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(181),
    [anon_sym_gap] = ACTIONS(181),
    [anon_sym_ga] = ACTIONS(183),
    [anon_sym_62] = ACTIONS(181),
    [anon_sym_invert] = ACTIONS(181),
    [anon_sym_63] = ACTIONS(181),
    [anon_sym_spawn] = ACTIONS(181),
    [anon_sym_fold] = ACTIONS(181),
    [anon_sym_64] = ACTIONS(181),
    [anon_sym_distribute] = ACTIONS(181),
    [anon_sym_65] = ACTIONS(181),
    [anon_sym_table] = ACTIONS(181),
    [anon_sym_66] = ACTIONS(181),
    [anon_sym_cross] = ACTIONS(181),
    [anon_sym_67] = ACTIONS(181),
    [anon_sym_group] = ACTIONS(181),
    [anon_sym_68] = ACTIONS(181),
    [anon_sym_partition] = ACTIONS(181),
    [anon_sym_69] = ACTIONS(181),
    [anon_sym_both] = ACTIONS(181),
    [anon_sym_70] = ACTIONS(181),
    [anon_sym_bracket] = ACTIONS(181),
    [anon_sym_71] = ACTIONS(181),
    [anon_sym_fork] = ACTIONS(181),
    [anon_sym_72] = ACTIONS(181),
    [anon_sym_under] = ACTIONS(181),
    [anon_sym_73] = ACTIONS(181),
    [anon_sym_level] = ACTIONS(181),
    [anon_sym_74] = ACTIONS(181),
    [anon_sym_fill] = ACTIONS(181),
    [anon_sym_75] = ACTIONS(181),
    [anon_sym_bind] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_try] = ACTIONS(181),
    [anon_sym_76] = ACTIONS(181),
    [anon_sym_77] = ACTIONS(181),
    [anon_sym_78] = ACTIONS(181),
    [anon_sym_79] = ACTIONS(181),
    [anon_sym_80] = ACTIONS(181),
    [anon_sym_81] = ACTIONS(181),
    [anon_sym_82] = ACTIONS(181),
    [anon_sym_roll] = ACTIONS(181),
    [anon_sym_83] = ACTIONS(181),
    [anon_sym_unroll] = ACTIONS(181),
    [anon_sym_84] = ACTIONS(181),
    [anon_sym_restack] = ACTIONS(181),
    [anon_sym_85] = ACTIONS(181),
    [anon_sym_86] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [24] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(14),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [25] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(17),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [26] = {
    [sym_atom] = STATE(57),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_atom_repeat1] = STATE(21),
    [aux_sym_array_repeat1] = STATE(32),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [27] = {
    [sym_atom] = STATE(72),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(30),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [28] = {
    [sym_atom] = STATE(34),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_primitive] = STATE(47),
    [sym_function] = STATE(42),
    [sym_modifier1] = STATE(42),
    [sym_modifier2] = STATE(42),
    [sym_deprecated] = STATE(42),
    [aux_sym_array_repeat1] = STATE(31),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(11),
    [aux_sym_character_token1] = ACTIONS(13),
    [sym_multiLineString] = ACTIONS(15),
    [sym_signature] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_identifier_deprecated] = ACTIONS(17),
    [sym_system] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(21),
    [sym_openCurly] = ACTIONS(23),
    [sym_openBracket] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_identity] = ACTIONS(29),
    [anon_sym_id] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_sign] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_absolutevalue] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_sqrt] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(29),
    [anon_sym_sine] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(29),
    [anon_sym_floor] = ACTIONS(29),
    [anon_sym_12] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_13] = ACTIONS(29),
    [anon_sym_round] = ACTIONS(29),
    [anon_sym_14] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_15] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_16] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_17] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_18] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_19] = ACTIONS(29),
    [anon_sym_modulus] = ACTIONS(29),
    [anon_sym_20] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_21] = ACTIONS(29),
    [anon_sym_logarithm] = ACTIONS(29),
    [anon_sym_22] = ACTIONS(29),
    [anon_sym_minimum] = ACTIONS(29),
    [anon_sym_23] = ACTIONS(29),
    [anon_sym_maximum] = ACTIONS(29),
    [anon_sym_24] = ACTIONS(29),
    [anon_sym_atangent] = ACTIONS(29),
    [anon_sym_25] = ACTIONS(29),
    [anon_sym_length] = ACTIONS(29),
    [anon_sym_26] = ACTIONS(29),
    [anon_sym_shape] = ACTIONS(29),
    [anon_sym_27] = ACTIONS(29),
    [anon_sym_range] = ACTIONS(29),
    [anon_sym_28] = ACTIONS(29),
    [anon_sym_first] = ACTIONS(29),
    [anon_sym_29] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_30] = ACTIONS(29),
    [anon_sym_deshape] = ACTIONS(29),
    [anon_sym_31] = ACTIONS(29),
    [anon_sym_bits] = ACTIONS(29),
    [anon_sym_32] = ACTIONS(29),
    [anon_sym_transpose] = ACTIONS(29),
    [anon_sym_33] = ACTIONS(29),
    [anon_sym_rise] = ACTIONS(29),
    [anon_sym_34] = ACTIONS(29),
    [anon_sym_fall] = ACTIONS(29),
    [anon_sym_35] = ACTIONS(29),
    [anon_sym_classify] = ACTIONS(29),
    [anon_sym_36] = ACTIONS(29),
    [anon_sym_deduplicate] = ACTIONS(29),
    [anon_sym_37] = ACTIONS(29),
    [anon_sym_box] = ACTIONS(29),
    [anon_sym_38] = ACTIONS(29),
    [anon_sym_unbox] = ACTIONS(29),
    [anon_sym_39] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_40] = ACTIONS(29),
    [anon_sym_couple] = ACTIONS(29),
    [anon_sym_41] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(29),
    [anon_sym_42] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_43] = ACTIONS(29),
    [anon_sym_pick] = ACTIONS(29),
    [anon_sym_44] = ACTIONS(29),
    [anon_sym_reshape] = ACTIONS(29),
    [anon_sym_45] = ACTIONS(29),
    [anon_sym_take] = ACTIONS(29),
    [anon_sym_46] = ACTIONS(29),
    [anon_sym_drop] = ACTIONS(29),
    [anon_sym_47] = ACTIONS(29),
    [anon_sym_rotate] = ACTIONS(29),
    [anon_sym_48] = ACTIONS(29),
    [anon_sym_windows] = ACTIONS(29),
    [anon_sym_49] = ACTIONS(29),
    [anon_sym_keep] = ACTIONS(29),
    [anon_sym_50] = ACTIONS(29),
    [anon_sym_find] = ACTIONS(29),
    [anon_sym_51] = ACTIONS(29),
    [anon_sym_member] = ACTIONS(29),
    [anon_sym_52] = ACTIONS(29),
    [anon_sym_indexof] = ACTIONS(29),
    [anon_sym_53] = ACTIONS(29),
    [anon_sym_assert] = ACTIONS(29),
    [anon_sym_54] = ACTIONS(29),
    [anon_sym_wait] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_55] = ACTIONS(29),
    [anon_sym_recur] = ACTIONS(29),
    [anon_sym_56] = ACTIONS(29),
    [anon_sym_random] = ACTIONS(29),
    [anon_sym_57] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_deal] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_tag] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_sig] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_dump] = ACTIONS(29),
    [anon_sym_reduce] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_scan] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_each] = ACTIONS(33),
    [anon_sym_58] = ACTIONS(33),
    [anon_sym_rows] = ACTIONS(33),
    [anon_sym_59] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(33),
    [anon_sym_60] = ACTIONS(33),
    [anon_sym_dip] = ACTIONS(33),
    [anon_sym_di] = ACTIONS(35),
    [anon_sym_61] = ACTIONS(33),
    [anon_sym_gap] = ACTIONS(33),
    [anon_sym_ga] = ACTIONS(35),
    [anon_sym_62] = ACTIONS(33),
    [anon_sym_invert] = ACTIONS(33),
    [anon_sym_63] = ACTIONS(33),
    [anon_sym_spawn] = ACTIONS(33),
    [anon_sym_fold] = ACTIONS(37),
    [anon_sym_64] = ACTIONS(37),
    [anon_sym_distribute] = ACTIONS(37),
    [anon_sym_65] = ACTIONS(37),
    [anon_sym_table] = ACTIONS(37),
    [anon_sym_66] = ACTIONS(37),
    [anon_sym_cross] = ACTIONS(37),
    [anon_sym_67] = ACTIONS(37),
    [anon_sym_group] = ACTIONS(37),
    [anon_sym_68] = ACTIONS(37),
    [anon_sym_partition] = ACTIONS(37),
    [anon_sym_69] = ACTIONS(37),
    [anon_sym_both] = ACTIONS(37),
    [anon_sym_70] = ACTIONS(37),
    [anon_sym_bracket] = ACTIONS(37),
    [anon_sym_71] = ACTIONS(37),
    [anon_sym_fork] = ACTIONS(37),
    [anon_sym_72] = ACTIONS(37),
    [anon_sym_under] = ACTIONS(37),
    [anon_sym_73] = ACTIONS(37),
    [anon_sym_level] = ACTIONS(37),
    [anon_sym_74] = ACTIONS(37),
    [anon_sym_fill] = ACTIONS(37),
    [anon_sym_75] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(37),
    [anon_sym_76] = ACTIONS(37),
    [anon_sym_77] = ACTIONS(39),
    [anon_sym_78] = ACTIONS(39),
    [anon_sym_79] = ACTIONS(39),
    [anon_sym_80] = ACTIONS(39),
    [anon_sym_81] = ACTIONS(39),
    [anon_sym_82] = ACTIONS(39),
    [anon_sym_roll] = ACTIONS(39),
    [anon_sym_83] = ACTIONS(39),
    [anon_sym_unroll] = ACTIONS(39),
    [anon_sym_84] = ACTIONS(39),
    [anon_sym_restack] = ACTIONS(39),
    [anon_sym_85] = ACTIONS(39),
    [anon_sym_86] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [29] = {
    [sym_atom] = STATE(52),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_array_repeat1] = STATE(29),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [30] = {
    [sym_atom] = STATE(72),
    [sym_array] = STATE(86),
    [sym_number] = STATE(86),
    [sym_character] = STATE(86),
    [sym_primitive] = STATE(86),
    [sym_function] = STATE(79),
    [sym_modifier1] = STATE(79),
    [sym_modifier2] = STATE(79),
    [sym_deprecated] = STATE(79),
    [aux_sym_array_repeat1] = STATE(30),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_] = ACTIONS(102),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_character_token1] = ACTIONS(106),
    [sym_multiLineString] = ACTIONS(108),
    [sym_signature] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_identifier_deprecated] = ACTIONS(110),
    [sym_system] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(112),
    [sym_openCurly] = ACTIONS(114),
    [sym_openBracket] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_identity] = ACTIONS(120),
    [anon_sym_id] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_sign] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_absolutevalue] = ACTIONS(120),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_sine] = ACTIONS(120),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_floor] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(120),
    [anon_sym_ceiling] = ACTIONS(120),
    [anon_sym_13] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_19] = ACTIONS(120),
    [anon_sym_modulus] = ACTIONS(120),
    [anon_sym_20] = ACTIONS(120),
    [anon_sym_power] = ACTIONS(120),
    [anon_sym_21] = ACTIONS(120),
    [anon_sym_logarithm] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(120),
    [anon_sym_minimum] = ACTIONS(120),
    [anon_sym_23] = ACTIONS(120),
    [anon_sym_maximum] = ACTIONS(120),
    [anon_sym_24] = ACTIONS(120),
    [anon_sym_atangent] = ACTIONS(120),
    [anon_sym_25] = ACTIONS(120),
    [anon_sym_length] = ACTIONS(120),
    [anon_sym_26] = ACTIONS(120),
    [anon_sym_shape] = ACTIONS(120),
    [anon_sym_27] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_28] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_29] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_30] = ACTIONS(120),
    [anon_sym_deshape] = ACTIONS(120),
    [anon_sym_31] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_32] = ACTIONS(120),
    [anon_sym_transpose] = ACTIONS(120),
    [anon_sym_33] = ACTIONS(120),
    [anon_sym_rise] = ACTIONS(120),
    [anon_sym_34] = ACTIONS(120),
    [anon_sym_fall] = ACTIONS(120),
    [anon_sym_35] = ACTIONS(120),
    [anon_sym_classify] = ACTIONS(120),
    [anon_sym_36] = ACTIONS(120),
    [anon_sym_deduplicate] = ACTIONS(120),
    [anon_sym_37] = ACTIONS(120),
    [anon_sym_box] = ACTIONS(120),
    [anon_sym_38] = ACTIONS(120),
    [anon_sym_unbox] = ACTIONS(120),
    [anon_sym_39] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_40] = ACTIONS(120),
    [anon_sym_couple] = ACTIONS(120),
    [anon_sym_41] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_42] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_43] = ACTIONS(120),
    [anon_sym_pick] = ACTIONS(120),
    [anon_sym_44] = ACTIONS(120),
    [anon_sym_reshape] = ACTIONS(120),
    [anon_sym_45] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_46] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_47] = ACTIONS(120),
    [anon_sym_rotate] = ACTIONS(120),
    [anon_sym_48] = ACTIONS(120),
    [anon_sym_windows] = ACTIONS(120),
    [anon_sym_49] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_50] = ACTIONS(120),
    [anon_sym_find] = ACTIONS(120),
    [anon_sym_51] = ACTIONS(120),
    [anon_sym_member] = ACTIONS(120),
    [anon_sym_52] = ACTIONS(120),
    [anon_sym_indexof] = ACTIONS(120),
    [anon_sym_53] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_54] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_55] = ACTIONS(120),
    [anon_sym_recur] = ACTIONS(120),
    [anon_sym_56] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_57] = ACTIONS(120),
    [anon_sym_gen] = ACTIONS(120),
    [anon_sym_deal] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(120),
    [anon_sym_tag] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_sig] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_dump] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_scan] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_each] = ACTIONS(124),
    [anon_sym_58] = ACTIONS(124),
    [anon_sym_rows] = ACTIONS(124),
    [anon_sym_59] = ACTIONS(124),
    [anon_sym_repeat] = ACTIONS(124),
    [anon_sym_60] = ACTIONS(124),
    [anon_sym_dip] = ACTIONS(124),
    [anon_sym_di] = ACTIONS(126),
    [anon_sym_61] = ACTIONS(124),
    [anon_sym_gap] = ACTIONS(124),
    [anon_sym_ga] = ACTIONS(126),
    [anon_sym_62] = ACTIONS(124),
    [anon_sym_invert] = ACTIONS(124),
    [anon_sym_63] = ACTIONS(124),
    [anon_sym_spawn] = ACTIONS(124),
    [anon_sym_fold] = ACTIONS(128),
    [anon_sym_64] = ACTIONS(128),
    [anon_sym_distribute] = ACTIONS(128),
    [anon_sym_65] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_66] = ACTIONS(128),
    [anon_sym_cross] = ACTIONS(128),
    [anon_sym_67] = ACTIONS(128),
    [anon_sym_group] = ACTIONS(128),
    [anon_sym_68] = ACTIONS(128),
    [anon_sym_partition] = ACTIONS(128),
    [anon_sym_69] = ACTIONS(128),
    [anon_sym_both] = ACTIONS(128),
    [anon_sym_70] = ACTIONS(128),
    [anon_sym_bracket] = ACTIONS(128),
    [anon_sym_71] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(128),
    [anon_sym_72] = ACTIONS(128),
    [anon_sym_under] = ACTIONS(128),
    [anon_sym_73] = ACTIONS(128),
    [anon_sym_level] = ACTIONS(128),
    [anon_sym_74] = ACTIONS(128),
    [anon_sym_fill] = ACTIONS(128),
    [anon_sym_75] = ACTIONS(128),
    [anon_sym_bind] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_76] = ACTIONS(128),
    [anon_sym_77] = ACTIONS(130),
    [anon_sym_78] = ACTIONS(130),
    [anon_sym_79] = ACTIONS(130),
    [anon_sym_80] = ACTIONS(130),
    [anon_sym_81] = ACTIONS(130),
    [anon_sym_82] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_83] = ACTIONS(130),
    [anon_sym_unroll] = ACTIONS(130),
    [anon_sym_84] = ACTIONS(130),
    [anon_sym_restack] = ACTIONS(130),
    [anon_sym_85] = ACTIONS(130),
    [anon_sym_86] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [31] = {
    [sym_atom] = STATE(34),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_primitive] = STATE(47),
    [sym_function] = STATE(42),
    [sym_modifier1] = STATE(42),
    [sym_modifier2] = STATE(42),
    [sym_deprecated] = STATE(42),
    [aux_sym_array_repeat1] = STATE(31),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(11),
    [aux_sym_character_token1] = ACTIONS(13),
    [sym_multiLineString] = ACTIONS(15),
    [sym_signature] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_identifier_deprecated] = ACTIONS(17),
    [sym_system] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(21),
    [sym_openCurly] = ACTIONS(23),
    [sym_openBracket] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_identity] = ACTIONS(29),
    [anon_sym_id] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_sign] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_absolutevalue] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(29),
    [anon_sym_sqrt] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(29),
    [anon_sym_sine] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(29),
    [anon_sym_floor] = ACTIONS(29),
    [anon_sym_12] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_13] = ACTIONS(29),
    [anon_sym_round] = ACTIONS(29),
    [anon_sym_14] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_15] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_16] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_17] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_18] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_19] = ACTIONS(29),
    [anon_sym_modulus] = ACTIONS(29),
    [anon_sym_20] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_21] = ACTIONS(29),
    [anon_sym_logarithm] = ACTIONS(29),
    [anon_sym_22] = ACTIONS(29),
    [anon_sym_minimum] = ACTIONS(29),
    [anon_sym_23] = ACTIONS(29),
    [anon_sym_maximum] = ACTIONS(29),
    [anon_sym_24] = ACTIONS(29),
    [anon_sym_atangent] = ACTIONS(29),
    [anon_sym_25] = ACTIONS(29),
    [anon_sym_length] = ACTIONS(29),
    [anon_sym_26] = ACTIONS(29),
    [anon_sym_shape] = ACTIONS(29),
    [anon_sym_27] = ACTIONS(29),
    [anon_sym_range] = ACTIONS(29),
    [anon_sym_28] = ACTIONS(29),
    [anon_sym_first] = ACTIONS(29),
    [anon_sym_29] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_30] = ACTIONS(29),
    [anon_sym_deshape] = ACTIONS(29),
    [anon_sym_31] = ACTIONS(29),
    [anon_sym_bits] = ACTIONS(29),
    [anon_sym_32] = ACTIONS(29),
    [anon_sym_transpose] = ACTIONS(29),
    [anon_sym_33] = ACTIONS(29),
    [anon_sym_rise] = ACTIONS(29),
    [anon_sym_34] = ACTIONS(29),
    [anon_sym_fall] = ACTIONS(29),
    [anon_sym_35] = ACTIONS(29),
    [anon_sym_classify] = ACTIONS(29),
    [anon_sym_36] = ACTIONS(29),
    [anon_sym_deduplicate] = ACTIONS(29),
    [anon_sym_37] = ACTIONS(29),
    [anon_sym_box] = ACTIONS(29),
    [anon_sym_38] = ACTIONS(29),
    [anon_sym_unbox] = ACTIONS(29),
    [anon_sym_39] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_40] = ACTIONS(29),
    [anon_sym_couple] = ACTIONS(29),
    [anon_sym_41] = ACTIONS(29),
    [anon_sym_join] = ACTIONS(29),
    [anon_sym_42] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_43] = ACTIONS(29),
    [anon_sym_pick] = ACTIONS(29),
    [anon_sym_44] = ACTIONS(29),
    [anon_sym_reshape] = ACTIONS(29),
    [anon_sym_45] = ACTIONS(29),
    [anon_sym_take] = ACTIONS(29),
    [anon_sym_46] = ACTIONS(29),
    [anon_sym_drop] = ACTIONS(29),
    [anon_sym_47] = ACTIONS(29),
    [anon_sym_rotate] = ACTIONS(29),
    [anon_sym_48] = ACTIONS(29),
    [anon_sym_windows] = ACTIONS(29),
    [anon_sym_49] = ACTIONS(29),
    [anon_sym_keep] = ACTIONS(29),
    [anon_sym_50] = ACTIONS(29),
    [anon_sym_find] = ACTIONS(29),
    [anon_sym_51] = ACTIONS(29),
    [anon_sym_member] = ACTIONS(29),
    [anon_sym_52] = ACTIONS(29),
    [anon_sym_indexof] = ACTIONS(29),
    [anon_sym_53] = ACTIONS(29),
    [anon_sym_assert] = ACTIONS(29),
    [anon_sym_54] = ACTIONS(29),
    [anon_sym_wait] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_55] = ACTIONS(29),
    [anon_sym_recur] = ACTIONS(29),
    [anon_sym_56] = ACTIONS(29),
    [anon_sym_random] = ACTIONS(29),
    [anon_sym_57] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_deal] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_tag] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_sig] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_dump] = ACTIONS(29),
    [anon_sym_reduce] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_scan] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_each] = ACTIONS(33),
    [anon_sym_58] = ACTIONS(33),
    [anon_sym_rows] = ACTIONS(33),
    [anon_sym_59] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(33),
    [anon_sym_60] = ACTIONS(33),
    [anon_sym_dip] = ACTIONS(33),
    [anon_sym_di] = ACTIONS(35),
    [anon_sym_61] = ACTIONS(33),
    [anon_sym_gap] = ACTIONS(33),
    [anon_sym_ga] = ACTIONS(35),
    [anon_sym_62] = ACTIONS(33),
    [anon_sym_invert] = ACTIONS(33),
    [anon_sym_63] = ACTIONS(33),
    [anon_sym_spawn] = ACTIONS(33),
    [anon_sym_fold] = ACTIONS(37),
    [anon_sym_64] = ACTIONS(37),
    [anon_sym_distribute] = ACTIONS(37),
    [anon_sym_65] = ACTIONS(37),
    [anon_sym_table] = ACTIONS(37),
    [anon_sym_66] = ACTIONS(37),
    [anon_sym_cross] = ACTIONS(37),
    [anon_sym_67] = ACTIONS(37),
    [anon_sym_group] = ACTIONS(37),
    [anon_sym_68] = ACTIONS(37),
    [anon_sym_partition] = ACTIONS(37),
    [anon_sym_69] = ACTIONS(37),
    [anon_sym_both] = ACTIONS(37),
    [anon_sym_70] = ACTIONS(37),
    [anon_sym_bracket] = ACTIONS(37),
    [anon_sym_71] = ACTIONS(37),
    [anon_sym_fork] = ACTIONS(37),
    [anon_sym_72] = ACTIONS(37),
    [anon_sym_under] = ACTIONS(37),
    [anon_sym_73] = ACTIONS(37),
    [anon_sym_level] = ACTIONS(37),
    [anon_sym_74] = ACTIONS(37),
    [anon_sym_fill] = ACTIONS(37),
    [anon_sym_75] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(37),
    [anon_sym_76] = ACTIONS(37),
    [anon_sym_77] = ACTIONS(39),
    [anon_sym_78] = ACTIONS(39),
    [anon_sym_79] = ACTIONS(39),
    [anon_sym_80] = ACTIONS(39),
    [anon_sym_81] = ACTIONS(39),
    [anon_sym_82] = ACTIONS(39),
    [anon_sym_roll] = ACTIONS(39),
    [anon_sym_83] = ACTIONS(39),
    [anon_sym_unroll] = ACTIONS(39),
    [anon_sym_84] = ACTIONS(39),
    [anon_sym_restack] = ACTIONS(39),
    [anon_sym_85] = ACTIONS(39),
    [anon_sym_86] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [32] = {
    [sym_atom] = STATE(52),
    [sym_array] = STATE(60),
    [sym_number] = STATE(60),
    [sym_character] = STATE(60),
    [sym_primitive] = STATE(60),
    [sym_function] = STATE(53),
    [sym_modifier1] = STATE(53),
    [sym_modifier2] = STATE(53),
    [sym_deprecated] = STATE(53),
    [aux_sym_array_repeat1] = STATE(29),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_] = ACTIONS(244),
    [aux_sym_number_token1] = ACTIONS(246),
    [aux_sym_character_token1] = ACTIONS(248),
    [sym_multiLineString] = ACTIONS(250),
    [sym_signature] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [sym_identifier_deprecated] = ACTIONS(252),
    [sym_system] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(254),
    [sym_openCurly] = ACTIONS(258),
    [sym_openBracket] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_identity] = ACTIONS(262),
    [anon_sym_id] = ACTIONS(264),
    [anon_sym_6] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_7] = ACTIONS(262),
    [anon_sym_sign] = ACTIONS(262),
    [anon_sym_8] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_absolutevalue] = ACTIONS(262),
    [anon_sym_9] = ACTIONS(262),
    [anon_sym_sqrt] = ACTIONS(262),
    [anon_sym_10] = ACTIONS(262),
    [anon_sym_sine] = ACTIONS(262),
    [anon_sym_11] = ACTIONS(262),
    [anon_sym_floor] = ACTIONS(262),
    [anon_sym_12] = ACTIONS(262),
    [anon_sym_ceiling] = ACTIONS(262),
    [anon_sym_13] = ACTIONS(262),
    [anon_sym_round] = ACTIONS(262),
    [anon_sym_14] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_15] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_16] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_17] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_18] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_19] = ACTIONS(262),
    [anon_sym_modulus] = ACTIONS(262),
    [anon_sym_20] = ACTIONS(262),
    [anon_sym_power] = ACTIONS(262),
    [anon_sym_21] = ACTIONS(262),
    [anon_sym_logarithm] = ACTIONS(262),
    [anon_sym_22] = ACTIONS(262),
    [anon_sym_minimum] = ACTIONS(262),
    [anon_sym_23] = ACTIONS(262),
    [anon_sym_maximum] = ACTIONS(262),
    [anon_sym_24] = ACTIONS(262),
    [anon_sym_atangent] = ACTIONS(262),
    [anon_sym_25] = ACTIONS(262),
    [anon_sym_length] = ACTIONS(262),
    [anon_sym_26] = ACTIONS(262),
    [anon_sym_shape] = ACTIONS(262),
    [anon_sym_27] = ACTIONS(262),
    [anon_sym_range] = ACTIONS(262),
    [anon_sym_28] = ACTIONS(262),
    [anon_sym_first] = ACTIONS(262),
    [anon_sym_29] = ACTIONS(262),
    [anon_sym_reverse] = ACTIONS(262),
    [anon_sym_30] = ACTIONS(262),
    [anon_sym_deshape] = ACTIONS(262),
    [anon_sym_31] = ACTIONS(262),
    [anon_sym_bits] = ACTIONS(262),
    [anon_sym_32] = ACTIONS(262),
    [anon_sym_transpose] = ACTIONS(262),
    [anon_sym_33] = ACTIONS(262),
    [anon_sym_rise] = ACTIONS(262),
    [anon_sym_34] = ACTIONS(262),
    [anon_sym_fall] = ACTIONS(262),
    [anon_sym_35] = ACTIONS(262),
    [anon_sym_classify] = ACTIONS(262),
    [anon_sym_36] = ACTIONS(262),
    [anon_sym_deduplicate] = ACTIONS(262),
    [anon_sym_37] = ACTIONS(262),
    [anon_sym_box] = ACTIONS(262),
    [anon_sym_38] = ACTIONS(262),
    [anon_sym_unbox] = ACTIONS(262),
    [anon_sym_39] = ACTIONS(262),
    [anon_sym_match] = ACTIONS(262),
    [anon_sym_40] = ACTIONS(262),
    [anon_sym_couple] = ACTIONS(262),
    [anon_sym_41] = ACTIONS(262),
    [anon_sym_join] = ACTIONS(262),
    [anon_sym_42] = ACTIONS(262),
    [anon_sym_select] = ACTIONS(262),
    [anon_sym_43] = ACTIONS(262),
    [anon_sym_pick] = ACTIONS(262),
    [anon_sym_44] = ACTIONS(262),
    [anon_sym_reshape] = ACTIONS(262),
    [anon_sym_45] = ACTIONS(262),
    [anon_sym_take] = ACTIONS(262),
    [anon_sym_46] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(262),
    [anon_sym_47] = ACTIONS(262),
    [anon_sym_rotate] = ACTIONS(262),
    [anon_sym_48] = ACTIONS(262),
    [anon_sym_windows] = ACTIONS(262),
    [anon_sym_49] = ACTIONS(262),
    [anon_sym_keep] = ACTIONS(262),
    [anon_sym_50] = ACTIONS(262),
    [anon_sym_find] = ACTIONS(262),
    [anon_sym_51] = ACTIONS(262),
    [anon_sym_member] = ACTIONS(262),
    [anon_sym_52] = ACTIONS(262),
    [anon_sym_indexof] = ACTIONS(262),
    [anon_sym_53] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(262),
    [anon_sym_54] = ACTIONS(262),
    [anon_sym_wait] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_55] = ACTIONS(262),
    [anon_sym_recur] = ACTIONS(262),
    [anon_sym_56] = ACTIONS(262),
    [anon_sym_random] = ACTIONS(262),
    [anon_sym_57] = ACTIONS(262),
    [anon_sym_gen] = ACTIONS(262),
    [anon_sym_deal] = ACTIONS(262),
    [anon_sym_use] = ACTIONS(262),
    [anon_sym_tag] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(262),
    [anon_sym_sig] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_dump] = ACTIONS(262),
    [anon_sym_reduce] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_scan] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_each] = ACTIONS(266),
    [anon_sym_58] = ACTIONS(266),
    [anon_sym_rows] = ACTIONS(266),
    [anon_sym_59] = ACTIONS(266),
    [anon_sym_repeat] = ACTIONS(266),
    [anon_sym_60] = ACTIONS(266),
    [anon_sym_dip] = ACTIONS(266),
    [anon_sym_di] = ACTIONS(268),
    [anon_sym_61] = ACTIONS(266),
    [anon_sym_gap] = ACTIONS(266),
    [anon_sym_ga] = ACTIONS(268),
    [anon_sym_62] = ACTIONS(266),
    [anon_sym_invert] = ACTIONS(266),
    [anon_sym_63] = ACTIONS(266),
    [anon_sym_spawn] = ACTIONS(266),
    [anon_sym_fold] = ACTIONS(270),
    [anon_sym_64] = ACTIONS(270),
    [anon_sym_distribute] = ACTIONS(270),
    [anon_sym_65] = ACTIONS(270),
    [anon_sym_table] = ACTIONS(270),
    [anon_sym_66] = ACTIONS(270),
    [anon_sym_cross] = ACTIONS(270),
    [anon_sym_67] = ACTIONS(270),
    [anon_sym_group] = ACTIONS(270),
    [anon_sym_68] = ACTIONS(270),
    [anon_sym_partition] = ACTIONS(270),
    [anon_sym_69] = ACTIONS(270),
    [anon_sym_both] = ACTIONS(270),
    [anon_sym_70] = ACTIONS(270),
    [anon_sym_bracket] = ACTIONS(270),
    [anon_sym_71] = ACTIONS(270),
    [anon_sym_fork] = ACTIONS(270),
    [anon_sym_72] = ACTIONS(270),
    [anon_sym_under] = ACTIONS(270),
    [anon_sym_73] = ACTIONS(270),
    [anon_sym_level] = ACTIONS(270),
    [anon_sym_74] = ACTIONS(270),
    [anon_sym_fill] = ACTIONS(270),
    [anon_sym_75] = ACTIONS(270),
    [anon_sym_bind] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_try] = ACTIONS(270),
    [anon_sym_76] = ACTIONS(270),
    [anon_sym_77] = ACTIONS(272),
    [anon_sym_78] = ACTIONS(272),
    [anon_sym_79] = ACTIONS(272),
    [anon_sym_80] = ACTIONS(272),
    [anon_sym_81] = ACTIONS(272),
    [anon_sym_82] = ACTIONS(272),
    [anon_sym_roll] = ACTIONS(272),
    [anon_sym_83] = ACTIONS(272),
    [anon_sym_unroll] = ACTIONS(272),
    [anon_sym_84] = ACTIONS(272),
    [anon_sym_restack] = ACTIONS(272),
    [anon_sym_85] = ACTIONS(272),
    [anon_sym_86] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [anon_sym_] = ACTIONS(286),
    [aux_sym_number_token1] = ACTIONS(284),
    [aux_sym_character_token1] = ACTIONS(284),
    [sym_multiLineString] = ACTIONS(284),
    [sym_signature] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_identifier_deprecated] = ACTIONS(286),
    [sym_system] = ACTIONS(284),
    [sym_comment] = ACTIONS(286),
    [sym_openParen] = ACTIONS(284),
    [sym_openCurly] = ACTIONS(284),
    [sym_openBracket] = ACTIONS(284),
    [sym_underscore] = ACTIONS(284),
    [sym_leftArrow] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_identity] = ACTIONS(284),
    [anon_sym_id] = ACTIONS(286),
    [anon_sym_6] = ACTIONS(284),
    [anon_sym_not] = ACTIONS(284),
    [anon_sym_7] = ACTIONS(284),
    [anon_sym_sign] = ACTIONS(284),
    [anon_sym_8] = ACTIONS(284),
    [anon_sym_BQUOTE] = ACTIONS(284),
    [anon_sym_absolutevalue] = ACTIONS(284),
    [anon_sym_9] = ACTIONS(284),
    [anon_sym_sqrt] = ACTIONS(284),
    [anon_sym_10] = ACTIONS(284),
    [anon_sym_sine] = ACTIONS(284),
    [anon_sym_11] = ACTIONS(284),
    [anon_sym_floor] = ACTIONS(284),
    [anon_sym_12] = ACTIONS(284),
    [anon_sym_ceiling] = ACTIONS(284),
    [anon_sym_13] = ACTIONS(284),
    [anon_sym_round] = ACTIONS(284),
    [anon_sym_14] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_15] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [anon_sym_16] = ACTIONS(284),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_17] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_18] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_19] = ACTIONS(284),
    [anon_sym_modulus] = ACTIONS(284),
    [anon_sym_20] = ACTIONS(284),
    [anon_sym_power] = ACTIONS(284),
    [anon_sym_21] = ACTIONS(284),
    [anon_sym_logarithm] = ACTIONS(284),
    [anon_sym_22] = ACTIONS(284),
    [anon_sym_minimum] = ACTIONS(284),
    [anon_sym_23] = ACTIONS(284),
    [anon_sym_maximum] = ACTIONS(284),
    [anon_sym_24] = ACTIONS(284),
    [anon_sym_atangent] = ACTIONS(284),
    [anon_sym_25] = ACTIONS(284),
    [anon_sym_length] = ACTIONS(284),
    [anon_sym_26] = ACTIONS(284),
    [anon_sym_shape] = ACTIONS(284),
    [anon_sym_27] = ACTIONS(284),
    [anon_sym_range] = ACTIONS(284),
    [anon_sym_28] = ACTIONS(284),
    [anon_sym_first] = ACTIONS(284),
    [anon_sym_29] = ACTIONS(284),
    [anon_sym_reverse] = ACTIONS(284),
    [anon_sym_30] = ACTIONS(284),
    [anon_sym_deshape] = ACTIONS(284),
    [anon_sym_31] = ACTIONS(284),
    [anon_sym_bits] = ACTIONS(284),
    [anon_sym_32] = ACTIONS(284),
    [anon_sym_transpose] = ACTIONS(284),
    [anon_sym_33] = ACTIONS(284),
    [anon_sym_rise] = ACTIONS(284),
    [anon_sym_34] = ACTIONS(284),
    [anon_sym_fall] = ACTIONS(284),
    [anon_sym_35] = ACTIONS(284),
    [anon_sym_classify] = ACTIONS(284),
    [anon_sym_36] = ACTIONS(284),
    [anon_sym_deduplicate] = ACTIONS(284),
    [anon_sym_37] = ACTIONS(284),
    [anon_sym_box] = ACTIONS(284),
    [anon_sym_38] = ACTIONS(284),
    [anon_sym_unbox] = ACTIONS(284),
    [anon_sym_39] = ACTIONS(284),
    [anon_sym_match] = ACTIONS(284),
    [anon_sym_40] = ACTIONS(284),
    [anon_sym_couple] = ACTIONS(284),
    [anon_sym_41] = ACTIONS(284),
    [anon_sym_join] = ACTIONS(284),
    [anon_sym_42] = ACTIONS(284),
    [anon_sym_select] = ACTIONS(284),
    [anon_sym_43] = ACTIONS(284),
    [anon_sym_pick] = ACTIONS(284),
    [anon_sym_44] = ACTIONS(284),
    [anon_sym_reshape] = ACTIONS(284),
    [anon_sym_45] = ACTIONS(284),
    [anon_sym_take] = ACTIONS(284),
    [anon_sym_46] = ACTIONS(284),
    [anon_sym_drop] = ACTIONS(284),
    [anon_sym_47] = ACTIONS(284),
    [anon_sym_rotate] = ACTIONS(284),
    [anon_sym_48] = ACTIONS(284),
    [anon_sym_windows] = ACTIONS(284),
    [anon_sym_49] = ACTIONS(284),
    [anon_sym_keep] = ACTIONS(284),
    [anon_sym_50] = ACTIONS(284),
    [anon_sym_find] = ACTIONS(284),
    [anon_sym_51] = ACTIONS(284),
    [anon_sym_member] = ACTIONS(284),
    [anon_sym_52] = ACTIONS(284),
    [anon_sym_indexof] = ACTIONS(284),
    [anon_sym_53] = ACTIONS(284),
    [anon_sym_assert] = ACTIONS(284),
    [anon_sym_54] = ACTIONS(284),
    [anon_sym_wait] = ACTIONS(284),
    [anon_sym_BANG] = ACTIONS(286),
    [anon_sym_break] = ACTIONS(284),
    [anon_sym_55] = ACTIONS(284),
    [anon_sym_recur] = ACTIONS(284),
    [anon_sym_56] = ACTIONS(284),
    [anon_sym_random] = ACTIONS(284),
    [anon_sym_57] = ACTIONS(284),
    [anon_sym_gen] = ACTIONS(284),
    [anon_sym_deal] = ACTIONS(284),
    [anon_sym_use] = ACTIONS(284),
    [anon_sym_tag] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_sig] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_dump] = ACTIONS(284),
    [anon_sym_reduce] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [anon_sym_scan] = ACTIONS(284),
    [anon_sym_BSLASH] = ACTIONS(284),
    [anon_sym_each] = ACTIONS(284),
    [anon_sym_58] = ACTIONS(284),
    [anon_sym_rows] = ACTIONS(284),
    [anon_sym_59] = ACTIONS(284),
    [anon_sym_repeat] = ACTIONS(284),
    [anon_sym_60] = ACTIONS(284),
    [anon_sym_dip] = ACTIONS(284),
    [anon_sym_di] = ACTIONS(286),
    [anon_sym_61] = ACTIONS(284),
    [anon_sym_gap] = ACTIONS(284),
    [anon_sym_ga] = ACTIONS(286),
    [anon_sym_62] = ACTIONS(284),
    [anon_sym_invert] = ACTIONS(284),
    [anon_sym_63] = ACTIONS(284),
    [anon_sym_spawn] = ACTIONS(284),
    [anon_sym_fold] = ACTIONS(284),
    [anon_sym_64] = ACTIONS(284),
    [anon_sym_distribute] = ACTIONS(284),
    [anon_sym_65] = ACTIONS(284),
    [anon_sym_table] = ACTIONS(284),
    [anon_sym_66] = ACTIONS(284),
    [anon_sym_cross] = ACTIONS(284),
    [anon_sym_67] = ACTIONS(284),
    [anon_sym_group] = ACTIONS(284),
    [anon_sym_68] = ACTIONS(284),
    [anon_sym_partition] = ACTIONS(284),
    [anon_sym_69] = ACTIONS(284),
    [anon_sym_both] = ACTIONS(284),
    [anon_sym_70] = ACTIONS(284),
    [anon_sym_bracket] = ACTIONS(284),
    [anon_sym_71] = ACTIONS(284),
    [anon_sym_fork] = ACTIONS(284),
    [anon_sym_72] = ACTIONS(284),
    [anon_sym_under] = ACTIONS(284),
    [anon_sym_73] = ACTIONS(284),
    [anon_sym_level] = ACTIONS(284),
    [anon_sym_74] = ACTIONS(284),
    [anon_sym_fill] = ACTIONS(284),
    [anon_sym_75] = ACTIONS(284),
    [anon_sym_bind] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_try] = ACTIONS(284),
    [anon_sym_76] = ACTIONS(284),
    [anon_sym_77] = ACTIONS(284),
    [anon_sym_78] = ACTIONS(284),
    [anon_sym_79] = ACTIONS(284),
    [anon_sym_80] = ACTIONS(284),
    [anon_sym_81] = ACTIONS(284),
    [anon_sym_82] = ACTIONS(284),
    [anon_sym_roll] = ACTIONS(284),
    [anon_sym_83] = ACTIONS(284),
    [anon_sym_unroll] = ACTIONS(284),
    [anon_sym_84] = ACTIONS(284),
    [anon_sym_restack] = ACTIONS(284),
    [anon_sym_85] = ACTIONS(284),
    [anon_sym_86] = ACTIONS(284),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(284),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_] = ACTIONS(290),
    [aux_sym_number_token1] = ACTIONS(288),
    [aux_sym_character_token1] = ACTIONS(288),
    [sym_multiLineString] = ACTIONS(288),
    [sym_signature] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_identifier_deprecated] = ACTIONS(290),
    [sym_system] = ACTIONS(288),
    [sym_comment] = ACTIONS(290),
    [sym_openParen] = ACTIONS(288),
    [sym_openCurly] = ACTIONS(288),
    [sym_openBracket] = ACTIONS(288),
    [sym_underscore] = ACTIONS(288),
    [sym_leftArrow] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_identity] = ACTIONS(288),
    [anon_sym_id] = ACTIONS(290),
    [anon_sym_6] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_7] = ACTIONS(288),
    [anon_sym_sign] = ACTIONS(288),
    [anon_sym_8] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_absolutevalue] = ACTIONS(288),
    [anon_sym_9] = ACTIONS(288),
    [anon_sym_sqrt] = ACTIONS(288),
    [anon_sym_10] = ACTIONS(288),
    [anon_sym_sine] = ACTIONS(288),
    [anon_sym_11] = ACTIONS(288),
    [anon_sym_floor] = ACTIONS(288),
    [anon_sym_12] = ACTIONS(288),
    [anon_sym_ceiling] = ACTIONS(288),
    [anon_sym_13] = ACTIONS(288),
    [anon_sym_round] = ACTIONS(288),
    [anon_sym_14] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_15] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_16] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_17] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_18] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_19] = ACTIONS(288),
    [anon_sym_modulus] = ACTIONS(288),
    [anon_sym_20] = ACTIONS(288),
    [anon_sym_power] = ACTIONS(288),
    [anon_sym_21] = ACTIONS(288),
    [anon_sym_logarithm] = ACTIONS(288),
    [anon_sym_22] = ACTIONS(288),
    [anon_sym_minimum] = ACTIONS(288),
    [anon_sym_23] = ACTIONS(288),
    [anon_sym_maximum] = ACTIONS(288),
    [anon_sym_24] = ACTIONS(288),
    [anon_sym_atangent] = ACTIONS(288),
    [anon_sym_25] = ACTIONS(288),
    [anon_sym_length] = ACTIONS(288),
    [anon_sym_26] = ACTIONS(288),
    [anon_sym_shape] = ACTIONS(288),
    [anon_sym_27] = ACTIONS(288),
    [anon_sym_range] = ACTIONS(288),
    [anon_sym_28] = ACTIONS(288),
    [anon_sym_first] = ACTIONS(288),
    [anon_sym_29] = ACTIONS(288),
    [anon_sym_reverse] = ACTIONS(288),
    [anon_sym_30] = ACTIONS(288),
    [anon_sym_deshape] = ACTIONS(288),
    [anon_sym_31] = ACTIONS(288),
    [anon_sym_bits] = ACTIONS(288),
    [anon_sym_32] = ACTIONS(288),
    [anon_sym_transpose] = ACTIONS(288),
    [anon_sym_33] = ACTIONS(288),
    [anon_sym_rise] = ACTIONS(288),
    [anon_sym_34] = ACTIONS(288),
    [anon_sym_fall] = ACTIONS(288),
    [anon_sym_35] = ACTIONS(288),
    [anon_sym_classify] = ACTIONS(288),
    [anon_sym_36] = ACTIONS(288),
    [anon_sym_deduplicate] = ACTIONS(288),
    [anon_sym_37] = ACTIONS(288),
    [anon_sym_box] = ACTIONS(288),
    [anon_sym_38] = ACTIONS(288),
    [anon_sym_unbox] = ACTIONS(288),
    [anon_sym_39] = ACTIONS(288),
    [anon_sym_match] = ACTIONS(288),
    [anon_sym_40] = ACTIONS(288),
    [anon_sym_couple] = ACTIONS(288),
    [anon_sym_41] = ACTIONS(288),
    [anon_sym_join] = ACTIONS(288),
    [anon_sym_42] = ACTIONS(288),
    [anon_sym_select] = ACTIONS(288),
    [anon_sym_43] = ACTIONS(288),
    [anon_sym_pick] = ACTIONS(288),
    [anon_sym_44] = ACTIONS(288),
    [anon_sym_reshape] = ACTIONS(288),
    [anon_sym_45] = ACTIONS(288),
    [anon_sym_take] = ACTIONS(288),
    [anon_sym_46] = ACTIONS(288),
    [anon_sym_drop] = ACTIONS(288),
    [anon_sym_47] = ACTIONS(288),
    [anon_sym_rotate] = ACTIONS(288),
    [anon_sym_48] = ACTIONS(288),
    [anon_sym_windows] = ACTIONS(288),
    [anon_sym_49] = ACTIONS(288),
    [anon_sym_keep] = ACTIONS(288),
    [anon_sym_50] = ACTIONS(288),
    [anon_sym_find] = ACTIONS(288),
    [anon_sym_51] = ACTIONS(288),
    [anon_sym_member] = ACTIONS(288),
    [anon_sym_52] = ACTIONS(288),
    [anon_sym_indexof] = ACTIONS(288),
    [anon_sym_53] = ACTIONS(288),
    [anon_sym_assert] = ACTIONS(288),
    [anon_sym_54] = ACTIONS(288),
    [anon_sym_wait] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(288),
    [anon_sym_55] = ACTIONS(288),
    [anon_sym_recur] = ACTIONS(288),
    [anon_sym_56] = ACTIONS(288),
    [anon_sym_random] = ACTIONS(288),
    [anon_sym_57] = ACTIONS(288),
    [anon_sym_gen] = ACTIONS(288),
    [anon_sym_deal] = ACTIONS(288),
    [anon_sym_use] = ACTIONS(288),
    [anon_sym_tag] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_sig] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_dump] = ACTIONS(288),
    [anon_sym_reduce] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_scan] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_each] = ACTIONS(288),
    [anon_sym_58] = ACTIONS(288),
    [anon_sym_rows] = ACTIONS(288),
    [anon_sym_59] = ACTIONS(288),
    [anon_sym_repeat] = ACTIONS(288),
    [anon_sym_60] = ACTIONS(288),
    [anon_sym_dip] = ACTIONS(288),
    [anon_sym_di] = ACTIONS(290),
    [anon_sym_61] = ACTIONS(288),
    [anon_sym_gap] = ACTIONS(288),
    [anon_sym_ga] = ACTIONS(290),
    [anon_sym_62] = ACTIONS(288),
    [anon_sym_invert] = ACTIONS(288),
    [anon_sym_63] = ACTIONS(288),
    [anon_sym_spawn] = ACTIONS(288),
    [anon_sym_fold] = ACTIONS(288),
    [anon_sym_64] = ACTIONS(288),
    [anon_sym_distribute] = ACTIONS(288),
    [anon_sym_65] = ACTIONS(288),
    [anon_sym_table] = ACTIONS(288),
    [anon_sym_66] = ACTIONS(288),
    [anon_sym_cross] = ACTIONS(288),
    [anon_sym_67] = ACTIONS(288),
    [anon_sym_group] = ACTIONS(288),
    [anon_sym_68] = ACTIONS(288),
    [anon_sym_partition] = ACTIONS(288),
    [anon_sym_69] = ACTIONS(288),
    [anon_sym_both] = ACTIONS(288),
    [anon_sym_70] = ACTIONS(288),
    [anon_sym_bracket] = ACTIONS(288),
    [anon_sym_71] = ACTIONS(288),
    [anon_sym_fork] = ACTIONS(288),
    [anon_sym_72] = ACTIONS(288),
    [anon_sym_under] = ACTIONS(288),
    [anon_sym_73] = ACTIONS(288),
    [anon_sym_level] = ACTIONS(288),
    [anon_sym_74] = ACTIONS(288),
    [anon_sym_fill] = ACTIONS(288),
    [anon_sym_75] = ACTIONS(288),
    [anon_sym_bind] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_try] = ACTIONS(288),
    [anon_sym_76] = ACTIONS(288),
    [anon_sym_77] = ACTIONS(288),
    [anon_sym_78] = ACTIONS(288),
    [anon_sym_79] = ACTIONS(288),
    [anon_sym_80] = ACTIONS(288),
    [anon_sym_81] = ACTIONS(288),
    [anon_sym_82] = ACTIONS(288),
    [anon_sym_roll] = ACTIONS(288),
    [anon_sym_83] = ACTIONS(288),
    [anon_sym_unroll] = ACTIONS(288),
    [anon_sym_84] = ACTIONS(288),
    [anon_sym_restack] = ACTIONS(288),
    [anon_sym_85] = ACTIONS(288),
    [anon_sym_86] = ACTIONS(288),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(288),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_] = ACTIONS(294),
    [aux_sym_number_token1] = ACTIONS(292),
    [aux_sym_character_token1] = ACTIONS(292),
    [sym_multiLineString] = ACTIONS(292),
    [sym_signature] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
    [sym_identifier_deprecated] = ACTIONS(294),
    [sym_system] = ACTIONS(292),
    [sym_comment] = ACTIONS(294),
    [sym_openParen] = ACTIONS(292),
    [sym_openCurly] = ACTIONS(292),
    [sym_openBracket] = ACTIONS(292),
    [sym_underscore] = ACTIONS(292),
    [sym_leftArrow] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_COLON] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_identity] = ACTIONS(292),
    [anon_sym_id] = ACTIONS(294),
    [anon_sym_6] = ACTIONS(292),
    [anon_sym_not] = ACTIONS(292),
    [anon_sym_7] = ACTIONS(292),
    [anon_sym_sign] = ACTIONS(292),
    [anon_sym_8] = ACTIONS(292),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_absolutevalue] = ACTIONS(292),
    [anon_sym_9] = ACTIONS(292),
    [anon_sym_sqrt] = ACTIONS(292),
    [anon_sym_10] = ACTIONS(292),
    [anon_sym_sine] = ACTIONS(292),
    [anon_sym_11] = ACTIONS(292),
    [anon_sym_floor] = ACTIONS(292),
    [anon_sym_12] = ACTIONS(292),
    [anon_sym_ceiling] = ACTIONS(292),
    [anon_sym_13] = ACTIONS(292),
    [anon_sym_round] = ACTIONS(292),
    [anon_sym_14] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_15] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_16] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_17] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_18] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_19] = ACTIONS(292),
    [anon_sym_modulus] = ACTIONS(292),
    [anon_sym_20] = ACTIONS(292),
    [anon_sym_power] = ACTIONS(292),
    [anon_sym_21] = ACTIONS(292),
    [anon_sym_logarithm] = ACTIONS(292),
    [anon_sym_22] = ACTIONS(292),
    [anon_sym_minimum] = ACTIONS(292),
    [anon_sym_23] = ACTIONS(292),
    [anon_sym_maximum] = ACTIONS(292),
    [anon_sym_24] = ACTIONS(292),
    [anon_sym_atangent] = ACTIONS(292),
    [anon_sym_25] = ACTIONS(292),
    [anon_sym_length] = ACTIONS(292),
    [anon_sym_26] = ACTIONS(292),
    [anon_sym_shape] = ACTIONS(292),
    [anon_sym_27] = ACTIONS(292),
    [anon_sym_range] = ACTIONS(292),
    [anon_sym_28] = ACTIONS(292),
    [anon_sym_first] = ACTIONS(292),
    [anon_sym_29] = ACTIONS(292),
    [anon_sym_reverse] = ACTIONS(292),
    [anon_sym_30] = ACTIONS(292),
    [anon_sym_deshape] = ACTIONS(292),
    [anon_sym_31] = ACTIONS(292),
    [anon_sym_bits] = ACTIONS(292),
    [anon_sym_32] = ACTIONS(292),
    [anon_sym_transpose] = ACTIONS(292),
    [anon_sym_33] = ACTIONS(292),
    [anon_sym_rise] = ACTIONS(292),
    [anon_sym_34] = ACTIONS(292),
    [anon_sym_fall] = ACTIONS(292),
    [anon_sym_35] = ACTIONS(292),
    [anon_sym_classify] = ACTIONS(292),
    [anon_sym_36] = ACTIONS(292),
    [anon_sym_deduplicate] = ACTIONS(292),
    [anon_sym_37] = ACTIONS(292),
    [anon_sym_box] = ACTIONS(292),
    [anon_sym_38] = ACTIONS(292),
    [anon_sym_unbox] = ACTIONS(292),
    [anon_sym_39] = ACTIONS(292),
    [anon_sym_match] = ACTIONS(292),
    [anon_sym_40] = ACTIONS(292),
    [anon_sym_couple] = ACTIONS(292),
    [anon_sym_41] = ACTIONS(292),
    [anon_sym_join] = ACTIONS(292),
    [anon_sym_42] = ACTIONS(292),
    [anon_sym_select] = ACTIONS(292),
    [anon_sym_43] = ACTIONS(292),
    [anon_sym_pick] = ACTIONS(292),
    [anon_sym_44] = ACTIONS(292),
    [anon_sym_reshape] = ACTIONS(292),
    [anon_sym_45] = ACTIONS(292),
    [anon_sym_take] = ACTIONS(292),
    [anon_sym_46] = ACTIONS(292),
    [anon_sym_drop] = ACTIONS(292),
    [anon_sym_47] = ACTIONS(292),
    [anon_sym_rotate] = ACTIONS(292),
    [anon_sym_48] = ACTIONS(292),
    [anon_sym_windows] = ACTIONS(292),
    [anon_sym_49] = ACTIONS(292),
    [anon_sym_keep] = ACTIONS(292),
    [anon_sym_50] = ACTIONS(292),
    [anon_sym_find] = ACTIONS(292),
    [anon_sym_51] = ACTIONS(292),
    [anon_sym_member] = ACTIONS(292),
    [anon_sym_52] = ACTIONS(292),
    [anon_sym_indexof] = ACTIONS(292),
    [anon_sym_53] = ACTIONS(292),
    [anon_sym_assert] = ACTIONS(292),
    [anon_sym_54] = ACTIONS(292),
    [anon_sym_wait] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_break] = ACTIONS(292),
    [anon_sym_55] = ACTIONS(292),
    [anon_sym_recur] = ACTIONS(292),
    [anon_sym_56] = ACTIONS(292),
    [anon_sym_random] = ACTIONS(292),
    [anon_sym_57] = ACTIONS(292),
    [anon_sym_gen] = ACTIONS(292),
    [anon_sym_deal] = ACTIONS(292),
    [anon_sym_use] = ACTIONS(292),
    [anon_sym_tag] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(292),
    [anon_sym_sig] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_dump] = ACTIONS(292),
    [anon_sym_reduce] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_scan] = ACTIONS(292),
    [anon_sym_BSLASH] = ACTIONS(292),
    [anon_sym_each] = ACTIONS(292),
    [anon_sym_58] = ACTIONS(292),
    [anon_sym_rows] = ACTIONS(292),
    [anon_sym_59] = ACTIONS(292),
    [anon_sym_repeat] = ACTIONS(292),
    [anon_sym_60] = ACTIONS(292),
    [anon_sym_dip] = ACTIONS(292),
    [anon_sym_di] = ACTIONS(294),
    [anon_sym_61] = ACTIONS(292),
    [anon_sym_gap] = ACTIONS(292),
    [anon_sym_ga] = ACTIONS(294),
    [anon_sym_62] = ACTIONS(292),
    [anon_sym_invert] = ACTIONS(292),
    [anon_sym_63] = ACTIONS(292),
    [anon_sym_spawn] = ACTIONS(292),
    [anon_sym_fold] = ACTIONS(292),
    [anon_sym_64] = ACTIONS(292),
    [anon_sym_distribute] = ACTIONS(292),
    [anon_sym_65] = ACTIONS(292),
    [anon_sym_table] = ACTIONS(292),
    [anon_sym_66] = ACTIONS(292),
    [anon_sym_cross] = ACTIONS(292),
    [anon_sym_67] = ACTIONS(292),
    [anon_sym_group] = ACTIONS(292),
    [anon_sym_68] = ACTIONS(292),
    [anon_sym_partition] = ACTIONS(292),
    [anon_sym_69] = ACTIONS(292),
    [anon_sym_both] = ACTIONS(292),
    [anon_sym_70] = ACTIONS(292),
    [anon_sym_bracket] = ACTIONS(292),
    [anon_sym_71] = ACTIONS(292),
    [anon_sym_fork] = ACTIONS(292),
    [anon_sym_72] = ACTIONS(292),
    [anon_sym_under] = ACTIONS(292),
    [anon_sym_73] = ACTIONS(292),
    [anon_sym_level] = ACTIONS(292),
    [anon_sym_74] = ACTIONS(292),
    [anon_sym_fill] = ACTIONS(292),
    [anon_sym_75] = ACTIONS(292),
    [anon_sym_bind] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_try] = ACTIONS(292),
    [anon_sym_76] = ACTIONS(292),
    [anon_sym_77] = ACTIONS(292),
    [anon_sym_78] = ACTIONS(292),
    [anon_sym_79] = ACTIONS(292),
    [anon_sym_80] = ACTIONS(292),
    [anon_sym_81] = ACTIONS(292),
    [anon_sym_82] = ACTIONS(292),
    [anon_sym_roll] = ACTIONS(292),
    [anon_sym_83] = ACTIONS(292),
    [anon_sym_unroll] = ACTIONS(292),
    [anon_sym_84] = ACTIONS(292),
    [anon_sym_restack] = ACTIONS(292),
    [anon_sym_85] = ACTIONS(292),
    [anon_sym_86] = ACTIONS(292),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(292),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_] = ACTIONS(298),
    [aux_sym_number_token1] = ACTIONS(296),
    [aux_sym_character_token1] = ACTIONS(296),
    [sym_multiLineString] = ACTIONS(296),
    [sym_signature] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_identifier_deprecated] = ACTIONS(298),
    [sym_system] = ACTIONS(296),
    [sym_comment] = ACTIONS(298),
    [sym_openParen] = ACTIONS(296),
    [sym_openCurly] = ACTIONS(296),
    [sym_openBracket] = ACTIONS(296),
    [sym_underscore] = ACTIONS(296),
    [sym_leftArrow] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_identity] = ACTIONS(296),
    [anon_sym_id] = ACTIONS(298),
    [anon_sym_6] = ACTIONS(296),
    [anon_sym_not] = ACTIONS(296),
    [anon_sym_7] = ACTIONS(296),
    [anon_sym_sign] = ACTIONS(296),
    [anon_sym_8] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [anon_sym_absolutevalue] = ACTIONS(296),
    [anon_sym_9] = ACTIONS(296),
    [anon_sym_sqrt] = ACTIONS(296),
    [anon_sym_10] = ACTIONS(296),
    [anon_sym_sine] = ACTIONS(296),
    [anon_sym_11] = ACTIONS(296),
    [anon_sym_floor] = ACTIONS(296),
    [anon_sym_12] = ACTIONS(296),
    [anon_sym_ceiling] = ACTIONS(296),
    [anon_sym_13] = ACTIONS(296),
    [anon_sym_round] = ACTIONS(296),
    [anon_sym_14] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_BANG_EQ] = ACTIONS(296),
    [anon_sym_15] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [anon_sym_16] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [anon_sym_17] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_18] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_19] = ACTIONS(296),
    [anon_sym_modulus] = ACTIONS(296),
    [anon_sym_20] = ACTIONS(296),
    [anon_sym_power] = ACTIONS(296),
    [anon_sym_21] = ACTIONS(296),
    [anon_sym_logarithm] = ACTIONS(296),
    [anon_sym_22] = ACTIONS(296),
    [anon_sym_minimum] = ACTIONS(296),
    [anon_sym_23] = ACTIONS(296),
    [anon_sym_maximum] = ACTIONS(296),
    [anon_sym_24] = ACTIONS(296),
    [anon_sym_atangent] = ACTIONS(296),
    [anon_sym_25] = ACTIONS(296),
    [anon_sym_length] = ACTIONS(296),
    [anon_sym_26] = ACTIONS(296),
    [anon_sym_shape] = ACTIONS(296),
    [anon_sym_27] = ACTIONS(296),
    [anon_sym_range] = ACTIONS(296),
    [anon_sym_28] = ACTIONS(296),
    [anon_sym_first] = ACTIONS(296),
    [anon_sym_29] = ACTIONS(296),
    [anon_sym_reverse] = ACTIONS(296),
    [anon_sym_30] = ACTIONS(296),
    [anon_sym_deshape] = ACTIONS(296),
    [anon_sym_31] = ACTIONS(296),
    [anon_sym_bits] = ACTIONS(296),
    [anon_sym_32] = ACTIONS(296),
    [anon_sym_transpose] = ACTIONS(296),
    [anon_sym_33] = ACTIONS(296),
    [anon_sym_rise] = ACTIONS(296),
    [anon_sym_34] = ACTIONS(296),
    [anon_sym_fall] = ACTIONS(296),
    [anon_sym_35] = ACTIONS(296),
    [anon_sym_classify] = ACTIONS(296),
    [anon_sym_36] = ACTIONS(296),
    [anon_sym_deduplicate] = ACTIONS(296),
    [anon_sym_37] = ACTIONS(296),
    [anon_sym_box] = ACTIONS(296),
    [anon_sym_38] = ACTIONS(296),
    [anon_sym_unbox] = ACTIONS(296),
    [anon_sym_39] = ACTIONS(296),
    [anon_sym_match] = ACTIONS(296),
    [anon_sym_40] = ACTIONS(296),
    [anon_sym_couple] = ACTIONS(296),
    [anon_sym_41] = ACTIONS(296),
    [anon_sym_join] = ACTIONS(296),
    [anon_sym_42] = ACTIONS(296),
    [anon_sym_select] = ACTIONS(296),
    [anon_sym_43] = ACTIONS(296),
    [anon_sym_pick] = ACTIONS(296),
    [anon_sym_44] = ACTIONS(296),
    [anon_sym_reshape] = ACTIONS(296),
    [anon_sym_45] = ACTIONS(296),
    [anon_sym_take] = ACTIONS(296),
    [anon_sym_46] = ACTIONS(296),
    [anon_sym_drop] = ACTIONS(296),
    [anon_sym_47] = ACTIONS(296),
    [anon_sym_rotate] = ACTIONS(296),
    [anon_sym_48] = ACTIONS(296),
    [anon_sym_windows] = ACTIONS(296),
    [anon_sym_49] = ACTIONS(296),
    [anon_sym_keep] = ACTIONS(296),
    [anon_sym_50] = ACTIONS(296),
    [anon_sym_find] = ACTIONS(296),
    [anon_sym_51] = ACTIONS(296),
    [anon_sym_member] = ACTIONS(296),
    [anon_sym_52] = ACTIONS(296),
    [anon_sym_indexof] = ACTIONS(296),
    [anon_sym_53] = ACTIONS(296),
    [anon_sym_assert] = ACTIONS(296),
    [anon_sym_54] = ACTIONS(296),
    [anon_sym_wait] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_break] = ACTIONS(296),
    [anon_sym_55] = ACTIONS(296),
    [anon_sym_recur] = ACTIONS(296),
    [anon_sym_56] = ACTIONS(296),
    [anon_sym_random] = ACTIONS(296),
    [anon_sym_57] = ACTIONS(296),
    [anon_sym_gen] = ACTIONS(296),
    [anon_sym_deal] = ACTIONS(296),
    [anon_sym_use] = ACTIONS(296),
    [anon_sym_tag] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(296),
    [anon_sym_sig] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_dump] = ACTIONS(296),
    [anon_sym_reduce] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_scan] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(296),
    [anon_sym_each] = ACTIONS(296),
    [anon_sym_58] = ACTIONS(296),
    [anon_sym_rows] = ACTIONS(296),
    [anon_sym_59] = ACTIONS(296),
    [anon_sym_repeat] = ACTIONS(296),
    [anon_sym_60] = ACTIONS(296),
    [anon_sym_dip] = ACTIONS(296),
    [anon_sym_di] = ACTIONS(298),
    [anon_sym_61] = ACTIONS(296),
    [anon_sym_gap] = ACTIONS(296),
    [anon_sym_ga] = ACTIONS(298),
    [anon_sym_62] = ACTIONS(296),
    [anon_sym_invert] = ACTIONS(296),
    [anon_sym_63] = ACTIONS(296),
    [anon_sym_spawn] = ACTIONS(296),
    [anon_sym_fold] = ACTIONS(296),
    [anon_sym_64] = ACTIONS(296),
    [anon_sym_distribute] = ACTIONS(296),
    [anon_sym_65] = ACTIONS(296),
    [anon_sym_table] = ACTIONS(296),
    [anon_sym_66] = ACTIONS(296),
    [anon_sym_cross] = ACTIONS(296),
    [anon_sym_67] = ACTIONS(296),
    [anon_sym_group] = ACTIONS(296),
    [anon_sym_68] = ACTIONS(296),
    [anon_sym_partition] = ACTIONS(296),
    [anon_sym_69] = ACTIONS(296),
    [anon_sym_both] = ACTIONS(296),
    [anon_sym_70] = ACTIONS(296),
    [anon_sym_bracket] = ACTIONS(296),
    [anon_sym_71] = ACTIONS(296),
    [anon_sym_fork] = ACTIONS(296),
    [anon_sym_72] = ACTIONS(296),
    [anon_sym_under] = ACTIONS(296),
    [anon_sym_73] = ACTIONS(296),
    [anon_sym_level] = ACTIONS(296),
    [anon_sym_74] = ACTIONS(296),
    [anon_sym_fill] = ACTIONS(296),
    [anon_sym_75] = ACTIONS(296),
    [anon_sym_bind] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_try] = ACTIONS(296),
    [anon_sym_76] = ACTIONS(296),
    [anon_sym_77] = ACTIONS(296),
    [anon_sym_78] = ACTIONS(296),
    [anon_sym_79] = ACTIONS(296),
    [anon_sym_80] = ACTIONS(296),
    [anon_sym_81] = ACTIONS(296),
    [anon_sym_82] = ACTIONS(296),
    [anon_sym_roll] = ACTIONS(296),
    [anon_sym_83] = ACTIONS(296),
    [anon_sym_unroll] = ACTIONS(296),
    [anon_sym_84] = ACTIONS(296),
    [anon_sym_restack] = ACTIONS(296),
    [anon_sym_85] = ACTIONS(296),
    [anon_sym_86] = ACTIONS(296),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(296),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [anon_sym_] = ACTIONS(302),
    [aux_sym_number_token1] = ACTIONS(300),
    [aux_sym_character_token1] = ACTIONS(300),
    [sym_multiLineString] = ACTIONS(300),
    [sym_signature] = ACTIONS(300),
    [sym_identifier] = ACTIONS(302),
    [sym_identifier_deprecated] = ACTIONS(302),
    [sym_system] = ACTIONS(300),
    [sym_comment] = ACTIONS(302),
    [sym_openParen] = ACTIONS(300),
    [sym_openCurly] = ACTIONS(300),
    [sym_openBracket] = ACTIONS(300),
    [sym_underscore] = ACTIONS(300),
    [sym_leftArrow] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_COLON] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_identity] = ACTIONS(300),
    [anon_sym_id] = ACTIONS(302),
    [anon_sym_6] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(300),
    [anon_sym_7] = ACTIONS(300),
    [anon_sym_sign] = ACTIONS(300),
    [anon_sym_8] = ACTIONS(300),
    [anon_sym_BQUOTE] = ACTIONS(300),
    [anon_sym_absolutevalue] = ACTIONS(300),
    [anon_sym_9] = ACTIONS(300),
    [anon_sym_sqrt] = ACTIONS(300),
    [anon_sym_10] = ACTIONS(300),
    [anon_sym_sine] = ACTIONS(300),
    [anon_sym_11] = ACTIONS(300),
    [anon_sym_floor] = ACTIONS(300),
    [anon_sym_12] = ACTIONS(300),
    [anon_sym_ceiling] = ACTIONS(300),
    [anon_sym_13] = ACTIONS(300),
    [anon_sym_round] = ACTIONS(300),
    [anon_sym_14] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_15] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_16] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(300),
    [anon_sym_17] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_18] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_19] = ACTIONS(300),
    [anon_sym_modulus] = ACTIONS(300),
    [anon_sym_20] = ACTIONS(300),
    [anon_sym_power] = ACTIONS(300),
    [anon_sym_21] = ACTIONS(300),
    [anon_sym_logarithm] = ACTIONS(300),
    [anon_sym_22] = ACTIONS(300),
    [anon_sym_minimum] = ACTIONS(300),
    [anon_sym_23] = ACTIONS(300),
    [anon_sym_maximum] = ACTIONS(300),
    [anon_sym_24] = ACTIONS(300),
    [anon_sym_atangent] = ACTIONS(300),
    [anon_sym_25] = ACTIONS(300),
    [anon_sym_length] = ACTIONS(300),
    [anon_sym_26] = ACTIONS(300),
    [anon_sym_shape] = ACTIONS(300),
    [anon_sym_27] = ACTIONS(300),
    [anon_sym_range] = ACTIONS(300),
    [anon_sym_28] = ACTIONS(300),
    [anon_sym_first] = ACTIONS(300),
    [anon_sym_29] = ACTIONS(300),
    [anon_sym_reverse] = ACTIONS(300),
    [anon_sym_30] = ACTIONS(300),
    [anon_sym_deshape] = ACTIONS(300),
    [anon_sym_31] = ACTIONS(300),
    [anon_sym_bits] = ACTIONS(300),
    [anon_sym_32] = ACTIONS(300),
    [anon_sym_transpose] = ACTIONS(300),
    [anon_sym_33] = ACTIONS(300),
    [anon_sym_rise] = ACTIONS(300),
    [anon_sym_34] = ACTIONS(300),
    [anon_sym_fall] = ACTIONS(300),
    [anon_sym_35] = ACTIONS(300),
    [anon_sym_classify] = ACTIONS(300),
    [anon_sym_36] = ACTIONS(300),
    [anon_sym_deduplicate] = ACTIONS(300),
    [anon_sym_37] = ACTIONS(300),
    [anon_sym_box] = ACTIONS(300),
    [anon_sym_38] = ACTIONS(300),
    [anon_sym_unbox] = ACTIONS(300),
    [anon_sym_39] = ACTIONS(300),
    [anon_sym_match] = ACTIONS(300),
    [anon_sym_40] = ACTIONS(300),
    [anon_sym_couple] = ACTIONS(300),
    [anon_sym_41] = ACTIONS(300),
    [anon_sym_join] = ACTIONS(300),
    [anon_sym_42] = ACTIONS(300),
    [anon_sym_select] = ACTIONS(300),
    [anon_sym_43] = ACTIONS(300),
    [anon_sym_pick] = ACTIONS(300),
    [anon_sym_44] = ACTIONS(300),
    [anon_sym_reshape] = ACTIONS(300),
    [anon_sym_45] = ACTIONS(300),
    [anon_sym_take] = ACTIONS(300),
    [anon_sym_46] = ACTIONS(300),
    [anon_sym_drop] = ACTIONS(300),
    [anon_sym_47] = ACTIONS(300),
    [anon_sym_rotate] = ACTIONS(300),
    [anon_sym_48] = ACTIONS(300),
    [anon_sym_windows] = ACTIONS(300),
    [anon_sym_49] = ACTIONS(300),
    [anon_sym_keep] = ACTIONS(300),
    [anon_sym_50] = ACTIONS(300),
    [anon_sym_find] = ACTIONS(300),
    [anon_sym_51] = ACTIONS(300),
    [anon_sym_member] = ACTIONS(300),
    [anon_sym_52] = ACTIONS(300),
    [anon_sym_indexof] = ACTIONS(300),
    [anon_sym_53] = ACTIONS(300),
    [anon_sym_assert] = ACTIONS(300),
    [anon_sym_54] = ACTIONS(300),
    [anon_sym_wait] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_break] = ACTIONS(300),
    [anon_sym_55] = ACTIONS(300),
    [anon_sym_recur] = ACTIONS(300),
    [anon_sym_56] = ACTIONS(300),
    [anon_sym_random] = ACTIONS(300),
    [anon_sym_57] = ACTIONS(300),
    [anon_sym_gen] = ACTIONS(300),
    [anon_sym_deal] = ACTIONS(300),
    [anon_sym_use] = ACTIONS(300),
    [anon_sym_tag] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(300),
    [anon_sym_sig] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_dump] = ACTIONS(300),
    [anon_sym_reduce] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_scan] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_each] = ACTIONS(300),
    [anon_sym_58] = ACTIONS(300),
    [anon_sym_rows] = ACTIONS(300),
    [anon_sym_59] = ACTIONS(300),
    [anon_sym_repeat] = ACTIONS(300),
    [anon_sym_60] = ACTIONS(300),
    [anon_sym_dip] = ACTIONS(300),
    [anon_sym_di] = ACTIONS(302),
    [anon_sym_61] = ACTIONS(300),
    [anon_sym_gap] = ACTIONS(300),
    [anon_sym_ga] = ACTIONS(302),
    [anon_sym_62] = ACTIONS(300),
    [anon_sym_invert] = ACTIONS(300),
    [anon_sym_63] = ACTIONS(300),
    [anon_sym_spawn] = ACTIONS(300),
    [anon_sym_fold] = ACTIONS(300),
    [anon_sym_64] = ACTIONS(300),
    [anon_sym_distribute] = ACTIONS(300),
    [anon_sym_65] = ACTIONS(300),
    [anon_sym_table] = ACTIONS(300),
    [anon_sym_66] = ACTIONS(300),
    [anon_sym_cross] = ACTIONS(300),
    [anon_sym_67] = ACTIONS(300),
    [anon_sym_group] = ACTIONS(300),
    [anon_sym_68] = ACTIONS(300),
    [anon_sym_partition] = ACTIONS(300),
    [anon_sym_69] = ACTIONS(300),
    [anon_sym_both] = ACTIONS(300),
    [anon_sym_70] = ACTIONS(300),
    [anon_sym_bracket] = ACTIONS(300),
    [anon_sym_71] = ACTIONS(300),
    [anon_sym_fork] = ACTIONS(300),
    [anon_sym_72] = ACTIONS(300),
    [anon_sym_under] = ACTIONS(300),
    [anon_sym_73] = ACTIONS(300),
    [anon_sym_level] = ACTIONS(300),
    [anon_sym_74] = ACTIONS(300),
    [anon_sym_fill] = ACTIONS(300),
    [anon_sym_75] = ACTIONS(300),
    [anon_sym_bind] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(300),
    [anon_sym_76] = ACTIONS(300),
    [anon_sym_77] = ACTIONS(300),
    [anon_sym_78] = ACTIONS(300),
    [anon_sym_79] = ACTIONS(300),
    [anon_sym_80] = ACTIONS(300),
    [anon_sym_81] = ACTIONS(300),
    [anon_sym_82] = ACTIONS(300),
    [anon_sym_roll] = ACTIONS(300),
    [anon_sym_83] = ACTIONS(300),
    [anon_sym_unroll] = ACTIONS(300),
    [anon_sym_84] = ACTIONS(300),
    [anon_sym_restack] = ACTIONS(300),
    [anon_sym_85] = ACTIONS(300),
    [anon_sym_86] = ACTIONS(300),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(300),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_] = ACTIONS(290),
    [aux_sym_number_token1] = ACTIONS(288),
    [aux_sym_character_token1] = ACTIONS(288),
    [sym_multiLineString] = ACTIONS(288),
    [sym_signature] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_identifier_deprecated] = ACTIONS(290),
    [sym_system] = ACTIONS(288),
    [sym_comment] = ACTIONS(290),
    [sym_openParen] = ACTIONS(288),
    [sym_openCurly] = ACTIONS(288),
    [sym_openBracket] = ACTIONS(288),
    [sym_underscore] = ACTIONS(288),
    [sym_leftArrow] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_identity] = ACTIONS(288),
    [anon_sym_id] = ACTIONS(290),
    [anon_sym_6] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_7] = ACTIONS(288),
    [anon_sym_sign] = ACTIONS(288),
    [anon_sym_8] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_absolutevalue] = ACTIONS(288),
    [anon_sym_9] = ACTIONS(288),
    [anon_sym_sqrt] = ACTIONS(288),
    [anon_sym_10] = ACTIONS(288),
    [anon_sym_sine] = ACTIONS(288),
    [anon_sym_11] = ACTIONS(288),
    [anon_sym_floor] = ACTIONS(288),
    [anon_sym_12] = ACTIONS(288),
    [anon_sym_ceiling] = ACTIONS(288),
    [anon_sym_13] = ACTIONS(288),
    [anon_sym_round] = ACTIONS(288),
    [anon_sym_14] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_15] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_16] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_17] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_18] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_19] = ACTIONS(288),
    [anon_sym_modulus] = ACTIONS(288),
    [anon_sym_20] = ACTIONS(288),
    [anon_sym_power] = ACTIONS(288),
    [anon_sym_21] = ACTIONS(288),
    [anon_sym_logarithm] = ACTIONS(288),
    [anon_sym_22] = ACTIONS(288),
    [anon_sym_minimum] = ACTIONS(288),
    [anon_sym_23] = ACTIONS(288),
    [anon_sym_maximum] = ACTIONS(288),
    [anon_sym_24] = ACTIONS(288),
    [anon_sym_atangent] = ACTIONS(288),
    [anon_sym_25] = ACTIONS(288),
    [anon_sym_length] = ACTIONS(288),
    [anon_sym_26] = ACTIONS(288),
    [anon_sym_shape] = ACTIONS(288),
    [anon_sym_27] = ACTIONS(288),
    [anon_sym_range] = ACTIONS(288),
    [anon_sym_28] = ACTIONS(288),
    [anon_sym_first] = ACTIONS(288),
    [anon_sym_29] = ACTIONS(288),
    [anon_sym_reverse] = ACTIONS(288),
    [anon_sym_30] = ACTIONS(288),
    [anon_sym_deshape] = ACTIONS(288),
    [anon_sym_31] = ACTIONS(288),
    [anon_sym_bits] = ACTIONS(288),
    [anon_sym_32] = ACTIONS(288),
    [anon_sym_transpose] = ACTIONS(288),
    [anon_sym_33] = ACTIONS(288),
    [anon_sym_rise] = ACTIONS(288),
    [anon_sym_34] = ACTIONS(288),
    [anon_sym_fall] = ACTIONS(288),
    [anon_sym_35] = ACTIONS(288),
    [anon_sym_classify] = ACTIONS(288),
    [anon_sym_36] = ACTIONS(288),
    [anon_sym_deduplicate] = ACTIONS(288),
    [anon_sym_37] = ACTIONS(288),
    [anon_sym_box] = ACTIONS(288),
    [anon_sym_38] = ACTIONS(288),
    [anon_sym_unbox] = ACTIONS(288),
    [anon_sym_39] = ACTIONS(288),
    [anon_sym_match] = ACTIONS(288),
    [anon_sym_40] = ACTIONS(288),
    [anon_sym_couple] = ACTIONS(288),
    [anon_sym_41] = ACTIONS(288),
    [anon_sym_join] = ACTIONS(288),
    [anon_sym_42] = ACTIONS(288),
    [anon_sym_select] = ACTIONS(288),
    [anon_sym_43] = ACTIONS(288),
    [anon_sym_pick] = ACTIONS(288),
    [anon_sym_44] = ACTIONS(288),
    [anon_sym_reshape] = ACTIONS(288),
    [anon_sym_45] = ACTIONS(288),
    [anon_sym_take] = ACTIONS(288),
    [anon_sym_46] = ACTIONS(288),
    [anon_sym_drop] = ACTIONS(288),
    [anon_sym_47] = ACTIONS(288),
    [anon_sym_rotate] = ACTIONS(288),
    [anon_sym_48] = ACTIONS(288),
    [anon_sym_windows] = ACTIONS(288),
    [anon_sym_49] = ACTIONS(288),
    [anon_sym_keep] = ACTIONS(288),
    [anon_sym_50] = ACTIONS(288),
    [anon_sym_find] = ACTIONS(288),
    [anon_sym_51] = ACTIONS(288),
    [anon_sym_member] = ACTIONS(288),
    [anon_sym_52] = ACTIONS(288),
    [anon_sym_indexof] = ACTIONS(288),
    [anon_sym_53] = ACTIONS(288),
    [anon_sym_assert] = ACTIONS(288),
    [anon_sym_54] = ACTIONS(288),
    [anon_sym_wait] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(288),
    [anon_sym_55] = ACTIONS(288),
    [anon_sym_recur] = ACTIONS(288),
    [anon_sym_56] = ACTIONS(288),
    [anon_sym_random] = ACTIONS(288),
    [anon_sym_57] = ACTIONS(288),
    [anon_sym_gen] = ACTIONS(288),
    [anon_sym_deal] = ACTIONS(288),
    [anon_sym_use] = ACTIONS(288),
    [anon_sym_tag] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_sig] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_dump] = ACTIONS(288),
    [anon_sym_reduce] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_scan] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_each] = ACTIONS(288),
    [anon_sym_58] = ACTIONS(288),
    [anon_sym_rows] = ACTIONS(288),
    [anon_sym_59] = ACTIONS(288),
    [anon_sym_repeat] = ACTIONS(288),
    [anon_sym_60] = ACTIONS(288),
    [anon_sym_dip] = ACTIONS(288),
    [anon_sym_di] = ACTIONS(290),
    [anon_sym_61] = ACTIONS(288),
    [anon_sym_gap] = ACTIONS(288),
    [anon_sym_ga] = ACTIONS(290),
    [anon_sym_62] = ACTIONS(288),
    [anon_sym_invert] = ACTIONS(288),
    [anon_sym_63] = ACTIONS(288),
    [anon_sym_spawn] = ACTIONS(288),
    [anon_sym_fold] = ACTIONS(288),
    [anon_sym_64] = ACTIONS(288),
    [anon_sym_distribute] = ACTIONS(288),
    [anon_sym_65] = ACTIONS(288),
    [anon_sym_table] = ACTIONS(288),
    [anon_sym_66] = ACTIONS(288),
    [anon_sym_cross] = ACTIONS(288),
    [anon_sym_67] = ACTIONS(288),
    [anon_sym_group] = ACTIONS(288),
    [anon_sym_68] = ACTIONS(288),
    [anon_sym_partition] = ACTIONS(288),
    [anon_sym_69] = ACTIONS(288),
    [anon_sym_both] = ACTIONS(288),
    [anon_sym_70] = ACTIONS(288),
    [anon_sym_bracket] = ACTIONS(288),
    [anon_sym_71] = ACTIONS(288),
    [anon_sym_fork] = ACTIONS(288),
    [anon_sym_72] = ACTIONS(288),
    [anon_sym_under] = ACTIONS(288),
    [anon_sym_73] = ACTIONS(288),
    [anon_sym_level] = ACTIONS(288),
    [anon_sym_74] = ACTIONS(288),
    [anon_sym_fill] = ACTIONS(288),
    [anon_sym_75] = ACTIONS(288),
    [anon_sym_bind] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_try] = ACTIONS(288),
    [anon_sym_76] = ACTIONS(288),
    [anon_sym_77] = ACTIONS(288),
    [anon_sym_78] = ACTIONS(288),
    [anon_sym_79] = ACTIONS(288),
    [anon_sym_80] = ACTIONS(288),
    [anon_sym_81] = ACTIONS(288),
    [anon_sym_82] = ACTIONS(288),
    [anon_sym_roll] = ACTIONS(288),
    [anon_sym_83] = ACTIONS(288),
    [anon_sym_unroll] = ACTIONS(288),
    [anon_sym_84] = ACTIONS(288),
    [anon_sym_restack] = ACTIONS(288),
    [anon_sym_85] = ACTIONS(288),
    [anon_sym_86] = ACTIONS(288),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(288),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_] = ACTIONS(306),
    [aux_sym_number_token1] = ACTIONS(304),
    [aux_sym_character_token1] = ACTIONS(304),
    [sym_multiLineString] = ACTIONS(304),
    [sym_signature] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_identifier_deprecated] = ACTIONS(306),
    [sym_system] = ACTIONS(304),
    [sym_comment] = ACTIONS(306),
    [sym_openParen] = ACTIONS(304),
    [sym_openCurly] = ACTIONS(304),
    [sym_openBracket] = ACTIONS(304),
    [sym_underscore] = ACTIONS(304),
    [sym_leftArrow] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_identity] = ACTIONS(304),
    [anon_sym_id] = ACTIONS(306),
    [anon_sym_6] = ACTIONS(304),
    [anon_sym_not] = ACTIONS(304),
    [anon_sym_7] = ACTIONS(304),
    [anon_sym_sign] = ACTIONS(304),
    [anon_sym_8] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [anon_sym_absolutevalue] = ACTIONS(304),
    [anon_sym_9] = ACTIONS(304),
    [anon_sym_sqrt] = ACTIONS(304),
    [anon_sym_10] = ACTIONS(304),
    [anon_sym_sine] = ACTIONS(304),
    [anon_sym_11] = ACTIONS(304),
    [anon_sym_floor] = ACTIONS(304),
    [anon_sym_12] = ACTIONS(304),
    [anon_sym_ceiling] = ACTIONS(304),
    [anon_sym_13] = ACTIONS(304),
    [anon_sym_round] = ACTIONS(304),
    [anon_sym_14] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_15] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [anon_sym_16] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_17] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_18] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_19] = ACTIONS(304),
    [anon_sym_modulus] = ACTIONS(304),
    [anon_sym_20] = ACTIONS(304),
    [anon_sym_power] = ACTIONS(304),
    [anon_sym_21] = ACTIONS(304),
    [anon_sym_logarithm] = ACTIONS(304),
    [anon_sym_22] = ACTIONS(304),
    [anon_sym_minimum] = ACTIONS(304),
    [anon_sym_23] = ACTIONS(304),
    [anon_sym_maximum] = ACTIONS(304),
    [anon_sym_24] = ACTIONS(304),
    [anon_sym_atangent] = ACTIONS(304),
    [anon_sym_25] = ACTIONS(304),
    [anon_sym_length] = ACTIONS(304),
    [anon_sym_26] = ACTIONS(304),
    [anon_sym_shape] = ACTIONS(304),
    [anon_sym_27] = ACTIONS(304),
    [anon_sym_range] = ACTIONS(304),
    [anon_sym_28] = ACTIONS(304),
    [anon_sym_first] = ACTIONS(304),
    [anon_sym_29] = ACTIONS(304),
    [anon_sym_reverse] = ACTIONS(304),
    [anon_sym_30] = ACTIONS(304),
    [anon_sym_deshape] = ACTIONS(304),
    [anon_sym_31] = ACTIONS(304),
    [anon_sym_bits] = ACTIONS(304),
    [anon_sym_32] = ACTIONS(304),
    [anon_sym_transpose] = ACTIONS(304),
    [anon_sym_33] = ACTIONS(304),
    [anon_sym_rise] = ACTIONS(304),
    [anon_sym_34] = ACTIONS(304),
    [anon_sym_fall] = ACTIONS(304),
    [anon_sym_35] = ACTIONS(304),
    [anon_sym_classify] = ACTIONS(304),
    [anon_sym_36] = ACTIONS(304),
    [anon_sym_deduplicate] = ACTIONS(304),
    [anon_sym_37] = ACTIONS(304),
    [anon_sym_box] = ACTIONS(304),
    [anon_sym_38] = ACTIONS(304),
    [anon_sym_unbox] = ACTIONS(304),
    [anon_sym_39] = ACTIONS(304),
    [anon_sym_match] = ACTIONS(304),
    [anon_sym_40] = ACTIONS(304),
    [anon_sym_couple] = ACTIONS(304),
    [anon_sym_41] = ACTIONS(304),
    [anon_sym_join] = ACTIONS(304),
    [anon_sym_42] = ACTIONS(304),
    [anon_sym_select] = ACTIONS(304),
    [anon_sym_43] = ACTIONS(304),
    [anon_sym_pick] = ACTIONS(304),
    [anon_sym_44] = ACTIONS(304),
    [anon_sym_reshape] = ACTIONS(304),
    [anon_sym_45] = ACTIONS(304),
    [anon_sym_take] = ACTIONS(304),
    [anon_sym_46] = ACTIONS(304),
    [anon_sym_drop] = ACTIONS(304),
    [anon_sym_47] = ACTIONS(304),
    [anon_sym_rotate] = ACTIONS(304),
    [anon_sym_48] = ACTIONS(304),
    [anon_sym_windows] = ACTIONS(304),
    [anon_sym_49] = ACTIONS(304),
    [anon_sym_keep] = ACTIONS(304),
    [anon_sym_50] = ACTIONS(304),
    [anon_sym_find] = ACTIONS(304),
    [anon_sym_51] = ACTIONS(304),
    [anon_sym_member] = ACTIONS(304),
    [anon_sym_52] = ACTIONS(304),
    [anon_sym_indexof] = ACTIONS(304),
    [anon_sym_53] = ACTIONS(304),
    [anon_sym_assert] = ACTIONS(304),
    [anon_sym_54] = ACTIONS(304),
    [anon_sym_wait] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_break] = ACTIONS(304),
    [anon_sym_55] = ACTIONS(304),
    [anon_sym_recur] = ACTIONS(304),
    [anon_sym_56] = ACTIONS(304),
    [anon_sym_random] = ACTIONS(304),
    [anon_sym_57] = ACTIONS(304),
    [anon_sym_gen] = ACTIONS(304),
    [anon_sym_deal] = ACTIONS(304),
    [anon_sym_use] = ACTIONS(304),
    [anon_sym_tag] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [anon_sym_sig] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(304),
    [anon_sym_dump] = ACTIONS(304),
    [anon_sym_reduce] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_scan] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_each] = ACTIONS(304),
    [anon_sym_58] = ACTIONS(304),
    [anon_sym_rows] = ACTIONS(304),
    [anon_sym_59] = ACTIONS(304),
    [anon_sym_repeat] = ACTIONS(304),
    [anon_sym_60] = ACTIONS(304),
    [anon_sym_dip] = ACTIONS(304),
    [anon_sym_di] = ACTIONS(306),
    [anon_sym_61] = ACTIONS(304),
    [anon_sym_gap] = ACTIONS(304),
    [anon_sym_ga] = ACTIONS(306),
    [anon_sym_62] = ACTIONS(304),
    [anon_sym_invert] = ACTIONS(304),
    [anon_sym_63] = ACTIONS(304),
    [anon_sym_spawn] = ACTIONS(304),
    [anon_sym_fold] = ACTIONS(304),
    [anon_sym_64] = ACTIONS(304),
    [anon_sym_distribute] = ACTIONS(304),
    [anon_sym_65] = ACTIONS(304),
    [anon_sym_table] = ACTIONS(304),
    [anon_sym_66] = ACTIONS(304),
    [anon_sym_cross] = ACTIONS(304),
    [anon_sym_67] = ACTIONS(304),
    [anon_sym_group] = ACTIONS(304),
    [anon_sym_68] = ACTIONS(304),
    [anon_sym_partition] = ACTIONS(304),
    [anon_sym_69] = ACTIONS(304),
    [anon_sym_both] = ACTIONS(304),
    [anon_sym_70] = ACTIONS(304),
    [anon_sym_bracket] = ACTIONS(304),
    [anon_sym_71] = ACTIONS(304),
    [anon_sym_fork] = ACTIONS(304),
    [anon_sym_72] = ACTIONS(304),
    [anon_sym_under] = ACTIONS(304),
    [anon_sym_73] = ACTIONS(304),
    [anon_sym_level] = ACTIONS(304),
    [anon_sym_74] = ACTIONS(304),
    [anon_sym_fill] = ACTIONS(304),
    [anon_sym_75] = ACTIONS(304),
    [anon_sym_bind] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_try] = ACTIONS(304),
    [anon_sym_76] = ACTIONS(304),
    [anon_sym_77] = ACTIONS(304),
    [anon_sym_78] = ACTIONS(304),
    [anon_sym_79] = ACTIONS(304),
    [anon_sym_80] = ACTIONS(304),
    [anon_sym_81] = ACTIONS(304),
    [anon_sym_82] = ACTIONS(304),
    [anon_sym_roll] = ACTIONS(304),
    [anon_sym_83] = ACTIONS(304),
    [anon_sym_unroll] = ACTIONS(304),
    [anon_sym_84] = ACTIONS(304),
    [anon_sym_restack] = ACTIONS(304),
    [anon_sym_85] = ACTIONS(304),
    [anon_sym_86] = ACTIONS(304),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(304),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_] = ACTIONS(310),
    [aux_sym_number_token1] = ACTIONS(308),
    [aux_sym_character_token1] = ACTIONS(308),
    [sym_multiLineString] = ACTIONS(308),
    [sym_signature] = ACTIONS(308),
    [sym_identifier] = ACTIONS(310),
    [sym_identifier_deprecated] = ACTIONS(310),
    [sym_system] = ACTIONS(308),
    [sym_comment] = ACTIONS(310),
    [sym_openParen] = ACTIONS(308),
    [sym_openCurly] = ACTIONS(308),
    [sym_openBracket] = ACTIONS(308),
    [sym_underscore] = ACTIONS(308),
    [sym_leftArrow] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_identity] = ACTIONS(308),
    [anon_sym_id] = ACTIONS(310),
    [anon_sym_6] = ACTIONS(308),
    [anon_sym_not] = ACTIONS(308),
    [anon_sym_7] = ACTIONS(308),
    [anon_sym_sign] = ACTIONS(308),
    [anon_sym_8] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [anon_sym_absolutevalue] = ACTIONS(308),
    [anon_sym_9] = ACTIONS(308),
    [anon_sym_sqrt] = ACTIONS(308),
    [anon_sym_10] = ACTIONS(308),
    [anon_sym_sine] = ACTIONS(308),
    [anon_sym_11] = ACTIONS(308),
    [anon_sym_floor] = ACTIONS(308),
    [anon_sym_12] = ACTIONS(308),
    [anon_sym_ceiling] = ACTIONS(308),
    [anon_sym_13] = ACTIONS(308),
    [anon_sym_round] = ACTIONS(308),
    [anon_sym_14] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_15] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_16] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_17] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_18] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_19] = ACTIONS(308),
    [anon_sym_modulus] = ACTIONS(308),
    [anon_sym_20] = ACTIONS(308),
    [anon_sym_power] = ACTIONS(308),
    [anon_sym_21] = ACTIONS(308),
    [anon_sym_logarithm] = ACTIONS(308),
    [anon_sym_22] = ACTIONS(308),
    [anon_sym_minimum] = ACTIONS(308),
    [anon_sym_23] = ACTIONS(308),
    [anon_sym_maximum] = ACTIONS(308),
    [anon_sym_24] = ACTIONS(308),
    [anon_sym_atangent] = ACTIONS(308),
    [anon_sym_25] = ACTIONS(308),
    [anon_sym_length] = ACTIONS(308),
    [anon_sym_26] = ACTIONS(308),
    [anon_sym_shape] = ACTIONS(308),
    [anon_sym_27] = ACTIONS(308),
    [anon_sym_range] = ACTIONS(308),
    [anon_sym_28] = ACTIONS(308),
    [anon_sym_first] = ACTIONS(308),
    [anon_sym_29] = ACTIONS(308),
    [anon_sym_reverse] = ACTIONS(308),
    [anon_sym_30] = ACTIONS(308),
    [anon_sym_deshape] = ACTIONS(308),
    [anon_sym_31] = ACTIONS(308),
    [anon_sym_bits] = ACTIONS(308),
    [anon_sym_32] = ACTIONS(308),
    [anon_sym_transpose] = ACTIONS(308),
    [anon_sym_33] = ACTIONS(308),
    [anon_sym_rise] = ACTIONS(308),
    [anon_sym_34] = ACTIONS(308),
    [anon_sym_fall] = ACTIONS(308),
    [anon_sym_35] = ACTIONS(308),
    [anon_sym_classify] = ACTIONS(308),
    [anon_sym_36] = ACTIONS(308),
    [anon_sym_deduplicate] = ACTIONS(308),
    [anon_sym_37] = ACTIONS(308),
    [anon_sym_box] = ACTIONS(308),
    [anon_sym_38] = ACTIONS(308),
    [anon_sym_unbox] = ACTIONS(308),
    [anon_sym_39] = ACTIONS(308),
    [anon_sym_match] = ACTIONS(308),
    [anon_sym_40] = ACTIONS(308),
    [anon_sym_couple] = ACTIONS(308),
    [anon_sym_41] = ACTIONS(308),
    [anon_sym_join] = ACTIONS(308),
    [anon_sym_42] = ACTIONS(308),
    [anon_sym_select] = ACTIONS(308),
    [anon_sym_43] = ACTIONS(308),
    [anon_sym_pick] = ACTIONS(308),
    [anon_sym_44] = ACTIONS(308),
    [anon_sym_reshape] = ACTIONS(308),
    [anon_sym_45] = ACTIONS(308),
    [anon_sym_take] = ACTIONS(308),
    [anon_sym_46] = ACTIONS(308),
    [anon_sym_drop] = ACTIONS(308),
    [anon_sym_47] = ACTIONS(308),
    [anon_sym_rotate] = ACTIONS(308),
    [anon_sym_48] = ACTIONS(308),
    [anon_sym_windows] = ACTIONS(308),
    [anon_sym_49] = ACTIONS(308),
    [anon_sym_keep] = ACTIONS(308),
    [anon_sym_50] = ACTIONS(308),
    [anon_sym_find] = ACTIONS(308),
    [anon_sym_51] = ACTIONS(308),
    [anon_sym_member] = ACTIONS(308),
    [anon_sym_52] = ACTIONS(308),
    [anon_sym_indexof] = ACTIONS(308),
    [anon_sym_53] = ACTIONS(308),
    [anon_sym_assert] = ACTIONS(308),
    [anon_sym_54] = ACTIONS(308),
    [anon_sym_wait] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_break] = ACTIONS(308),
    [anon_sym_55] = ACTIONS(308),
    [anon_sym_recur] = ACTIONS(308),
    [anon_sym_56] = ACTIONS(308),
    [anon_sym_random] = ACTIONS(308),
    [anon_sym_57] = ACTIONS(308),
    [anon_sym_gen] = ACTIONS(308),
    [anon_sym_deal] = ACTIONS(308),
    [anon_sym_use] = ACTIONS(308),
    [anon_sym_tag] = ACTIONS(308),
    [anon_sym_type] = ACTIONS(308),
    [anon_sym_sig] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_dump] = ACTIONS(308),
    [anon_sym_reduce] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_scan] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_each] = ACTIONS(308),
    [anon_sym_58] = ACTIONS(308),
    [anon_sym_rows] = ACTIONS(308),
    [anon_sym_59] = ACTIONS(308),
    [anon_sym_repeat] = ACTIONS(308),
    [anon_sym_60] = ACTIONS(308),
    [anon_sym_dip] = ACTIONS(308),
    [anon_sym_di] = ACTIONS(310),
    [anon_sym_61] = ACTIONS(308),
    [anon_sym_gap] = ACTIONS(308),
    [anon_sym_ga] = ACTIONS(310),
    [anon_sym_62] = ACTIONS(308),
    [anon_sym_invert] = ACTIONS(308),
    [anon_sym_63] = ACTIONS(308),
    [anon_sym_spawn] = ACTIONS(308),
    [anon_sym_fold] = ACTIONS(308),
    [anon_sym_64] = ACTIONS(308),
    [anon_sym_distribute] = ACTIONS(308),
    [anon_sym_65] = ACTIONS(308),
    [anon_sym_table] = ACTIONS(308),
    [anon_sym_66] = ACTIONS(308),
    [anon_sym_cross] = ACTIONS(308),
    [anon_sym_67] = ACTIONS(308),
    [anon_sym_group] = ACTIONS(308),
    [anon_sym_68] = ACTIONS(308),
    [anon_sym_partition] = ACTIONS(308),
    [anon_sym_69] = ACTIONS(308),
    [anon_sym_both] = ACTIONS(308),
    [anon_sym_70] = ACTIONS(308),
    [anon_sym_bracket] = ACTIONS(308),
    [anon_sym_71] = ACTIONS(308),
    [anon_sym_fork] = ACTIONS(308),
    [anon_sym_72] = ACTIONS(308),
    [anon_sym_under] = ACTIONS(308),
    [anon_sym_73] = ACTIONS(308),
    [anon_sym_level] = ACTIONS(308),
    [anon_sym_74] = ACTIONS(308),
    [anon_sym_fill] = ACTIONS(308),
    [anon_sym_75] = ACTIONS(308),
    [anon_sym_bind] = ACTIONS(308),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_try] = ACTIONS(308),
    [anon_sym_76] = ACTIONS(308),
    [anon_sym_77] = ACTIONS(308),
    [anon_sym_78] = ACTIONS(308),
    [anon_sym_79] = ACTIONS(308),
    [anon_sym_80] = ACTIONS(308),
    [anon_sym_81] = ACTIONS(308),
    [anon_sym_82] = ACTIONS(308),
    [anon_sym_roll] = ACTIONS(308),
    [anon_sym_83] = ACTIONS(308),
    [anon_sym_unroll] = ACTIONS(308),
    [anon_sym_84] = ACTIONS(308),
    [anon_sym_restack] = ACTIONS(308),
    [anon_sym_85] = ACTIONS(308),
    [anon_sym_86] = ACTIONS(308),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(308),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_] = ACTIONS(314),
    [aux_sym_number_token1] = ACTIONS(312),
    [aux_sym_character_token1] = ACTIONS(312),
    [sym_multiLineString] = ACTIONS(312),
    [sym_signature] = ACTIONS(312),
    [sym_identifier] = ACTIONS(314),
    [sym_identifier_deprecated] = ACTIONS(314),
    [sym_system] = ACTIONS(312),
    [sym_comment] = ACTIONS(314),
    [sym_openParen] = ACTIONS(312),
    [sym_openCurly] = ACTIONS(312),
    [sym_openBracket] = ACTIONS(312),
    [sym_underscore] = ACTIONS(312),
    [sym_leftArrow] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_identity] = ACTIONS(312),
    [anon_sym_id] = ACTIONS(314),
    [anon_sym_6] = ACTIONS(312),
    [anon_sym_not] = ACTIONS(312),
    [anon_sym_7] = ACTIONS(312),
    [anon_sym_sign] = ACTIONS(312),
    [anon_sym_8] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_absolutevalue] = ACTIONS(312),
    [anon_sym_9] = ACTIONS(312),
    [anon_sym_sqrt] = ACTIONS(312),
    [anon_sym_10] = ACTIONS(312),
    [anon_sym_sine] = ACTIONS(312),
    [anon_sym_11] = ACTIONS(312),
    [anon_sym_floor] = ACTIONS(312),
    [anon_sym_12] = ACTIONS(312),
    [anon_sym_ceiling] = ACTIONS(312),
    [anon_sym_13] = ACTIONS(312),
    [anon_sym_round] = ACTIONS(312),
    [anon_sym_14] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_15] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_16] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_17] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_18] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
    [anon_sym_19] = ACTIONS(312),
    [anon_sym_modulus] = ACTIONS(312),
    [anon_sym_20] = ACTIONS(312),
    [anon_sym_power] = ACTIONS(312),
    [anon_sym_21] = ACTIONS(312),
    [anon_sym_logarithm] = ACTIONS(312),
    [anon_sym_22] = ACTIONS(312),
    [anon_sym_minimum] = ACTIONS(312),
    [anon_sym_23] = ACTIONS(312),
    [anon_sym_maximum] = ACTIONS(312),
    [anon_sym_24] = ACTIONS(312),
    [anon_sym_atangent] = ACTIONS(312),
    [anon_sym_25] = ACTIONS(312),
    [anon_sym_length] = ACTIONS(312),
    [anon_sym_26] = ACTIONS(312),
    [anon_sym_shape] = ACTIONS(312),
    [anon_sym_27] = ACTIONS(312),
    [anon_sym_range] = ACTIONS(312),
    [anon_sym_28] = ACTIONS(312),
    [anon_sym_first] = ACTIONS(312),
    [anon_sym_29] = ACTIONS(312),
    [anon_sym_reverse] = ACTIONS(312),
    [anon_sym_30] = ACTIONS(312),
    [anon_sym_deshape] = ACTIONS(312),
    [anon_sym_31] = ACTIONS(312),
    [anon_sym_bits] = ACTIONS(312),
    [anon_sym_32] = ACTIONS(312),
    [anon_sym_transpose] = ACTIONS(312),
    [anon_sym_33] = ACTIONS(312),
    [anon_sym_rise] = ACTIONS(312),
    [anon_sym_34] = ACTIONS(312),
    [anon_sym_fall] = ACTIONS(312),
    [anon_sym_35] = ACTIONS(312),
    [anon_sym_classify] = ACTIONS(312),
    [anon_sym_36] = ACTIONS(312),
    [anon_sym_deduplicate] = ACTIONS(312),
    [anon_sym_37] = ACTIONS(312),
    [anon_sym_box] = ACTIONS(312),
    [anon_sym_38] = ACTIONS(312),
    [anon_sym_unbox] = ACTIONS(312),
    [anon_sym_39] = ACTIONS(312),
    [anon_sym_match] = ACTIONS(312),
    [anon_sym_40] = ACTIONS(312),
    [anon_sym_couple] = ACTIONS(312),
    [anon_sym_41] = ACTIONS(312),
    [anon_sym_join] = ACTIONS(312),
    [anon_sym_42] = ACTIONS(312),
    [anon_sym_select] = ACTIONS(312),
    [anon_sym_43] = ACTIONS(312),
    [anon_sym_pick] = ACTIONS(312),
    [anon_sym_44] = ACTIONS(312),
    [anon_sym_reshape] = ACTIONS(312),
    [anon_sym_45] = ACTIONS(312),
    [anon_sym_take] = ACTIONS(312),
    [anon_sym_46] = ACTIONS(312),
    [anon_sym_drop] = ACTIONS(312),
    [anon_sym_47] = ACTIONS(312),
    [anon_sym_rotate] = ACTIONS(312),
    [anon_sym_48] = ACTIONS(312),
    [anon_sym_windows] = ACTIONS(312),
    [anon_sym_49] = ACTIONS(312),
    [anon_sym_keep] = ACTIONS(312),
    [anon_sym_50] = ACTIONS(312),
    [anon_sym_find] = ACTIONS(312),
    [anon_sym_51] = ACTIONS(312),
    [anon_sym_member] = ACTIONS(312),
    [anon_sym_52] = ACTIONS(312),
    [anon_sym_indexof] = ACTIONS(312),
    [anon_sym_53] = ACTIONS(312),
    [anon_sym_assert] = ACTIONS(312),
    [anon_sym_54] = ACTIONS(312),
    [anon_sym_wait] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_break] = ACTIONS(312),
    [anon_sym_55] = ACTIONS(312),
    [anon_sym_recur] = ACTIONS(312),
    [anon_sym_56] = ACTIONS(312),
    [anon_sym_random] = ACTIONS(312),
    [anon_sym_57] = ACTIONS(312),
    [anon_sym_gen] = ACTIONS(312),
    [anon_sym_deal] = ACTIONS(312),
    [anon_sym_use] = ACTIONS(312),
    [anon_sym_tag] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(312),
    [anon_sym_sig] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_dump] = ACTIONS(312),
    [anon_sym_reduce] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_scan] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_each] = ACTIONS(312),
    [anon_sym_58] = ACTIONS(312),
    [anon_sym_rows] = ACTIONS(312),
    [anon_sym_59] = ACTIONS(312),
    [anon_sym_repeat] = ACTIONS(312),
    [anon_sym_60] = ACTIONS(312),
    [anon_sym_dip] = ACTIONS(312),
    [anon_sym_di] = ACTIONS(314),
    [anon_sym_61] = ACTIONS(312),
    [anon_sym_gap] = ACTIONS(312),
    [anon_sym_ga] = ACTIONS(314),
    [anon_sym_62] = ACTIONS(312),
    [anon_sym_invert] = ACTIONS(312),
    [anon_sym_63] = ACTIONS(312),
    [anon_sym_spawn] = ACTIONS(312),
    [anon_sym_fold] = ACTIONS(312),
    [anon_sym_64] = ACTIONS(312),
    [anon_sym_distribute] = ACTIONS(312),
    [anon_sym_65] = ACTIONS(312),
    [anon_sym_table] = ACTIONS(312),
    [anon_sym_66] = ACTIONS(312),
    [anon_sym_cross] = ACTIONS(312),
    [anon_sym_67] = ACTIONS(312),
    [anon_sym_group] = ACTIONS(312),
    [anon_sym_68] = ACTIONS(312),
    [anon_sym_partition] = ACTIONS(312),
    [anon_sym_69] = ACTIONS(312),
    [anon_sym_both] = ACTIONS(312),
    [anon_sym_70] = ACTIONS(312),
    [anon_sym_bracket] = ACTIONS(312),
    [anon_sym_71] = ACTIONS(312),
    [anon_sym_fork] = ACTIONS(312),
    [anon_sym_72] = ACTIONS(312),
    [anon_sym_under] = ACTIONS(312),
    [anon_sym_73] = ACTIONS(312),
    [anon_sym_level] = ACTIONS(312),
    [anon_sym_74] = ACTIONS(312),
    [anon_sym_fill] = ACTIONS(312),
    [anon_sym_75] = ACTIONS(312),
    [anon_sym_bind] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_try] = ACTIONS(312),
    [anon_sym_76] = ACTIONS(312),
    [anon_sym_77] = ACTIONS(312),
    [anon_sym_78] = ACTIONS(312),
    [anon_sym_79] = ACTIONS(312),
    [anon_sym_80] = ACTIONS(312),
    [anon_sym_81] = ACTIONS(312),
    [anon_sym_82] = ACTIONS(312),
    [anon_sym_roll] = ACTIONS(312),
    [anon_sym_83] = ACTIONS(312),
    [anon_sym_unroll] = ACTIONS(312),
    [anon_sym_84] = ACTIONS(312),
    [anon_sym_restack] = ACTIONS(312),
    [anon_sym_85] = ACTIONS(312),
    [anon_sym_86] = ACTIONS(312),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(312),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_] = ACTIONS(318),
    [aux_sym_number_token1] = ACTIONS(316),
    [aux_sym_character_token1] = ACTIONS(316),
    [sym_multiLineString] = ACTIONS(316),
    [sym_signature] = ACTIONS(316),
    [sym_identifier] = ACTIONS(318),
    [sym_identifier_deprecated] = ACTIONS(318),
    [sym_system] = ACTIONS(316),
    [sym_comment] = ACTIONS(318),
    [sym_openParen] = ACTIONS(316),
    [sym_openCurly] = ACTIONS(316),
    [sym_openBracket] = ACTIONS(316),
    [sym_underscore] = ACTIONS(316),
    [sym_leftArrow] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_identity] = ACTIONS(316),
    [anon_sym_id] = ACTIONS(318),
    [anon_sym_6] = ACTIONS(316),
    [anon_sym_not] = ACTIONS(316),
    [anon_sym_7] = ACTIONS(316),
    [anon_sym_sign] = ACTIONS(316),
    [anon_sym_8] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [anon_sym_absolutevalue] = ACTIONS(316),
    [anon_sym_9] = ACTIONS(316),
    [anon_sym_sqrt] = ACTIONS(316),
    [anon_sym_10] = ACTIONS(316),
    [anon_sym_sine] = ACTIONS(316),
    [anon_sym_11] = ACTIONS(316),
    [anon_sym_floor] = ACTIONS(316),
    [anon_sym_12] = ACTIONS(316),
    [anon_sym_ceiling] = ACTIONS(316),
    [anon_sym_13] = ACTIONS(316),
    [anon_sym_round] = ACTIONS(316),
    [anon_sym_14] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_BANG_EQ] = ACTIONS(316),
    [anon_sym_15] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [anon_sym_16] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [anon_sym_17] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_18] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [anon_sym_19] = ACTIONS(316),
    [anon_sym_modulus] = ACTIONS(316),
    [anon_sym_20] = ACTIONS(316),
    [anon_sym_power] = ACTIONS(316),
    [anon_sym_21] = ACTIONS(316),
    [anon_sym_logarithm] = ACTIONS(316),
    [anon_sym_22] = ACTIONS(316),
    [anon_sym_minimum] = ACTIONS(316),
    [anon_sym_23] = ACTIONS(316),
    [anon_sym_maximum] = ACTIONS(316),
    [anon_sym_24] = ACTIONS(316),
    [anon_sym_atangent] = ACTIONS(316),
    [anon_sym_25] = ACTIONS(316),
    [anon_sym_length] = ACTIONS(316),
    [anon_sym_26] = ACTIONS(316),
    [anon_sym_shape] = ACTIONS(316),
    [anon_sym_27] = ACTIONS(316),
    [anon_sym_range] = ACTIONS(316),
    [anon_sym_28] = ACTIONS(316),
    [anon_sym_first] = ACTIONS(316),
    [anon_sym_29] = ACTIONS(316),
    [anon_sym_reverse] = ACTIONS(316),
    [anon_sym_30] = ACTIONS(316),
    [anon_sym_deshape] = ACTIONS(316),
    [anon_sym_31] = ACTIONS(316),
    [anon_sym_bits] = ACTIONS(316),
    [anon_sym_32] = ACTIONS(316),
    [anon_sym_transpose] = ACTIONS(316),
    [anon_sym_33] = ACTIONS(316),
    [anon_sym_rise] = ACTIONS(316),
    [anon_sym_34] = ACTIONS(316),
    [anon_sym_fall] = ACTIONS(316),
    [anon_sym_35] = ACTIONS(316),
    [anon_sym_classify] = ACTIONS(316),
    [anon_sym_36] = ACTIONS(316),
    [anon_sym_deduplicate] = ACTIONS(316),
    [anon_sym_37] = ACTIONS(316),
    [anon_sym_box] = ACTIONS(316),
    [anon_sym_38] = ACTIONS(316),
    [anon_sym_unbox] = ACTIONS(316),
    [anon_sym_39] = ACTIONS(316),
    [anon_sym_match] = ACTIONS(316),
    [anon_sym_40] = ACTIONS(316),
    [anon_sym_couple] = ACTIONS(316),
    [anon_sym_41] = ACTIONS(316),
    [anon_sym_join] = ACTIONS(316),
    [anon_sym_42] = ACTIONS(316),
    [anon_sym_select] = ACTIONS(316),
    [anon_sym_43] = ACTIONS(316),
    [anon_sym_pick] = ACTIONS(316),
    [anon_sym_44] = ACTIONS(316),
    [anon_sym_reshape] = ACTIONS(316),
    [anon_sym_45] = ACTIONS(316),
    [anon_sym_take] = ACTIONS(316),
    [anon_sym_46] = ACTIONS(316),
    [anon_sym_drop] = ACTIONS(316),
    [anon_sym_47] = ACTIONS(316),
    [anon_sym_rotate] = ACTIONS(316),
    [anon_sym_48] = ACTIONS(316),
    [anon_sym_windows] = ACTIONS(316),
    [anon_sym_49] = ACTIONS(316),
    [anon_sym_keep] = ACTIONS(316),
    [anon_sym_50] = ACTIONS(316),
    [anon_sym_find] = ACTIONS(316),
    [anon_sym_51] = ACTIONS(316),
    [anon_sym_member] = ACTIONS(316),
    [anon_sym_52] = ACTIONS(316),
    [anon_sym_indexof] = ACTIONS(316),
    [anon_sym_53] = ACTIONS(316),
    [anon_sym_assert] = ACTIONS(316),
    [anon_sym_54] = ACTIONS(316),
    [anon_sym_wait] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_break] = ACTIONS(316),
    [anon_sym_55] = ACTIONS(316),
    [anon_sym_recur] = ACTIONS(316),
    [anon_sym_56] = ACTIONS(316),
    [anon_sym_random] = ACTIONS(316),
    [anon_sym_57] = ACTIONS(316),
    [anon_sym_gen] = ACTIONS(316),
    [anon_sym_deal] = ACTIONS(316),
    [anon_sym_use] = ACTIONS(316),
    [anon_sym_tag] = ACTIONS(316),
    [anon_sym_type] = ACTIONS(316),
    [anon_sym_sig] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_dump] = ACTIONS(316),
    [anon_sym_reduce] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_scan] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_each] = ACTIONS(316),
    [anon_sym_58] = ACTIONS(316),
    [anon_sym_rows] = ACTIONS(316),
    [anon_sym_59] = ACTIONS(316),
    [anon_sym_repeat] = ACTIONS(316),
    [anon_sym_60] = ACTIONS(316),
    [anon_sym_dip] = ACTIONS(316),
    [anon_sym_di] = ACTIONS(318),
    [anon_sym_61] = ACTIONS(316),
    [anon_sym_gap] = ACTIONS(316),
    [anon_sym_ga] = ACTIONS(318),
    [anon_sym_62] = ACTIONS(316),
    [anon_sym_invert] = ACTIONS(316),
    [anon_sym_63] = ACTIONS(316),
    [anon_sym_spawn] = ACTIONS(316),
    [anon_sym_fold] = ACTIONS(316),
    [anon_sym_64] = ACTIONS(316),
    [anon_sym_distribute] = ACTIONS(316),
    [anon_sym_65] = ACTIONS(316),
    [anon_sym_table] = ACTIONS(316),
    [anon_sym_66] = ACTIONS(316),
    [anon_sym_cross] = ACTIONS(316),
    [anon_sym_67] = ACTIONS(316),
    [anon_sym_group] = ACTIONS(316),
    [anon_sym_68] = ACTIONS(316),
    [anon_sym_partition] = ACTIONS(316),
    [anon_sym_69] = ACTIONS(316),
    [anon_sym_both] = ACTIONS(316),
    [anon_sym_70] = ACTIONS(316),
    [anon_sym_bracket] = ACTIONS(316),
    [anon_sym_71] = ACTIONS(316),
    [anon_sym_fork] = ACTIONS(316),
    [anon_sym_72] = ACTIONS(316),
    [anon_sym_under] = ACTIONS(316),
    [anon_sym_73] = ACTIONS(316),
    [anon_sym_level] = ACTIONS(316),
    [anon_sym_74] = ACTIONS(316),
    [anon_sym_fill] = ACTIONS(316),
    [anon_sym_75] = ACTIONS(316),
    [anon_sym_bind] = ACTIONS(316),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(316),
    [anon_sym_try] = ACTIONS(316),
    [anon_sym_76] = ACTIONS(316),
    [anon_sym_77] = ACTIONS(316),
    [anon_sym_78] = ACTIONS(316),
    [anon_sym_79] = ACTIONS(316),
    [anon_sym_80] = ACTIONS(316),
    [anon_sym_81] = ACTIONS(316),
    [anon_sym_82] = ACTIONS(316),
    [anon_sym_roll] = ACTIONS(316),
    [anon_sym_83] = ACTIONS(316),
    [anon_sym_unroll] = ACTIONS(316),
    [anon_sym_84] = ACTIONS(316),
    [anon_sym_restack] = ACTIONS(316),
    [anon_sym_85] = ACTIONS(316),
    [anon_sym_86] = ACTIONS(316),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(316),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_] = ACTIONS(322),
    [aux_sym_number_token1] = ACTIONS(320),
    [aux_sym_character_token1] = ACTIONS(320),
    [sym_multiLineString] = ACTIONS(320),
    [sym_signature] = ACTIONS(320),
    [sym_identifier] = ACTIONS(322),
    [sym_identifier_deprecated] = ACTIONS(322),
    [sym_system] = ACTIONS(320),
    [sym_comment] = ACTIONS(322),
    [sym_openParen] = ACTIONS(320),
    [sym_openCurly] = ACTIONS(320),
    [sym_openBracket] = ACTIONS(320),
    [sym_underscore] = ACTIONS(324),
    [sym_leftArrow] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_identity] = ACTIONS(320),
    [anon_sym_id] = ACTIONS(322),
    [anon_sym_6] = ACTIONS(320),
    [anon_sym_not] = ACTIONS(320),
    [anon_sym_7] = ACTIONS(320),
    [anon_sym_sign] = ACTIONS(320),
    [anon_sym_8] = ACTIONS(320),
    [anon_sym_BQUOTE] = ACTIONS(320),
    [anon_sym_absolutevalue] = ACTIONS(320),
    [anon_sym_9] = ACTIONS(320),
    [anon_sym_sqrt] = ACTIONS(320),
    [anon_sym_10] = ACTIONS(320),
    [anon_sym_sine] = ACTIONS(320),
    [anon_sym_11] = ACTIONS(320),
    [anon_sym_floor] = ACTIONS(320),
    [anon_sym_12] = ACTIONS(320),
    [anon_sym_ceiling] = ACTIONS(320),
    [anon_sym_13] = ACTIONS(320),
    [anon_sym_round] = ACTIONS(320),
    [anon_sym_14] = ACTIONS(320),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_15] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_16] = ACTIONS(320),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_17] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_18] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(320),
    [anon_sym_19] = ACTIONS(320),
    [anon_sym_modulus] = ACTIONS(320),
    [anon_sym_20] = ACTIONS(320),
    [anon_sym_power] = ACTIONS(320),
    [anon_sym_21] = ACTIONS(320),
    [anon_sym_logarithm] = ACTIONS(320),
    [anon_sym_22] = ACTIONS(320),
    [anon_sym_minimum] = ACTIONS(320),
    [anon_sym_23] = ACTIONS(320),
    [anon_sym_maximum] = ACTIONS(320),
    [anon_sym_24] = ACTIONS(320),
    [anon_sym_atangent] = ACTIONS(320),
    [anon_sym_25] = ACTIONS(320),
    [anon_sym_length] = ACTIONS(320),
    [anon_sym_26] = ACTIONS(320),
    [anon_sym_shape] = ACTIONS(320),
    [anon_sym_27] = ACTIONS(320),
    [anon_sym_range] = ACTIONS(320),
    [anon_sym_28] = ACTIONS(320),
    [anon_sym_first] = ACTIONS(320),
    [anon_sym_29] = ACTIONS(320),
    [anon_sym_reverse] = ACTIONS(320),
    [anon_sym_30] = ACTIONS(320),
    [anon_sym_deshape] = ACTIONS(320),
    [anon_sym_31] = ACTIONS(320),
    [anon_sym_bits] = ACTIONS(320),
    [anon_sym_32] = ACTIONS(320),
    [anon_sym_transpose] = ACTIONS(320),
    [anon_sym_33] = ACTIONS(320),
    [anon_sym_rise] = ACTIONS(320),
    [anon_sym_34] = ACTIONS(320),
    [anon_sym_fall] = ACTIONS(320),
    [anon_sym_35] = ACTIONS(320),
    [anon_sym_classify] = ACTIONS(320),
    [anon_sym_36] = ACTIONS(320),
    [anon_sym_deduplicate] = ACTIONS(320),
    [anon_sym_37] = ACTIONS(320),
    [anon_sym_box] = ACTIONS(320),
    [anon_sym_38] = ACTIONS(320),
    [anon_sym_unbox] = ACTIONS(320),
    [anon_sym_39] = ACTIONS(320),
    [anon_sym_match] = ACTIONS(320),
    [anon_sym_40] = ACTIONS(320),
    [anon_sym_couple] = ACTIONS(320),
    [anon_sym_41] = ACTIONS(320),
    [anon_sym_join] = ACTIONS(320),
    [anon_sym_42] = ACTIONS(320),
    [anon_sym_select] = ACTIONS(320),
    [anon_sym_43] = ACTIONS(320),
    [anon_sym_pick] = ACTIONS(320),
    [anon_sym_44] = ACTIONS(320),
    [anon_sym_reshape] = ACTIONS(320),
    [anon_sym_45] = ACTIONS(320),
    [anon_sym_take] = ACTIONS(320),
    [anon_sym_46] = ACTIONS(320),
    [anon_sym_drop] = ACTIONS(320),
    [anon_sym_47] = ACTIONS(320),
    [anon_sym_rotate] = ACTIONS(320),
    [anon_sym_48] = ACTIONS(320),
    [anon_sym_windows] = ACTIONS(320),
    [anon_sym_49] = ACTIONS(320),
    [anon_sym_keep] = ACTIONS(320),
    [anon_sym_50] = ACTIONS(320),
    [anon_sym_find] = ACTIONS(320),
    [anon_sym_51] = ACTIONS(320),
    [anon_sym_member] = ACTIONS(320),
    [anon_sym_52] = ACTIONS(320),
    [anon_sym_indexof] = ACTIONS(320),
    [anon_sym_53] = ACTIONS(320),
    [anon_sym_assert] = ACTIONS(320),
    [anon_sym_54] = ACTIONS(320),
    [anon_sym_wait] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(322),
    [anon_sym_break] = ACTIONS(320),
    [anon_sym_55] = ACTIONS(320),
    [anon_sym_recur] = ACTIONS(320),
    [anon_sym_56] = ACTIONS(320),
    [anon_sym_random] = ACTIONS(320),
    [anon_sym_57] = ACTIONS(320),
    [anon_sym_gen] = ACTIONS(320),
    [anon_sym_deal] = ACTIONS(320),
    [anon_sym_use] = ACTIONS(320),
    [anon_sym_tag] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [anon_sym_sig] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_dump] = ACTIONS(320),
    [anon_sym_reduce] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_scan] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(320),
    [anon_sym_each] = ACTIONS(320),
    [anon_sym_58] = ACTIONS(320),
    [anon_sym_rows] = ACTIONS(320),
    [anon_sym_59] = ACTIONS(320),
    [anon_sym_repeat] = ACTIONS(320),
    [anon_sym_60] = ACTIONS(320),
    [anon_sym_dip] = ACTIONS(320),
    [anon_sym_di] = ACTIONS(322),
    [anon_sym_61] = ACTIONS(320),
    [anon_sym_gap] = ACTIONS(320),
    [anon_sym_ga] = ACTIONS(322),
    [anon_sym_62] = ACTIONS(320),
    [anon_sym_invert] = ACTIONS(320),
    [anon_sym_63] = ACTIONS(320),
    [anon_sym_spawn] = ACTIONS(320),
    [anon_sym_fold] = ACTIONS(320),
    [anon_sym_64] = ACTIONS(320),
    [anon_sym_distribute] = ACTIONS(320),
    [anon_sym_65] = ACTIONS(320),
    [anon_sym_table] = ACTIONS(320),
    [anon_sym_66] = ACTIONS(320),
    [anon_sym_cross] = ACTIONS(320),
    [anon_sym_67] = ACTIONS(320),
    [anon_sym_group] = ACTIONS(320),
    [anon_sym_68] = ACTIONS(320),
    [anon_sym_partition] = ACTIONS(320),
    [anon_sym_69] = ACTIONS(320),
    [anon_sym_both] = ACTIONS(320),
    [anon_sym_70] = ACTIONS(320),
    [anon_sym_bracket] = ACTIONS(320),
    [anon_sym_71] = ACTIONS(320),
    [anon_sym_fork] = ACTIONS(320),
    [anon_sym_72] = ACTIONS(320),
    [anon_sym_under] = ACTIONS(320),
    [anon_sym_73] = ACTIONS(320),
    [anon_sym_level] = ACTIONS(320),
    [anon_sym_74] = ACTIONS(320),
    [anon_sym_fill] = ACTIONS(320),
    [anon_sym_75] = ACTIONS(320),
    [anon_sym_bind] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_QMARK] = ACTIONS(320),
    [anon_sym_try] = ACTIONS(320),
    [anon_sym_76] = ACTIONS(320),
    [anon_sym_77] = ACTIONS(320),
    [anon_sym_78] = ACTIONS(320),
    [anon_sym_79] = ACTIONS(320),
    [anon_sym_80] = ACTIONS(320),
    [anon_sym_81] = ACTIONS(320),
    [anon_sym_82] = ACTIONS(320),
    [anon_sym_roll] = ACTIONS(320),
    [anon_sym_83] = ACTIONS(320),
    [anon_sym_unroll] = ACTIONS(320),
    [anon_sym_84] = ACTIONS(320),
    [anon_sym_restack] = ACTIONS(320),
    [anon_sym_85] = ACTIONS(320),
    [anon_sym_86] = ACTIONS(320),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(320),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_] = ACTIONS(328),
    [aux_sym_number_token1] = ACTIONS(326),
    [aux_sym_character_token1] = ACTIONS(326),
    [sym_multiLineString] = ACTIONS(326),
    [sym_signature] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
    [sym_identifier_deprecated] = ACTIONS(328),
    [sym_system] = ACTIONS(326),
    [sym_comment] = ACTIONS(328),
    [sym_openParen] = ACTIONS(326),
    [sym_openCurly] = ACTIONS(326),
    [sym_openBracket] = ACTIONS(326),
    [sym_underscore] = ACTIONS(326),
    [sym_leftArrow] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_identity] = ACTIONS(326),
    [anon_sym_id] = ACTIONS(328),
    [anon_sym_6] = ACTIONS(326),
    [anon_sym_not] = ACTIONS(326),
    [anon_sym_7] = ACTIONS(326),
    [anon_sym_sign] = ACTIONS(326),
    [anon_sym_8] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_absolutevalue] = ACTIONS(326),
    [anon_sym_9] = ACTIONS(326),
    [anon_sym_sqrt] = ACTIONS(326),
    [anon_sym_10] = ACTIONS(326),
    [anon_sym_sine] = ACTIONS(326),
    [anon_sym_11] = ACTIONS(326),
    [anon_sym_floor] = ACTIONS(326),
    [anon_sym_12] = ACTIONS(326),
    [anon_sym_ceiling] = ACTIONS(326),
    [anon_sym_13] = ACTIONS(326),
    [anon_sym_round] = ACTIONS(326),
    [anon_sym_14] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_15] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [anon_sym_16] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_17] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_18] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_19] = ACTIONS(326),
    [anon_sym_modulus] = ACTIONS(326),
    [anon_sym_20] = ACTIONS(326),
    [anon_sym_power] = ACTIONS(326),
    [anon_sym_21] = ACTIONS(326),
    [anon_sym_logarithm] = ACTIONS(326),
    [anon_sym_22] = ACTIONS(326),
    [anon_sym_minimum] = ACTIONS(326),
    [anon_sym_23] = ACTIONS(326),
    [anon_sym_maximum] = ACTIONS(326),
    [anon_sym_24] = ACTIONS(326),
    [anon_sym_atangent] = ACTIONS(326),
    [anon_sym_25] = ACTIONS(326),
    [anon_sym_length] = ACTIONS(326),
    [anon_sym_26] = ACTIONS(326),
    [anon_sym_shape] = ACTIONS(326),
    [anon_sym_27] = ACTIONS(326),
    [anon_sym_range] = ACTIONS(326),
    [anon_sym_28] = ACTIONS(326),
    [anon_sym_first] = ACTIONS(326),
    [anon_sym_29] = ACTIONS(326),
    [anon_sym_reverse] = ACTIONS(326),
    [anon_sym_30] = ACTIONS(326),
    [anon_sym_deshape] = ACTIONS(326),
    [anon_sym_31] = ACTIONS(326),
    [anon_sym_bits] = ACTIONS(326),
    [anon_sym_32] = ACTIONS(326),
    [anon_sym_transpose] = ACTIONS(326),
    [anon_sym_33] = ACTIONS(326),
    [anon_sym_rise] = ACTIONS(326),
    [anon_sym_34] = ACTIONS(326),
    [anon_sym_fall] = ACTIONS(326),
    [anon_sym_35] = ACTIONS(326),
    [anon_sym_classify] = ACTIONS(326),
    [anon_sym_36] = ACTIONS(326),
    [anon_sym_deduplicate] = ACTIONS(326),
    [anon_sym_37] = ACTIONS(326),
    [anon_sym_box] = ACTIONS(326),
    [anon_sym_38] = ACTIONS(326),
    [anon_sym_unbox] = ACTIONS(326),
    [anon_sym_39] = ACTIONS(326),
    [anon_sym_match] = ACTIONS(326),
    [anon_sym_40] = ACTIONS(326),
    [anon_sym_couple] = ACTIONS(326),
    [anon_sym_41] = ACTIONS(326),
    [anon_sym_join] = ACTIONS(326),
    [anon_sym_42] = ACTIONS(326),
    [anon_sym_select] = ACTIONS(326),
    [anon_sym_43] = ACTIONS(326),
    [anon_sym_pick] = ACTIONS(326),
    [anon_sym_44] = ACTIONS(326),
    [anon_sym_reshape] = ACTIONS(326),
    [anon_sym_45] = ACTIONS(326),
    [anon_sym_take] = ACTIONS(326),
    [anon_sym_46] = ACTIONS(326),
    [anon_sym_drop] = ACTIONS(326),
    [anon_sym_47] = ACTIONS(326),
    [anon_sym_rotate] = ACTIONS(326),
    [anon_sym_48] = ACTIONS(326),
    [anon_sym_windows] = ACTIONS(326),
    [anon_sym_49] = ACTIONS(326),
    [anon_sym_keep] = ACTIONS(326),
    [anon_sym_50] = ACTIONS(326),
    [anon_sym_find] = ACTIONS(326),
    [anon_sym_51] = ACTIONS(326),
    [anon_sym_member] = ACTIONS(326),
    [anon_sym_52] = ACTIONS(326),
    [anon_sym_indexof] = ACTIONS(326),
    [anon_sym_53] = ACTIONS(326),
    [anon_sym_assert] = ACTIONS(326),
    [anon_sym_54] = ACTIONS(326),
    [anon_sym_wait] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_break] = ACTIONS(326),
    [anon_sym_55] = ACTIONS(326),
    [anon_sym_recur] = ACTIONS(326),
    [anon_sym_56] = ACTIONS(326),
    [anon_sym_random] = ACTIONS(326),
    [anon_sym_57] = ACTIONS(326),
    [anon_sym_gen] = ACTIONS(326),
    [anon_sym_deal] = ACTIONS(326),
    [anon_sym_use] = ACTIONS(326),
    [anon_sym_tag] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [anon_sym_sig] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_dump] = ACTIONS(326),
    [anon_sym_reduce] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_scan] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_each] = ACTIONS(326),
    [anon_sym_58] = ACTIONS(326),
    [anon_sym_rows] = ACTIONS(326),
    [anon_sym_59] = ACTIONS(326),
    [anon_sym_repeat] = ACTIONS(326),
    [anon_sym_60] = ACTIONS(326),
    [anon_sym_dip] = ACTIONS(326),
    [anon_sym_di] = ACTIONS(328),
    [anon_sym_61] = ACTIONS(326),
    [anon_sym_gap] = ACTIONS(326),
    [anon_sym_ga] = ACTIONS(328),
    [anon_sym_62] = ACTIONS(326),
    [anon_sym_invert] = ACTIONS(326),
    [anon_sym_63] = ACTIONS(326),
    [anon_sym_spawn] = ACTIONS(326),
    [anon_sym_fold] = ACTIONS(326),
    [anon_sym_64] = ACTIONS(326),
    [anon_sym_distribute] = ACTIONS(326),
    [anon_sym_65] = ACTIONS(326),
    [anon_sym_table] = ACTIONS(326),
    [anon_sym_66] = ACTIONS(326),
    [anon_sym_cross] = ACTIONS(326),
    [anon_sym_67] = ACTIONS(326),
    [anon_sym_group] = ACTIONS(326),
    [anon_sym_68] = ACTIONS(326),
    [anon_sym_partition] = ACTIONS(326),
    [anon_sym_69] = ACTIONS(326),
    [anon_sym_both] = ACTIONS(326),
    [anon_sym_70] = ACTIONS(326),
    [anon_sym_bracket] = ACTIONS(326),
    [anon_sym_71] = ACTIONS(326),
    [anon_sym_fork] = ACTIONS(326),
    [anon_sym_72] = ACTIONS(326),
    [anon_sym_under] = ACTIONS(326),
    [anon_sym_73] = ACTIONS(326),
    [anon_sym_level] = ACTIONS(326),
    [anon_sym_74] = ACTIONS(326),
    [anon_sym_fill] = ACTIONS(326),
    [anon_sym_75] = ACTIONS(326),
    [anon_sym_bind] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [anon_sym_76] = ACTIONS(326),
    [anon_sym_77] = ACTIONS(326),
    [anon_sym_78] = ACTIONS(326),
    [anon_sym_79] = ACTIONS(326),
    [anon_sym_80] = ACTIONS(326),
    [anon_sym_81] = ACTIONS(326),
    [anon_sym_82] = ACTIONS(326),
    [anon_sym_roll] = ACTIONS(326),
    [anon_sym_83] = ACTIONS(326),
    [anon_sym_unroll] = ACTIONS(326),
    [anon_sym_84] = ACTIONS(326),
    [anon_sym_restack] = ACTIONS(326),
    [anon_sym_85] = ACTIONS(326),
    [anon_sym_86] = ACTIONS(326),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(326),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_] = ACTIONS(332),
    [aux_sym_number_token1] = ACTIONS(330),
    [aux_sym_character_token1] = ACTIONS(330),
    [sym_multiLineString] = ACTIONS(330),
    [sym_signature] = ACTIONS(330),
    [sym_identifier] = ACTIONS(332),
    [sym_identifier_deprecated] = ACTIONS(332),
    [sym_system] = ACTIONS(330),
    [sym_comment] = ACTIONS(332),
    [sym_openParen] = ACTIONS(330),
    [sym_openCurly] = ACTIONS(330),
    [sym_openBracket] = ACTIONS(330),
    [sym_underscore] = ACTIONS(330),
    [sym_leftArrow] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_identity] = ACTIONS(330),
    [anon_sym_id] = ACTIONS(332),
    [anon_sym_6] = ACTIONS(330),
    [anon_sym_not] = ACTIONS(330),
    [anon_sym_7] = ACTIONS(330),
    [anon_sym_sign] = ACTIONS(330),
    [anon_sym_8] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(330),
    [anon_sym_absolutevalue] = ACTIONS(330),
    [anon_sym_9] = ACTIONS(330),
    [anon_sym_sqrt] = ACTIONS(330),
    [anon_sym_10] = ACTIONS(330),
    [anon_sym_sine] = ACTIONS(330),
    [anon_sym_11] = ACTIONS(330),
    [anon_sym_floor] = ACTIONS(330),
    [anon_sym_12] = ACTIONS(330),
    [anon_sym_ceiling] = ACTIONS(330),
    [anon_sym_13] = ACTIONS(330),
    [anon_sym_round] = ACTIONS(330),
    [anon_sym_14] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(330),
    [anon_sym_15] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_16] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_17] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_18] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_19] = ACTIONS(330),
    [anon_sym_modulus] = ACTIONS(330),
    [anon_sym_20] = ACTIONS(330),
    [anon_sym_power] = ACTIONS(330),
    [anon_sym_21] = ACTIONS(330),
    [anon_sym_logarithm] = ACTIONS(330),
    [anon_sym_22] = ACTIONS(330),
    [anon_sym_minimum] = ACTIONS(330),
    [anon_sym_23] = ACTIONS(330),
    [anon_sym_maximum] = ACTIONS(330),
    [anon_sym_24] = ACTIONS(330),
    [anon_sym_atangent] = ACTIONS(330),
    [anon_sym_25] = ACTIONS(330),
    [anon_sym_length] = ACTIONS(330),
    [anon_sym_26] = ACTIONS(330),
    [anon_sym_shape] = ACTIONS(330),
    [anon_sym_27] = ACTIONS(330),
    [anon_sym_range] = ACTIONS(330),
    [anon_sym_28] = ACTIONS(330),
    [anon_sym_first] = ACTIONS(330),
    [anon_sym_29] = ACTIONS(330),
    [anon_sym_reverse] = ACTIONS(330),
    [anon_sym_30] = ACTIONS(330),
    [anon_sym_deshape] = ACTIONS(330),
    [anon_sym_31] = ACTIONS(330),
    [anon_sym_bits] = ACTIONS(330),
    [anon_sym_32] = ACTIONS(330),
    [anon_sym_transpose] = ACTIONS(330),
    [anon_sym_33] = ACTIONS(330),
    [anon_sym_rise] = ACTIONS(330),
    [anon_sym_34] = ACTIONS(330),
    [anon_sym_fall] = ACTIONS(330),
    [anon_sym_35] = ACTIONS(330),
    [anon_sym_classify] = ACTIONS(330),
    [anon_sym_36] = ACTIONS(330),
    [anon_sym_deduplicate] = ACTIONS(330),
    [anon_sym_37] = ACTIONS(330),
    [anon_sym_box] = ACTIONS(330),
    [anon_sym_38] = ACTIONS(330),
    [anon_sym_unbox] = ACTIONS(330),
    [anon_sym_39] = ACTIONS(330),
    [anon_sym_match] = ACTIONS(330),
    [anon_sym_40] = ACTIONS(330),
    [anon_sym_couple] = ACTIONS(330),
    [anon_sym_41] = ACTIONS(330),
    [anon_sym_join] = ACTIONS(330),
    [anon_sym_42] = ACTIONS(330),
    [anon_sym_select] = ACTIONS(330),
    [anon_sym_43] = ACTIONS(330),
    [anon_sym_pick] = ACTIONS(330),
    [anon_sym_44] = ACTIONS(330),
    [anon_sym_reshape] = ACTIONS(330),
    [anon_sym_45] = ACTIONS(330),
    [anon_sym_take] = ACTIONS(330),
    [anon_sym_46] = ACTIONS(330),
    [anon_sym_drop] = ACTIONS(330),
    [anon_sym_47] = ACTIONS(330),
    [anon_sym_rotate] = ACTIONS(330),
    [anon_sym_48] = ACTIONS(330),
    [anon_sym_windows] = ACTIONS(330),
    [anon_sym_49] = ACTIONS(330),
    [anon_sym_keep] = ACTIONS(330),
    [anon_sym_50] = ACTIONS(330),
    [anon_sym_find] = ACTIONS(330),
    [anon_sym_51] = ACTIONS(330),
    [anon_sym_member] = ACTIONS(330),
    [anon_sym_52] = ACTIONS(330),
    [anon_sym_indexof] = ACTIONS(330),
    [anon_sym_53] = ACTIONS(330),
    [anon_sym_assert] = ACTIONS(330),
    [anon_sym_54] = ACTIONS(330),
    [anon_sym_wait] = ACTIONS(330),
    [anon_sym_BANG] = ACTIONS(332),
    [anon_sym_break] = ACTIONS(330),
    [anon_sym_55] = ACTIONS(330),
    [anon_sym_recur] = ACTIONS(330),
    [anon_sym_56] = ACTIONS(330),
    [anon_sym_random] = ACTIONS(330),
    [anon_sym_57] = ACTIONS(330),
    [anon_sym_gen] = ACTIONS(330),
    [anon_sym_deal] = ACTIONS(330),
    [anon_sym_use] = ACTIONS(330),
    [anon_sym_tag] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_sig] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(330),
    [anon_sym_dump] = ACTIONS(330),
    [anon_sym_reduce] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_scan] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_each] = ACTIONS(330),
    [anon_sym_58] = ACTIONS(330),
    [anon_sym_rows] = ACTIONS(330),
    [anon_sym_59] = ACTIONS(330),
    [anon_sym_repeat] = ACTIONS(330),
    [anon_sym_60] = ACTIONS(330),
    [anon_sym_dip] = ACTIONS(330),
    [anon_sym_di] = ACTIONS(332),
    [anon_sym_61] = ACTIONS(330),
    [anon_sym_gap] = ACTIONS(330),
    [anon_sym_ga] = ACTIONS(332),
    [anon_sym_62] = ACTIONS(330),
    [anon_sym_invert] = ACTIONS(330),
    [anon_sym_63] = ACTIONS(330),
    [anon_sym_spawn] = ACTIONS(330),
    [anon_sym_fold] = ACTIONS(330),
    [anon_sym_64] = ACTIONS(330),
    [anon_sym_distribute] = ACTIONS(330),
    [anon_sym_65] = ACTIONS(330),
    [anon_sym_table] = ACTIONS(330),
    [anon_sym_66] = ACTIONS(330),
    [anon_sym_cross] = ACTIONS(330),
    [anon_sym_67] = ACTIONS(330),
    [anon_sym_group] = ACTIONS(330),
    [anon_sym_68] = ACTIONS(330),
    [anon_sym_partition] = ACTIONS(330),
    [anon_sym_69] = ACTIONS(330),
    [anon_sym_both] = ACTIONS(330),
    [anon_sym_70] = ACTIONS(330),
    [anon_sym_bracket] = ACTIONS(330),
    [anon_sym_71] = ACTIONS(330),
    [anon_sym_fork] = ACTIONS(330),
    [anon_sym_72] = ACTIONS(330),
    [anon_sym_under] = ACTIONS(330),
    [anon_sym_73] = ACTIONS(330),
    [anon_sym_level] = ACTIONS(330),
    [anon_sym_74] = ACTIONS(330),
    [anon_sym_fill] = ACTIONS(330),
    [anon_sym_75] = ACTIONS(330),
    [anon_sym_bind] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_try] = ACTIONS(330),
    [anon_sym_76] = ACTIONS(330),
    [anon_sym_77] = ACTIONS(330),
    [anon_sym_78] = ACTIONS(330),
    [anon_sym_79] = ACTIONS(330),
    [anon_sym_80] = ACTIONS(330),
    [anon_sym_81] = ACTIONS(330),
    [anon_sym_82] = ACTIONS(330),
    [anon_sym_roll] = ACTIONS(330),
    [anon_sym_83] = ACTIONS(330),
    [anon_sym_unroll] = ACTIONS(330),
    [anon_sym_84] = ACTIONS(330),
    [anon_sym_restack] = ACTIONS(330),
    [anon_sym_85] = ACTIONS(330),
    [anon_sym_86] = ACTIONS(330),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(330),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [aux_sym_number_token1] = ACTIONS(181),
    [aux_sym_character_token1] = ACTIONS(181),
    [sym_multiLineString] = ACTIONS(181),
    [sym_signature] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_identifier_deprecated] = ACTIONS(183),
    [sym_system] = ACTIONS(181),
    [sym_comment] = ACTIONS(183),
    [sym_openParen] = ACTIONS(181),
    [sym_openCurly] = ACTIONS(181),
    [sym_openBracket] = ACTIONS(181),
    [sym_underscore] = ACTIONS(181),
    [sym_leftArrow] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_identity] = ACTIONS(181),
    [anon_sym_id] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_7] = ACTIONS(181),
    [anon_sym_sign] = ACTIONS(181),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_absolutevalue] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_sqrt] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(181),
    [anon_sym_sine] = ACTIONS(181),
    [anon_sym_11] = ACTIONS(181),
    [anon_sym_floor] = ACTIONS(181),
    [anon_sym_12] = ACTIONS(181),
    [anon_sym_ceiling] = ACTIONS(181),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_round] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_16] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_17] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_18] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_19] = ACTIONS(181),
    [anon_sym_modulus] = ACTIONS(181),
    [anon_sym_20] = ACTIONS(181),
    [anon_sym_power] = ACTIONS(181),
    [anon_sym_21] = ACTIONS(181),
    [anon_sym_logarithm] = ACTIONS(181),
    [anon_sym_22] = ACTIONS(181),
    [anon_sym_minimum] = ACTIONS(181),
    [anon_sym_23] = ACTIONS(181),
    [anon_sym_maximum] = ACTIONS(181),
    [anon_sym_24] = ACTIONS(181),
    [anon_sym_atangent] = ACTIONS(181),
    [anon_sym_25] = ACTIONS(181),
    [anon_sym_length] = ACTIONS(181),
    [anon_sym_26] = ACTIONS(181),
    [anon_sym_shape] = ACTIONS(181),
    [anon_sym_27] = ACTIONS(181),
    [anon_sym_range] = ACTIONS(181),
    [anon_sym_28] = ACTIONS(181),
    [anon_sym_first] = ACTIONS(181),
    [anon_sym_29] = ACTIONS(181),
    [anon_sym_reverse] = ACTIONS(181),
    [anon_sym_30] = ACTIONS(181),
    [anon_sym_deshape] = ACTIONS(181),
    [anon_sym_31] = ACTIONS(181),
    [anon_sym_bits] = ACTIONS(181),
    [anon_sym_32] = ACTIONS(181),
    [anon_sym_transpose] = ACTIONS(181),
    [anon_sym_33] = ACTIONS(181),
    [anon_sym_rise] = ACTIONS(181),
    [anon_sym_34] = ACTIONS(181),
    [anon_sym_fall] = ACTIONS(181),
    [anon_sym_35] = ACTIONS(181),
    [anon_sym_classify] = ACTIONS(181),
    [anon_sym_36] = ACTIONS(181),
    [anon_sym_deduplicate] = ACTIONS(181),
    [anon_sym_37] = ACTIONS(181),
    [anon_sym_box] = ACTIONS(181),
    [anon_sym_38] = ACTIONS(181),
    [anon_sym_unbox] = ACTIONS(181),
    [anon_sym_39] = ACTIONS(181),
    [anon_sym_match] = ACTIONS(181),
    [anon_sym_40] = ACTIONS(181),
    [anon_sym_couple] = ACTIONS(181),
    [anon_sym_41] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_42] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_43] = ACTIONS(181),
    [anon_sym_pick] = ACTIONS(181),
    [anon_sym_44] = ACTIONS(181),
    [anon_sym_reshape] = ACTIONS(181),
    [anon_sym_45] = ACTIONS(181),
    [anon_sym_take] = ACTIONS(181),
    [anon_sym_46] = ACTIONS(181),
    [anon_sym_drop] = ACTIONS(181),
    [anon_sym_47] = ACTIONS(181),
    [anon_sym_rotate] = ACTIONS(181),
    [anon_sym_48] = ACTIONS(181),
    [anon_sym_windows] = ACTIONS(181),
    [anon_sym_49] = ACTIONS(181),
    [anon_sym_keep] = ACTIONS(181),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_find] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(181),
    [anon_sym_member] = ACTIONS(181),
    [anon_sym_52] = ACTIONS(181),
    [anon_sym_indexof] = ACTIONS(181),
    [anon_sym_53] = ACTIONS(181),
    [anon_sym_assert] = ACTIONS(181),
    [anon_sym_54] = ACTIONS(181),
    [anon_sym_wait] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_break] = ACTIONS(181),
    [anon_sym_55] = ACTIONS(181),
    [anon_sym_recur] = ACTIONS(181),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_random] = ACTIONS(181),
    [anon_sym_57] = ACTIONS(181),
    [anon_sym_gen] = ACTIONS(181),
    [anon_sym_deal] = ACTIONS(181),
    [anon_sym_use] = ACTIONS(181),
    [anon_sym_tag] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_sig] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_dump] = ACTIONS(181),
    [anon_sym_reduce] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_scan] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_each] = ACTIONS(181),
    [anon_sym_58] = ACTIONS(181),
    [anon_sym_rows] = ACTIONS(181),
    [anon_sym_59] = ACTIONS(181),
    [anon_sym_repeat] = ACTIONS(181),
    [anon_sym_60] = ACTIONS(181),
    [anon_sym_dip] = ACTIONS(181),
    [anon_sym_di] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(181),
    [anon_sym_gap] = ACTIONS(181),
    [anon_sym_ga] = ACTIONS(183),
    [anon_sym_62] = ACTIONS(181),
    [anon_sym_invert] = ACTIONS(181),
    [anon_sym_63] = ACTIONS(181),
    [anon_sym_spawn] = ACTIONS(181),
    [anon_sym_fold] = ACTIONS(181),
    [anon_sym_64] = ACTIONS(181),
    [anon_sym_distribute] = ACTIONS(181),
    [anon_sym_65] = ACTIONS(181),
    [anon_sym_table] = ACTIONS(181),
    [anon_sym_66] = ACTIONS(181),
    [anon_sym_cross] = ACTIONS(181),
    [anon_sym_67] = ACTIONS(181),
    [anon_sym_group] = ACTIONS(181),
    [anon_sym_68] = ACTIONS(181),
    [anon_sym_partition] = ACTIONS(181),
    [anon_sym_69] = ACTIONS(181),
    [anon_sym_both] = ACTIONS(181),
    [anon_sym_70] = ACTIONS(181),
    [anon_sym_bracket] = ACTIONS(181),
    [anon_sym_71] = ACTIONS(181),
    [anon_sym_fork] = ACTIONS(181),
    [anon_sym_72] = ACTIONS(181),
    [anon_sym_under] = ACTIONS(181),
    [anon_sym_73] = ACTIONS(181),
    [anon_sym_level] = ACTIONS(181),
    [anon_sym_74] = ACTIONS(181),
    [anon_sym_fill] = ACTIONS(181),
    [anon_sym_75] = ACTIONS(181),
    [anon_sym_bind] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_try] = ACTIONS(181),
    [anon_sym_76] = ACTIONS(181),
    [anon_sym_77] = ACTIONS(181),
    [anon_sym_78] = ACTIONS(181),
    [anon_sym_79] = ACTIONS(181),
    [anon_sym_80] = ACTIONS(181),
    [anon_sym_81] = ACTIONS(181),
    [anon_sym_82] = ACTIONS(181),
    [anon_sym_roll] = ACTIONS(181),
    [anon_sym_83] = ACTIONS(181),
    [anon_sym_unroll] = ACTIONS(181),
    [anon_sym_84] = ACTIONS(181),
    [anon_sym_restack] = ACTIONS(181),
    [anon_sym_85] = ACTIONS(181),
    [anon_sym_86] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(181),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_] = ACTIONS(336),
    [aux_sym_number_token1] = ACTIONS(334),
    [aux_sym_character_token1] = ACTIONS(334),
    [sym_multiLineString] = ACTIONS(334),
    [sym_signature] = ACTIONS(334),
    [sym_identifier] = ACTIONS(336),
    [sym_identifier_deprecated] = ACTIONS(336),
    [sym_system] = ACTIONS(334),
    [sym_comment] = ACTIONS(336),
    [sym_openParen] = ACTIONS(334),
    [sym_openCurly] = ACTIONS(334),
    [sym_openBracket] = ACTIONS(334),
    [sym_underscore] = ACTIONS(334),
    [sym_leftArrow] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_identity] = ACTIONS(334),
    [anon_sym_id] = ACTIONS(336),
    [anon_sym_6] = ACTIONS(334),
    [anon_sym_not] = ACTIONS(334),
    [anon_sym_7] = ACTIONS(334),
    [anon_sym_sign] = ACTIONS(334),
    [anon_sym_8] = ACTIONS(334),
    [anon_sym_BQUOTE] = ACTIONS(334),
    [anon_sym_absolutevalue] = ACTIONS(334),
    [anon_sym_9] = ACTIONS(334),
    [anon_sym_sqrt] = ACTIONS(334),
    [anon_sym_10] = ACTIONS(334),
    [anon_sym_sine] = ACTIONS(334),
    [anon_sym_11] = ACTIONS(334),
    [anon_sym_floor] = ACTIONS(334),
    [anon_sym_12] = ACTIONS(334),
    [anon_sym_ceiling] = ACTIONS(334),
    [anon_sym_13] = ACTIONS(334),
    [anon_sym_round] = ACTIONS(334),
    [anon_sym_14] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_15] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(334),
    [anon_sym_16] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(334),
    [anon_sym_17] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_18] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_19] = ACTIONS(334),
    [anon_sym_modulus] = ACTIONS(334),
    [anon_sym_20] = ACTIONS(334),
    [anon_sym_power] = ACTIONS(334),
    [anon_sym_21] = ACTIONS(334),
    [anon_sym_logarithm] = ACTIONS(334),
    [anon_sym_22] = ACTIONS(334),
    [anon_sym_minimum] = ACTIONS(334),
    [anon_sym_23] = ACTIONS(334),
    [anon_sym_maximum] = ACTIONS(334),
    [anon_sym_24] = ACTIONS(334),
    [anon_sym_atangent] = ACTIONS(334),
    [anon_sym_25] = ACTIONS(334),
    [anon_sym_length] = ACTIONS(334),
    [anon_sym_26] = ACTIONS(334),
    [anon_sym_shape] = ACTIONS(334),
    [anon_sym_27] = ACTIONS(334),
    [anon_sym_range] = ACTIONS(334),
    [anon_sym_28] = ACTIONS(334),
    [anon_sym_first] = ACTIONS(334),
    [anon_sym_29] = ACTIONS(334),
    [anon_sym_reverse] = ACTIONS(334),
    [anon_sym_30] = ACTIONS(334),
    [anon_sym_deshape] = ACTIONS(334),
    [anon_sym_31] = ACTIONS(334),
    [anon_sym_bits] = ACTIONS(334),
    [anon_sym_32] = ACTIONS(334),
    [anon_sym_transpose] = ACTIONS(334),
    [anon_sym_33] = ACTIONS(334),
    [anon_sym_rise] = ACTIONS(334),
    [anon_sym_34] = ACTIONS(334),
    [anon_sym_fall] = ACTIONS(334),
    [anon_sym_35] = ACTIONS(334),
    [anon_sym_classify] = ACTIONS(334),
    [anon_sym_36] = ACTIONS(334),
    [anon_sym_deduplicate] = ACTIONS(334),
    [anon_sym_37] = ACTIONS(334),
    [anon_sym_box] = ACTIONS(334),
    [anon_sym_38] = ACTIONS(334),
    [anon_sym_unbox] = ACTIONS(334),
    [anon_sym_39] = ACTIONS(334),
    [anon_sym_match] = ACTIONS(334),
    [anon_sym_40] = ACTIONS(334),
    [anon_sym_couple] = ACTIONS(334),
    [anon_sym_41] = ACTIONS(334),
    [anon_sym_join] = ACTIONS(334),
    [anon_sym_42] = ACTIONS(334),
    [anon_sym_select] = ACTIONS(334),
    [anon_sym_43] = ACTIONS(334),
    [anon_sym_pick] = ACTIONS(334),
    [anon_sym_44] = ACTIONS(334),
    [anon_sym_reshape] = ACTIONS(334),
    [anon_sym_45] = ACTIONS(334),
    [anon_sym_take] = ACTIONS(334),
    [anon_sym_46] = ACTIONS(334),
    [anon_sym_drop] = ACTIONS(334),
    [anon_sym_47] = ACTIONS(334),
    [anon_sym_rotate] = ACTIONS(334),
    [anon_sym_48] = ACTIONS(334),
    [anon_sym_windows] = ACTIONS(334),
    [anon_sym_49] = ACTIONS(334),
    [anon_sym_keep] = ACTIONS(334),
    [anon_sym_50] = ACTIONS(334),
    [anon_sym_find] = ACTIONS(334),
    [anon_sym_51] = ACTIONS(334),
    [anon_sym_member] = ACTIONS(334),
    [anon_sym_52] = ACTIONS(334),
    [anon_sym_indexof] = ACTIONS(334),
    [anon_sym_53] = ACTIONS(334),
    [anon_sym_assert] = ACTIONS(334),
    [anon_sym_54] = ACTIONS(334),
    [anon_sym_wait] = ACTIONS(334),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym_break] = ACTIONS(334),
    [anon_sym_55] = ACTIONS(334),
    [anon_sym_recur] = ACTIONS(334),
    [anon_sym_56] = ACTIONS(334),
    [anon_sym_random] = ACTIONS(334),
    [anon_sym_57] = ACTIONS(334),
    [anon_sym_gen] = ACTIONS(334),
    [anon_sym_deal] = ACTIONS(334),
    [anon_sym_use] = ACTIONS(334),
    [anon_sym_tag] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_sig] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(334),
    [anon_sym_dump] = ACTIONS(334),
    [anon_sym_reduce] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_scan] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(334),
    [anon_sym_each] = ACTIONS(334),
    [anon_sym_58] = ACTIONS(334),
    [anon_sym_rows] = ACTIONS(334),
    [anon_sym_59] = ACTIONS(334),
    [anon_sym_repeat] = ACTIONS(334),
    [anon_sym_60] = ACTIONS(334),
    [anon_sym_dip] = ACTIONS(334),
    [anon_sym_di] = ACTIONS(336),
    [anon_sym_61] = ACTIONS(334),
    [anon_sym_gap] = ACTIONS(334),
    [anon_sym_ga] = ACTIONS(336),
    [anon_sym_62] = ACTIONS(334),
    [anon_sym_invert] = ACTIONS(334),
    [anon_sym_63] = ACTIONS(334),
    [anon_sym_spawn] = ACTIONS(334),
    [anon_sym_fold] = ACTIONS(334),
    [anon_sym_64] = ACTIONS(334),
    [anon_sym_distribute] = ACTIONS(334),
    [anon_sym_65] = ACTIONS(334),
    [anon_sym_table] = ACTIONS(334),
    [anon_sym_66] = ACTIONS(334),
    [anon_sym_cross] = ACTIONS(334),
    [anon_sym_67] = ACTIONS(334),
    [anon_sym_group] = ACTIONS(334),
    [anon_sym_68] = ACTIONS(334),
    [anon_sym_partition] = ACTIONS(334),
    [anon_sym_69] = ACTIONS(334),
    [anon_sym_both] = ACTIONS(334),
    [anon_sym_70] = ACTIONS(334),
    [anon_sym_bracket] = ACTIONS(334),
    [anon_sym_71] = ACTIONS(334),
    [anon_sym_fork] = ACTIONS(334),
    [anon_sym_72] = ACTIONS(334),
    [anon_sym_under] = ACTIONS(334),
    [anon_sym_73] = ACTIONS(334),
    [anon_sym_level] = ACTIONS(334),
    [anon_sym_74] = ACTIONS(334),
    [anon_sym_fill] = ACTIONS(334),
    [anon_sym_75] = ACTIONS(334),
    [anon_sym_bind] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_QMARK] = ACTIONS(334),
    [anon_sym_try] = ACTIONS(334),
    [anon_sym_76] = ACTIONS(334),
    [anon_sym_77] = ACTIONS(334),
    [anon_sym_78] = ACTIONS(334),
    [anon_sym_79] = ACTIONS(334),
    [anon_sym_80] = ACTIONS(334),
    [anon_sym_81] = ACTIONS(334),
    [anon_sym_82] = ACTIONS(334),
    [anon_sym_roll] = ACTIONS(334),
    [anon_sym_83] = ACTIONS(334),
    [anon_sym_unroll] = ACTIONS(334),
    [anon_sym_84] = ACTIONS(334),
    [anon_sym_restack] = ACTIONS(334),
    [anon_sym_85] = ACTIONS(334),
    [anon_sym_86] = ACTIONS(334),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(334),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_] = ACTIONS(340),
    [aux_sym_number_token1] = ACTIONS(338),
    [aux_sym_character_token1] = ACTIONS(338),
    [sym_multiLineString] = ACTIONS(338),
    [sym_signature] = ACTIONS(338),
    [sym_identifier] = ACTIONS(340),
    [sym_identifier_deprecated] = ACTIONS(340),
    [sym_system] = ACTIONS(338),
    [sym_comment] = ACTIONS(340),
    [sym_openParen] = ACTIONS(338),
    [sym_openCurly] = ACTIONS(338),
    [sym_openBracket] = ACTIONS(338),
    [sym_underscore] = ACTIONS(338),
    [sym_leftArrow] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_identity] = ACTIONS(338),
    [anon_sym_id] = ACTIONS(340),
    [anon_sym_6] = ACTIONS(338),
    [anon_sym_not] = ACTIONS(338),
    [anon_sym_7] = ACTIONS(338),
    [anon_sym_sign] = ACTIONS(338),
    [anon_sym_8] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_absolutevalue] = ACTIONS(338),
    [anon_sym_9] = ACTIONS(338),
    [anon_sym_sqrt] = ACTIONS(338),
    [anon_sym_10] = ACTIONS(338),
    [anon_sym_sine] = ACTIONS(338),
    [anon_sym_11] = ACTIONS(338),
    [anon_sym_floor] = ACTIONS(338),
    [anon_sym_12] = ACTIONS(338),
    [anon_sym_ceiling] = ACTIONS(338),
    [anon_sym_13] = ACTIONS(338),
    [anon_sym_round] = ACTIONS(338),
    [anon_sym_14] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_15] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_16] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_17] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_18] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_19] = ACTIONS(338),
    [anon_sym_modulus] = ACTIONS(338),
    [anon_sym_20] = ACTIONS(338),
    [anon_sym_power] = ACTIONS(338),
    [anon_sym_21] = ACTIONS(338),
    [anon_sym_logarithm] = ACTIONS(338),
    [anon_sym_22] = ACTIONS(338),
    [anon_sym_minimum] = ACTIONS(338),
    [anon_sym_23] = ACTIONS(338),
    [anon_sym_maximum] = ACTIONS(338),
    [anon_sym_24] = ACTIONS(338),
    [anon_sym_atangent] = ACTIONS(338),
    [anon_sym_25] = ACTIONS(338),
    [anon_sym_length] = ACTIONS(338),
    [anon_sym_26] = ACTIONS(338),
    [anon_sym_shape] = ACTIONS(338),
    [anon_sym_27] = ACTIONS(338),
    [anon_sym_range] = ACTIONS(338),
    [anon_sym_28] = ACTIONS(338),
    [anon_sym_first] = ACTIONS(338),
    [anon_sym_29] = ACTIONS(338),
    [anon_sym_reverse] = ACTIONS(338),
    [anon_sym_30] = ACTIONS(338),
    [anon_sym_deshape] = ACTIONS(338),
    [anon_sym_31] = ACTIONS(338),
    [anon_sym_bits] = ACTIONS(338),
    [anon_sym_32] = ACTIONS(338),
    [anon_sym_transpose] = ACTIONS(338),
    [anon_sym_33] = ACTIONS(338),
    [anon_sym_rise] = ACTIONS(338),
    [anon_sym_34] = ACTIONS(338),
    [anon_sym_fall] = ACTIONS(338),
    [anon_sym_35] = ACTIONS(338),
    [anon_sym_classify] = ACTIONS(338),
    [anon_sym_36] = ACTIONS(338),
    [anon_sym_deduplicate] = ACTIONS(338),
    [anon_sym_37] = ACTIONS(338),
    [anon_sym_box] = ACTIONS(338),
    [anon_sym_38] = ACTIONS(338),
    [anon_sym_unbox] = ACTIONS(338),
    [anon_sym_39] = ACTIONS(338),
    [anon_sym_match] = ACTIONS(338),
    [anon_sym_40] = ACTIONS(338),
    [anon_sym_couple] = ACTIONS(338),
    [anon_sym_41] = ACTIONS(338),
    [anon_sym_join] = ACTIONS(338),
    [anon_sym_42] = ACTIONS(338),
    [anon_sym_select] = ACTIONS(338),
    [anon_sym_43] = ACTIONS(338),
    [anon_sym_pick] = ACTIONS(338),
    [anon_sym_44] = ACTIONS(338),
    [anon_sym_reshape] = ACTIONS(338),
    [anon_sym_45] = ACTIONS(338),
    [anon_sym_take] = ACTIONS(338),
    [anon_sym_46] = ACTIONS(338),
    [anon_sym_drop] = ACTIONS(338),
    [anon_sym_47] = ACTIONS(338),
    [anon_sym_rotate] = ACTIONS(338),
    [anon_sym_48] = ACTIONS(338),
    [anon_sym_windows] = ACTIONS(338),
    [anon_sym_49] = ACTIONS(338),
    [anon_sym_keep] = ACTIONS(338),
    [anon_sym_50] = ACTIONS(338),
    [anon_sym_find] = ACTIONS(338),
    [anon_sym_51] = ACTIONS(338),
    [anon_sym_member] = ACTIONS(338),
    [anon_sym_52] = ACTIONS(338),
    [anon_sym_indexof] = ACTIONS(338),
    [anon_sym_53] = ACTIONS(338),
    [anon_sym_assert] = ACTIONS(338),
    [anon_sym_54] = ACTIONS(338),
    [anon_sym_wait] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_break] = ACTIONS(338),
    [anon_sym_55] = ACTIONS(338),
    [anon_sym_recur] = ACTIONS(338),
    [anon_sym_56] = ACTIONS(338),
    [anon_sym_random] = ACTIONS(338),
    [anon_sym_57] = ACTIONS(338),
    [anon_sym_gen] = ACTIONS(338),
    [anon_sym_deal] = ACTIONS(338),
    [anon_sym_use] = ACTIONS(338),
    [anon_sym_tag] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [anon_sym_sig] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_dump] = ACTIONS(338),
    [anon_sym_reduce] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_scan] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_each] = ACTIONS(338),
    [anon_sym_58] = ACTIONS(338),
    [anon_sym_rows] = ACTIONS(338),
    [anon_sym_59] = ACTIONS(338),
    [anon_sym_repeat] = ACTIONS(338),
    [anon_sym_60] = ACTIONS(338),
    [anon_sym_dip] = ACTIONS(338),
    [anon_sym_di] = ACTIONS(340),
    [anon_sym_61] = ACTIONS(338),
    [anon_sym_gap] = ACTIONS(338),
    [anon_sym_ga] = ACTIONS(340),
    [anon_sym_62] = ACTIONS(338),
    [anon_sym_invert] = ACTIONS(338),
    [anon_sym_63] = ACTIONS(338),
    [anon_sym_spawn] = ACTIONS(338),
    [anon_sym_fold] = ACTIONS(338),
    [anon_sym_64] = ACTIONS(338),
    [anon_sym_distribute] = ACTIONS(338),
    [anon_sym_65] = ACTIONS(338),
    [anon_sym_table] = ACTIONS(338),
    [anon_sym_66] = ACTIONS(338),
    [anon_sym_cross] = ACTIONS(338),
    [anon_sym_67] = ACTIONS(338),
    [anon_sym_group] = ACTIONS(338),
    [anon_sym_68] = ACTIONS(338),
    [anon_sym_partition] = ACTIONS(338),
    [anon_sym_69] = ACTIONS(338),
    [anon_sym_both] = ACTIONS(338),
    [anon_sym_70] = ACTIONS(338),
    [anon_sym_bracket] = ACTIONS(338),
    [anon_sym_71] = ACTIONS(338),
    [anon_sym_fork] = ACTIONS(338),
    [anon_sym_72] = ACTIONS(338),
    [anon_sym_under] = ACTIONS(338),
    [anon_sym_73] = ACTIONS(338),
    [anon_sym_level] = ACTIONS(338),
    [anon_sym_74] = ACTIONS(338),
    [anon_sym_fill] = ACTIONS(338),
    [anon_sym_75] = ACTIONS(338),
    [anon_sym_bind] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_try] = ACTIONS(338),
    [anon_sym_76] = ACTIONS(338),
    [anon_sym_77] = ACTIONS(338),
    [anon_sym_78] = ACTIONS(338),
    [anon_sym_79] = ACTIONS(338),
    [anon_sym_80] = ACTIONS(338),
    [anon_sym_81] = ACTIONS(338),
    [anon_sym_82] = ACTIONS(338),
    [anon_sym_roll] = ACTIONS(338),
    [anon_sym_83] = ACTIONS(338),
    [anon_sym_unroll] = ACTIONS(338),
    [anon_sym_84] = ACTIONS(338),
    [anon_sym_restack] = ACTIONS(338),
    [anon_sym_85] = ACTIONS(338),
    [anon_sym_86] = ACTIONS(338),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(338),
  },
  [49] = {
    [anon_sym_DOLLAR] = ACTIONS(286),
    [anon_sym_] = ACTIONS(286),
    [aux_sym_number_token1] = ACTIONS(284),
    [aux_sym_character_token1] = ACTIONS(284),
    [sym_multiLineString] = ACTIONS(284),
    [sym_signature] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_identifier_deprecated] = ACTIONS(286),
    [sym_system] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(284),
    [sym_closeParen] = ACTIONS(284),
    [sym_openCurly] = ACTIONS(284),
    [sym_openBracket] = ACTIONS(284),
    [sym_underscore] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_identity] = ACTIONS(284),
    [anon_sym_id] = ACTIONS(286),
    [anon_sym_6] = ACTIONS(284),
    [anon_sym_not] = ACTIONS(284),
    [anon_sym_7] = ACTIONS(284),
    [anon_sym_sign] = ACTIONS(284),
    [anon_sym_8] = ACTIONS(284),
    [anon_sym_BQUOTE] = ACTIONS(284),
    [anon_sym_absolutevalue] = ACTIONS(284),
    [anon_sym_9] = ACTIONS(284),
    [anon_sym_sqrt] = ACTIONS(284),
    [anon_sym_10] = ACTIONS(284),
    [anon_sym_sine] = ACTIONS(284),
    [anon_sym_11] = ACTIONS(284),
    [anon_sym_floor] = ACTIONS(284),
    [anon_sym_12] = ACTIONS(284),
    [anon_sym_ceiling] = ACTIONS(284),
    [anon_sym_13] = ACTIONS(284),
    [anon_sym_round] = ACTIONS(284),
    [anon_sym_14] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_15] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [anon_sym_16] = ACTIONS(284),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_17] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_18] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_19] = ACTIONS(284),
    [anon_sym_modulus] = ACTIONS(284),
    [anon_sym_20] = ACTIONS(284),
    [anon_sym_power] = ACTIONS(284),
    [anon_sym_21] = ACTIONS(284),
    [anon_sym_logarithm] = ACTIONS(284),
    [anon_sym_22] = ACTIONS(284),
    [anon_sym_minimum] = ACTIONS(284),
    [anon_sym_23] = ACTIONS(284),
    [anon_sym_maximum] = ACTIONS(284),
    [anon_sym_24] = ACTIONS(284),
    [anon_sym_atangent] = ACTIONS(284),
    [anon_sym_25] = ACTIONS(284),
    [anon_sym_length] = ACTIONS(284),
    [anon_sym_26] = ACTIONS(284),
    [anon_sym_shape] = ACTIONS(284),
    [anon_sym_27] = ACTIONS(284),
    [anon_sym_range] = ACTIONS(284),
    [anon_sym_28] = ACTIONS(284),
    [anon_sym_first] = ACTIONS(284),
    [anon_sym_29] = ACTIONS(284),
    [anon_sym_reverse] = ACTIONS(284),
    [anon_sym_30] = ACTIONS(284),
    [anon_sym_deshape] = ACTIONS(284),
    [anon_sym_31] = ACTIONS(284),
    [anon_sym_bits] = ACTIONS(284),
    [anon_sym_32] = ACTIONS(284),
    [anon_sym_transpose] = ACTIONS(284),
    [anon_sym_33] = ACTIONS(284),
    [anon_sym_rise] = ACTIONS(284),
    [anon_sym_34] = ACTIONS(284),
    [anon_sym_fall] = ACTIONS(284),
    [anon_sym_35] = ACTIONS(284),
    [anon_sym_classify] = ACTIONS(284),
    [anon_sym_36] = ACTIONS(284),
    [anon_sym_deduplicate] = ACTIONS(284),
    [anon_sym_37] = ACTIONS(284),
    [anon_sym_box] = ACTIONS(284),
    [anon_sym_38] = ACTIONS(284),
    [anon_sym_unbox] = ACTIONS(284),
    [anon_sym_39] = ACTIONS(284),
    [anon_sym_match] = ACTIONS(284),
    [anon_sym_40] = ACTIONS(284),
    [anon_sym_couple] = ACTIONS(284),
    [anon_sym_41] = ACTIONS(284),
    [anon_sym_join] = ACTIONS(284),
    [anon_sym_42] = ACTIONS(284),
    [anon_sym_select] = ACTIONS(284),
    [anon_sym_43] = ACTIONS(284),
    [anon_sym_pick] = ACTIONS(284),
    [anon_sym_44] = ACTIONS(284),
    [anon_sym_reshape] = ACTIONS(284),
    [anon_sym_45] = ACTIONS(284),
    [anon_sym_take] = ACTIONS(284),
    [anon_sym_46] = ACTIONS(284),
    [anon_sym_drop] = ACTIONS(284),
    [anon_sym_47] = ACTIONS(284),
    [anon_sym_rotate] = ACTIONS(284),
    [anon_sym_48] = ACTIONS(284),
    [anon_sym_windows] = ACTIONS(284),
    [anon_sym_49] = ACTIONS(284),
    [anon_sym_keep] = ACTIONS(284),
    [anon_sym_50] = ACTIONS(284),
    [anon_sym_find] = ACTIONS(284),
    [anon_sym_51] = ACTIONS(284),
    [anon_sym_member] = ACTIONS(284),
    [anon_sym_52] = ACTIONS(284),
    [anon_sym_indexof] = ACTIONS(284),
    [anon_sym_53] = ACTIONS(284),
    [anon_sym_assert] = ACTIONS(284),
    [anon_sym_54] = ACTIONS(284),
    [anon_sym_wait] = ACTIONS(284),
    [anon_sym_BANG] = ACTIONS(286),
    [anon_sym_break] = ACTIONS(284),
    [anon_sym_55] = ACTIONS(284),
    [anon_sym_recur] = ACTIONS(284),
    [anon_sym_56] = ACTIONS(284),
    [anon_sym_random] = ACTIONS(284),
    [anon_sym_57] = ACTIONS(284),
    [anon_sym_gen] = ACTIONS(284),
    [anon_sym_deal] = ACTIONS(284),
    [anon_sym_use] = ACTIONS(284),
    [anon_sym_tag] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [anon_sym_sig] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_dump] = ACTIONS(284),
    [anon_sym_reduce] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [anon_sym_scan] = ACTIONS(284),
    [anon_sym_BSLASH] = ACTIONS(284),
    [anon_sym_each] = ACTIONS(284),
    [anon_sym_58] = ACTIONS(284),
    [anon_sym_rows] = ACTIONS(284),
    [anon_sym_59] = ACTIONS(284),
    [anon_sym_repeat] = ACTIONS(284),
    [anon_sym_60] = ACTIONS(284),
    [anon_sym_dip] = ACTIONS(284),
    [anon_sym_di] = ACTIONS(286),
    [anon_sym_61] = ACTIONS(284),
    [anon_sym_gap] = ACTIONS(284),
    [anon_sym_ga] = ACTIONS(286),
    [anon_sym_62] = ACTIONS(284),
    [anon_sym_invert] = ACTIONS(284),
    [anon_sym_63] = ACTIONS(284),
    [anon_sym_spawn] = ACTIONS(284),
    [anon_sym_fold] = ACTIONS(284),
    [anon_sym_64] = ACTIONS(284),
    [anon_sym_distribute] = ACTIONS(284),
    [anon_sym_65] = ACTIONS(284),
    [anon_sym_table] = ACTIONS(284),
    [anon_sym_66] = ACTIONS(284),
    [anon_sym_cross] = ACTIONS(284),
    [anon_sym_67] = ACTIONS(284),
    [anon_sym_group] = ACTIONS(284),
    [anon_sym_68] = ACTIONS(284),
    [anon_sym_partition] = ACTIONS(284),
    [anon_sym_69] = ACTIONS(284),
    [anon_sym_both] = ACTIONS(284),
    [anon_sym_70] = ACTIONS(284),
    [anon_sym_bracket] = ACTIONS(284),
    [anon_sym_71] = ACTIONS(284),
    [anon_sym_fork] = ACTIONS(284),
    [anon_sym_72] = ACTIONS(284),
    [anon_sym_under] = ACTIONS(284),
    [anon_sym_73] = ACTIONS(284),
    [anon_sym_level] = ACTIONS(284),
    [anon_sym_74] = ACTIONS(284),
    [anon_sym_fill] = ACTIONS(284),
    [anon_sym_75] = ACTIONS(284),
    [anon_sym_bind] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_try] = ACTIONS(284),
    [anon_sym_76] = ACTIONS(284),
    [anon_sym_77] = ACTIONS(284),
    [anon_sym_78] = ACTIONS(284),
    [anon_sym_79] = ACTIONS(284),
    [anon_sym_80] = ACTIONS(284),
    [anon_sym_81] = ACTIONS(284),
    [anon_sym_82] = ACTIONS(284),
    [anon_sym_roll] = ACTIONS(284),
    [anon_sym_83] = ACTIONS(284),
    [anon_sym_unroll] = ACTIONS(284),
    [anon_sym_84] = ACTIONS(284),
    [anon_sym_restack] = ACTIONS(284),
    [anon_sym_85] = ACTIONS(284),
    [anon_sym_86] = ACTIONS(284),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [50] = {
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_] = ACTIONS(306),
    [aux_sym_number_token1] = ACTIONS(304),
    [aux_sym_character_token1] = ACTIONS(304),
    [sym_multiLineString] = ACTIONS(304),
    [sym_signature] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_identifier_deprecated] = ACTIONS(306),
    [sym_system] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(304),
    [sym_closeParen] = ACTIONS(304),
    [sym_openCurly] = ACTIONS(304),
    [sym_openBracket] = ACTIONS(304),
    [sym_underscore] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_identity] = ACTIONS(304),
    [anon_sym_id] = ACTIONS(306),
    [anon_sym_6] = ACTIONS(304),
    [anon_sym_not] = ACTIONS(304),
    [anon_sym_7] = ACTIONS(304),
    [anon_sym_sign] = ACTIONS(304),
    [anon_sym_8] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [anon_sym_absolutevalue] = ACTIONS(304),
    [anon_sym_9] = ACTIONS(304),
    [anon_sym_sqrt] = ACTIONS(304),
    [anon_sym_10] = ACTIONS(304),
    [anon_sym_sine] = ACTIONS(304),
    [anon_sym_11] = ACTIONS(304),
    [anon_sym_floor] = ACTIONS(304),
    [anon_sym_12] = ACTIONS(304),
    [anon_sym_ceiling] = ACTIONS(304),
    [anon_sym_13] = ACTIONS(304),
    [anon_sym_round] = ACTIONS(304),
    [anon_sym_14] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_15] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [anon_sym_16] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_17] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_18] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_19] = ACTIONS(304),
    [anon_sym_modulus] = ACTIONS(304),
    [anon_sym_20] = ACTIONS(304),
    [anon_sym_power] = ACTIONS(304),
    [anon_sym_21] = ACTIONS(304),
    [anon_sym_logarithm] = ACTIONS(304),
    [anon_sym_22] = ACTIONS(304),
    [anon_sym_minimum] = ACTIONS(304),
    [anon_sym_23] = ACTIONS(304),
    [anon_sym_maximum] = ACTIONS(304),
    [anon_sym_24] = ACTIONS(304),
    [anon_sym_atangent] = ACTIONS(304),
    [anon_sym_25] = ACTIONS(304),
    [anon_sym_length] = ACTIONS(304),
    [anon_sym_26] = ACTIONS(304),
    [anon_sym_shape] = ACTIONS(304),
    [anon_sym_27] = ACTIONS(304),
    [anon_sym_range] = ACTIONS(304),
    [anon_sym_28] = ACTIONS(304),
    [anon_sym_first] = ACTIONS(304),
    [anon_sym_29] = ACTIONS(304),
    [anon_sym_reverse] = ACTIONS(304),
    [anon_sym_30] = ACTIONS(304),
    [anon_sym_deshape] = ACTIONS(304),
    [anon_sym_31] = ACTIONS(304),
    [anon_sym_bits] = ACTIONS(304),
    [anon_sym_32] = ACTIONS(304),
    [anon_sym_transpose] = ACTIONS(304),
    [anon_sym_33] = ACTIONS(304),
    [anon_sym_rise] = ACTIONS(304),
    [anon_sym_34] = ACTIONS(304),
    [anon_sym_fall] = ACTIONS(304),
    [anon_sym_35] = ACTIONS(304),
    [anon_sym_classify] = ACTIONS(304),
    [anon_sym_36] = ACTIONS(304),
    [anon_sym_deduplicate] = ACTIONS(304),
    [anon_sym_37] = ACTIONS(304),
    [anon_sym_box] = ACTIONS(304),
    [anon_sym_38] = ACTIONS(304),
    [anon_sym_unbox] = ACTIONS(304),
    [anon_sym_39] = ACTIONS(304),
    [anon_sym_match] = ACTIONS(304),
    [anon_sym_40] = ACTIONS(304),
    [anon_sym_couple] = ACTIONS(304),
    [anon_sym_41] = ACTIONS(304),
    [anon_sym_join] = ACTIONS(304),
    [anon_sym_42] = ACTIONS(304),
    [anon_sym_select] = ACTIONS(304),
    [anon_sym_43] = ACTIONS(304),
    [anon_sym_pick] = ACTIONS(304),
    [anon_sym_44] = ACTIONS(304),
    [anon_sym_reshape] = ACTIONS(304),
    [anon_sym_45] = ACTIONS(304),
    [anon_sym_take] = ACTIONS(304),
    [anon_sym_46] = ACTIONS(304),
    [anon_sym_drop] = ACTIONS(304),
    [anon_sym_47] = ACTIONS(304),
    [anon_sym_rotate] = ACTIONS(304),
    [anon_sym_48] = ACTIONS(304),
    [anon_sym_windows] = ACTIONS(304),
    [anon_sym_49] = ACTIONS(304),
    [anon_sym_keep] = ACTIONS(304),
    [anon_sym_50] = ACTIONS(304),
    [anon_sym_find] = ACTIONS(304),
    [anon_sym_51] = ACTIONS(304),
    [anon_sym_member] = ACTIONS(304),
    [anon_sym_52] = ACTIONS(304),
    [anon_sym_indexof] = ACTIONS(304),
    [anon_sym_53] = ACTIONS(304),
    [anon_sym_assert] = ACTIONS(304),
    [anon_sym_54] = ACTIONS(304),
    [anon_sym_wait] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_break] = ACTIONS(304),
    [anon_sym_55] = ACTIONS(304),
    [anon_sym_recur] = ACTIONS(304),
    [anon_sym_56] = ACTIONS(304),
    [anon_sym_random] = ACTIONS(304),
    [anon_sym_57] = ACTIONS(304),
    [anon_sym_gen] = ACTIONS(304),
    [anon_sym_deal] = ACTIONS(304),
    [anon_sym_use] = ACTIONS(304),
    [anon_sym_tag] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [anon_sym_sig] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(304),
    [anon_sym_dump] = ACTIONS(304),
    [anon_sym_reduce] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_scan] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_each] = ACTIONS(304),
    [anon_sym_58] = ACTIONS(304),
    [anon_sym_rows] = ACTIONS(304),
    [anon_sym_59] = ACTIONS(304),
    [anon_sym_repeat] = ACTIONS(304),
    [anon_sym_60] = ACTIONS(304),
    [anon_sym_dip] = ACTIONS(304),
    [anon_sym_di] = ACTIONS(306),
    [anon_sym_61] = ACTIONS(304),
    [anon_sym_gap] = ACTIONS(304),
    [anon_sym_ga] = ACTIONS(306),
    [anon_sym_62] = ACTIONS(304),
    [anon_sym_invert] = ACTIONS(304),
    [anon_sym_63] = ACTIONS(304),
    [anon_sym_spawn] = ACTIONS(304),
    [anon_sym_fold] = ACTIONS(304),
    [anon_sym_64] = ACTIONS(304),
    [anon_sym_distribute] = ACTIONS(304),
    [anon_sym_65] = ACTIONS(304),
    [anon_sym_table] = ACTIONS(304),
    [anon_sym_66] = ACTIONS(304),
    [anon_sym_cross] = ACTIONS(304),
    [anon_sym_67] = ACTIONS(304),
    [anon_sym_group] = ACTIONS(304),
    [anon_sym_68] = ACTIONS(304),
    [anon_sym_partition] = ACTIONS(304),
    [anon_sym_69] = ACTIONS(304),
    [anon_sym_both] = ACTIONS(304),
    [anon_sym_70] = ACTIONS(304),
    [anon_sym_bracket] = ACTIONS(304),
    [anon_sym_71] = ACTIONS(304),
    [anon_sym_fork] = ACTIONS(304),
    [anon_sym_72] = ACTIONS(304),
    [anon_sym_under] = ACTIONS(304),
    [anon_sym_73] = ACTIONS(304),
    [anon_sym_level] = ACTIONS(304),
    [anon_sym_74] = ACTIONS(304),
    [anon_sym_fill] = ACTIONS(304),
    [anon_sym_75] = ACTIONS(304),
    [anon_sym_bind] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_try] = ACTIONS(304),
    [anon_sym_76] = ACTIONS(304),
    [anon_sym_77] = ACTIONS(304),
    [anon_sym_78] = ACTIONS(304),
    [anon_sym_79] = ACTIONS(304),
    [anon_sym_80] = ACTIONS(304),
    [anon_sym_81] = ACTIONS(304),
    [anon_sym_82] = ACTIONS(304),
    [anon_sym_roll] = ACTIONS(304),
    [anon_sym_83] = ACTIONS(304),
    [anon_sym_unroll] = ACTIONS(304),
    [anon_sym_84] = ACTIONS(304),
    [anon_sym_restack] = ACTIONS(304),
    [anon_sym_85] = ACTIONS(304),
    [anon_sym_86] = ACTIONS(304),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [51] = {
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_] = ACTIONS(290),
    [aux_sym_number_token1] = ACTIONS(288),
    [aux_sym_character_token1] = ACTIONS(288),
    [sym_multiLineString] = ACTIONS(288),
    [sym_signature] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_identifier_deprecated] = ACTIONS(290),
    [sym_system] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(288),
    [sym_closeParen] = ACTIONS(288),
    [sym_openCurly] = ACTIONS(288),
    [sym_openBracket] = ACTIONS(288),
    [sym_underscore] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_identity] = ACTIONS(288),
    [anon_sym_id] = ACTIONS(290),
    [anon_sym_6] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_7] = ACTIONS(288),
    [anon_sym_sign] = ACTIONS(288),
    [anon_sym_8] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_absolutevalue] = ACTIONS(288),
    [anon_sym_9] = ACTIONS(288),
    [anon_sym_sqrt] = ACTIONS(288),
    [anon_sym_10] = ACTIONS(288),
    [anon_sym_sine] = ACTIONS(288),
    [anon_sym_11] = ACTIONS(288),
    [anon_sym_floor] = ACTIONS(288),
    [anon_sym_12] = ACTIONS(288),
    [anon_sym_ceiling] = ACTIONS(288),
    [anon_sym_13] = ACTIONS(288),
    [anon_sym_round] = ACTIONS(288),
    [anon_sym_14] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_15] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_16] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_17] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_18] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_19] = ACTIONS(288),
    [anon_sym_modulus] = ACTIONS(288),
    [anon_sym_20] = ACTIONS(288),
    [anon_sym_power] = ACTIONS(288),
    [anon_sym_21] = ACTIONS(288),
    [anon_sym_logarithm] = ACTIONS(288),
    [anon_sym_22] = ACTIONS(288),
    [anon_sym_minimum] = ACTIONS(288),
    [anon_sym_23] = ACTIONS(288),
    [anon_sym_maximum] = ACTIONS(288),
    [anon_sym_24] = ACTIONS(288),
    [anon_sym_atangent] = ACTIONS(288),
    [anon_sym_25] = ACTIONS(288),
    [anon_sym_length] = ACTIONS(288),
    [anon_sym_26] = ACTIONS(288),
    [anon_sym_shape] = ACTIONS(288),
    [anon_sym_27] = ACTIONS(288),
    [anon_sym_range] = ACTIONS(288),
    [anon_sym_28] = ACTIONS(288),
    [anon_sym_first] = ACTIONS(288),
    [anon_sym_29] = ACTIONS(288),
    [anon_sym_reverse] = ACTIONS(288),
    [anon_sym_30] = ACTIONS(288),
    [anon_sym_deshape] = ACTIONS(288),
    [anon_sym_31] = ACTIONS(288),
    [anon_sym_bits] = ACTIONS(288),
    [anon_sym_32] = ACTIONS(288),
    [anon_sym_transpose] = ACTIONS(288),
    [anon_sym_33] = ACTIONS(288),
    [anon_sym_rise] = ACTIONS(288),
    [anon_sym_34] = ACTIONS(288),
    [anon_sym_fall] = ACTIONS(288),
    [anon_sym_35] = ACTIONS(288),
    [anon_sym_classify] = ACTIONS(288),
    [anon_sym_36] = ACTIONS(288),
    [anon_sym_deduplicate] = ACTIONS(288),
    [anon_sym_37] = ACTIONS(288),
    [anon_sym_box] = ACTIONS(288),
    [anon_sym_38] = ACTIONS(288),
    [anon_sym_unbox] = ACTIONS(288),
    [anon_sym_39] = ACTIONS(288),
    [anon_sym_match] = ACTIONS(288),
    [anon_sym_40] = ACTIONS(288),
    [anon_sym_couple] = ACTIONS(288),
    [anon_sym_41] = ACTIONS(288),
    [anon_sym_join] = ACTIONS(288),
    [anon_sym_42] = ACTIONS(288),
    [anon_sym_select] = ACTIONS(288),
    [anon_sym_43] = ACTIONS(288),
    [anon_sym_pick] = ACTIONS(288),
    [anon_sym_44] = ACTIONS(288),
    [anon_sym_reshape] = ACTIONS(288),
    [anon_sym_45] = ACTIONS(288),
    [anon_sym_take] = ACTIONS(288),
    [anon_sym_46] = ACTIONS(288),
    [anon_sym_drop] = ACTIONS(288),
    [anon_sym_47] = ACTIONS(288),
    [anon_sym_rotate] = ACTIONS(288),
    [anon_sym_48] = ACTIONS(288),
    [anon_sym_windows] = ACTIONS(288),
    [anon_sym_49] = ACTIONS(288),
    [anon_sym_keep] = ACTIONS(288),
    [anon_sym_50] = ACTIONS(288),
    [anon_sym_find] = ACTIONS(288),
    [anon_sym_51] = ACTIONS(288),
    [anon_sym_member] = ACTIONS(288),
    [anon_sym_52] = ACTIONS(288),
    [anon_sym_indexof] = ACTIONS(288),
    [anon_sym_53] = ACTIONS(288),
    [anon_sym_assert] = ACTIONS(288),
    [anon_sym_54] = ACTIONS(288),
    [anon_sym_wait] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(288),
    [anon_sym_55] = ACTIONS(288),
    [anon_sym_recur] = ACTIONS(288),
    [anon_sym_56] = ACTIONS(288),
    [anon_sym_random] = ACTIONS(288),
    [anon_sym_57] = ACTIONS(288),
    [anon_sym_gen] = ACTIONS(288),
    [anon_sym_deal] = ACTIONS(288),
    [anon_sym_use] = ACTIONS(288),
    [anon_sym_tag] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_sig] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_dump] = ACTIONS(288),
    [anon_sym_reduce] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_scan] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_each] = ACTIONS(288),
    [anon_sym_58] = ACTIONS(288),
    [anon_sym_rows] = ACTIONS(288),
    [anon_sym_59] = ACTIONS(288),
    [anon_sym_repeat] = ACTIONS(288),
    [anon_sym_60] = ACTIONS(288),
    [anon_sym_dip] = ACTIONS(288),
    [anon_sym_di] = ACTIONS(290),
    [anon_sym_61] = ACTIONS(288),
    [anon_sym_gap] = ACTIONS(288),
    [anon_sym_ga] = ACTIONS(290),
    [anon_sym_62] = ACTIONS(288),
    [anon_sym_invert] = ACTIONS(288),
    [anon_sym_63] = ACTIONS(288),
    [anon_sym_spawn] = ACTIONS(288),
    [anon_sym_fold] = ACTIONS(288),
    [anon_sym_64] = ACTIONS(288),
    [anon_sym_distribute] = ACTIONS(288),
    [anon_sym_65] = ACTIONS(288),
    [anon_sym_table] = ACTIONS(288),
    [anon_sym_66] = ACTIONS(288),
    [anon_sym_cross] = ACTIONS(288),
    [anon_sym_67] = ACTIONS(288),
    [anon_sym_group] = ACTIONS(288),
    [anon_sym_68] = ACTIONS(288),
    [anon_sym_partition] = ACTIONS(288),
    [anon_sym_69] = ACTIONS(288),
    [anon_sym_both] = ACTIONS(288),
    [anon_sym_70] = ACTIONS(288),
    [anon_sym_bracket] = ACTIONS(288),
    [anon_sym_71] = ACTIONS(288),
    [anon_sym_fork] = ACTIONS(288),
    [anon_sym_72] = ACTIONS(288),
    [anon_sym_under] = ACTIONS(288),
    [anon_sym_73] = ACTIONS(288),
    [anon_sym_level] = ACTIONS(288),
    [anon_sym_74] = ACTIONS(288),
    [anon_sym_fill] = ACTIONS(288),
    [anon_sym_75] = ACTIONS(288),
    [anon_sym_bind] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_try] = ACTIONS(288),
    [anon_sym_76] = ACTIONS(288),
    [anon_sym_77] = ACTIONS(288),
    [anon_sym_78] = ACTIONS(288),
    [anon_sym_79] = ACTIONS(288),
    [anon_sym_80] = ACTIONS(288),
    [anon_sym_81] = ACTIONS(288),
    [anon_sym_82] = ACTIONS(288),
    [anon_sym_roll] = ACTIONS(288),
    [anon_sym_83] = ACTIONS(288),
    [anon_sym_unroll] = ACTIONS(288),
    [anon_sym_84] = ACTIONS(288),
    [anon_sym_restack] = ACTIONS(288),
    [anon_sym_85] = ACTIONS(288),
    [anon_sym_86] = ACTIONS(288),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [52] = {
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_] = ACTIONS(290),
    [aux_sym_number_token1] = ACTIONS(288),
    [aux_sym_character_token1] = ACTIONS(288),
    [sym_multiLineString] = ACTIONS(288),
    [sym_signature] = ACTIONS(288),
    [sym_identifier] = ACTIONS(290),
    [sym_identifier_deprecated] = ACTIONS(290),
    [sym_system] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(288),
    [sym_closeParen] = ACTIONS(288),
    [sym_openCurly] = ACTIONS(288),
    [sym_openBracket] = ACTIONS(288),
    [sym_underscore] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_identity] = ACTIONS(288),
    [anon_sym_id] = ACTIONS(290),
    [anon_sym_6] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_7] = ACTIONS(288),
    [anon_sym_sign] = ACTIONS(288),
    [anon_sym_8] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_absolutevalue] = ACTIONS(288),
    [anon_sym_9] = ACTIONS(288),
    [anon_sym_sqrt] = ACTIONS(288),
    [anon_sym_10] = ACTIONS(288),
    [anon_sym_sine] = ACTIONS(288),
    [anon_sym_11] = ACTIONS(288),
    [anon_sym_floor] = ACTIONS(288),
    [anon_sym_12] = ACTIONS(288),
    [anon_sym_ceiling] = ACTIONS(288),
    [anon_sym_13] = ACTIONS(288),
    [anon_sym_round] = ACTIONS(288),
    [anon_sym_14] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_15] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_16] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_17] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_18] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_19] = ACTIONS(288),
    [anon_sym_modulus] = ACTIONS(288),
    [anon_sym_20] = ACTIONS(288),
    [anon_sym_power] = ACTIONS(288),
    [anon_sym_21] = ACTIONS(288),
    [anon_sym_logarithm] = ACTIONS(288),
    [anon_sym_22] = ACTIONS(288),
    [anon_sym_minimum] = ACTIONS(288),
    [anon_sym_23] = ACTIONS(288),
    [anon_sym_maximum] = ACTIONS(288),
    [anon_sym_24] = ACTIONS(288),
    [anon_sym_atangent] = ACTIONS(288),
    [anon_sym_25] = ACTIONS(288),
    [anon_sym_length] = ACTIONS(288),
    [anon_sym_26] = ACTIONS(288),
    [anon_sym_shape] = ACTIONS(288),
    [anon_sym_27] = ACTIONS(288),
    [anon_sym_range] = ACTIONS(288),
    [anon_sym_28] = ACTIONS(288),
    [anon_sym_first] = ACTIONS(288),
    [anon_sym_29] = ACTIONS(288),
    [anon_sym_reverse] = ACTIONS(288),
    [anon_sym_30] = ACTIONS(288),
    [anon_sym_deshape] = ACTIONS(288),
    [anon_sym_31] = ACTIONS(288),
    [anon_sym_bits] = ACTIONS(288),
    [anon_sym_32] = ACTIONS(288),
    [anon_sym_transpose] = ACTIONS(288),
    [anon_sym_33] = ACTIONS(288),
    [anon_sym_rise] = ACTIONS(288),
    [anon_sym_34] = ACTIONS(288),
    [anon_sym_fall] = ACTIONS(288),
    [anon_sym_35] = ACTIONS(288),
    [anon_sym_classify] = ACTIONS(288),
    [anon_sym_36] = ACTIONS(288),
    [anon_sym_deduplicate] = ACTIONS(288),
    [anon_sym_37] = ACTIONS(288),
    [anon_sym_box] = ACTIONS(288),
    [anon_sym_38] = ACTIONS(288),
    [anon_sym_unbox] = ACTIONS(288),
    [anon_sym_39] = ACTIONS(288),
    [anon_sym_match] = ACTIONS(288),
    [anon_sym_40] = ACTIONS(288),
    [anon_sym_couple] = ACTIONS(288),
    [anon_sym_41] = ACTIONS(288),
    [anon_sym_join] = ACTIONS(288),
    [anon_sym_42] = ACTIONS(288),
    [anon_sym_select] = ACTIONS(288),
    [anon_sym_43] = ACTIONS(288),
    [anon_sym_pick] = ACTIONS(288),
    [anon_sym_44] = ACTIONS(288),
    [anon_sym_reshape] = ACTIONS(288),
    [anon_sym_45] = ACTIONS(288),
    [anon_sym_take] = ACTIONS(288),
    [anon_sym_46] = ACTIONS(288),
    [anon_sym_drop] = ACTIONS(288),
    [anon_sym_47] = ACTIONS(288),
    [anon_sym_rotate] = ACTIONS(288),
    [anon_sym_48] = ACTIONS(288),
    [anon_sym_windows] = ACTIONS(288),
    [anon_sym_49] = ACTIONS(288),
    [anon_sym_keep] = ACTIONS(288),
    [anon_sym_50] = ACTIONS(288),
    [anon_sym_find] = ACTIONS(288),
    [anon_sym_51] = ACTIONS(288),
    [anon_sym_member] = ACTIONS(288),
    [anon_sym_52] = ACTIONS(288),
    [anon_sym_indexof] = ACTIONS(288),
    [anon_sym_53] = ACTIONS(288),
    [anon_sym_assert] = ACTIONS(288),
    [anon_sym_54] = ACTIONS(288),
    [anon_sym_wait] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(288),
    [anon_sym_55] = ACTIONS(288),
    [anon_sym_recur] = ACTIONS(288),
    [anon_sym_56] = ACTIONS(288),
    [anon_sym_random] = ACTIONS(288),
    [anon_sym_57] = ACTIONS(288),
    [anon_sym_gen] = ACTIONS(288),
    [anon_sym_deal] = ACTIONS(288),
    [anon_sym_use] = ACTIONS(288),
    [anon_sym_tag] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_sig] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_dump] = ACTIONS(288),
    [anon_sym_reduce] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_scan] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_each] = ACTIONS(288),
    [anon_sym_58] = ACTIONS(288),
    [anon_sym_rows] = ACTIONS(288),
    [anon_sym_59] = ACTIONS(288),
    [anon_sym_repeat] = ACTIONS(288),
    [anon_sym_60] = ACTIONS(288),
    [anon_sym_dip] = ACTIONS(288),
    [anon_sym_di] = ACTIONS(290),
    [anon_sym_61] = ACTIONS(288),
    [anon_sym_gap] = ACTIONS(288),
    [anon_sym_ga] = ACTIONS(290),
    [anon_sym_62] = ACTIONS(288),
    [anon_sym_invert] = ACTIONS(288),
    [anon_sym_63] = ACTIONS(288),
    [anon_sym_spawn] = ACTIONS(288),
    [anon_sym_fold] = ACTIONS(288),
    [anon_sym_64] = ACTIONS(288),
    [anon_sym_distribute] = ACTIONS(288),
    [anon_sym_65] = ACTIONS(288),
    [anon_sym_table] = ACTIONS(288),
    [anon_sym_66] = ACTIONS(288),
    [anon_sym_cross] = ACTIONS(288),
    [anon_sym_67] = ACTIONS(288),
    [anon_sym_group] = ACTIONS(288),
    [anon_sym_68] = ACTIONS(288),
    [anon_sym_partition] = ACTIONS(288),
    [anon_sym_69] = ACTIONS(288),
    [anon_sym_both] = ACTIONS(288),
    [anon_sym_70] = ACTIONS(288),
    [anon_sym_bracket] = ACTIONS(288),
    [anon_sym_71] = ACTIONS(288),
    [anon_sym_fork] = ACTIONS(288),
    [anon_sym_72] = ACTIONS(288),
    [anon_sym_under] = ACTIONS(288),
    [anon_sym_73] = ACTIONS(288),
    [anon_sym_level] = ACTIONS(288),
    [anon_sym_74] = ACTIONS(288),
    [anon_sym_fill] = ACTIONS(288),
    [anon_sym_75] = ACTIONS(288),
    [anon_sym_bind] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_try] = ACTIONS(288),
    [anon_sym_76] = ACTIONS(288),
    [anon_sym_77] = ACTIONS(288),
    [anon_sym_78] = ACTIONS(288),
    [anon_sym_79] = ACTIONS(288),
    [anon_sym_80] = ACTIONS(288),
    [anon_sym_81] = ACTIONS(288),
    [anon_sym_82] = ACTIONS(288),
    [anon_sym_roll] = ACTIONS(288),
    [anon_sym_83] = ACTIONS(288),
    [anon_sym_unroll] = ACTIONS(288),
    [anon_sym_84] = ACTIONS(288),
    [anon_sym_restack] = ACTIONS(288),
    [anon_sym_85] = ACTIONS(288),
    [anon_sym_86] = ACTIONS(288),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [53] = {
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_] = ACTIONS(318),
    [aux_sym_number_token1] = ACTIONS(316),
    [aux_sym_character_token1] = ACTIONS(316),
    [sym_multiLineString] = ACTIONS(316),
    [sym_signature] = ACTIONS(316),
    [sym_identifier] = ACTIONS(318),
    [sym_identifier_deprecated] = ACTIONS(318),
    [sym_system] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(316),
    [sym_closeParen] = ACTIONS(316),
    [sym_openCurly] = ACTIONS(316),
    [sym_openBracket] = ACTIONS(316),
    [sym_underscore] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_identity] = ACTIONS(316),
    [anon_sym_id] = ACTIONS(318),
    [anon_sym_6] = ACTIONS(316),
    [anon_sym_not] = ACTIONS(316),
    [anon_sym_7] = ACTIONS(316),
    [anon_sym_sign] = ACTIONS(316),
    [anon_sym_8] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [anon_sym_absolutevalue] = ACTIONS(316),
    [anon_sym_9] = ACTIONS(316),
    [anon_sym_sqrt] = ACTIONS(316),
    [anon_sym_10] = ACTIONS(316),
    [anon_sym_sine] = ACTIONS(316),
    [anon_sym_11] = ACTIONS(316),
    [anon_sym_floor] = ACTIONS(316),
    [anon_sym_12] = ACTIONS(316),
    [anon_sym_ceiling] = ACTIONS(316),
    [anon_sym_13] = ACTIONS(316),
    [anon_sym_round] = ACTIONS(316),
    [anon_sym_14] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_BANG_EQ] = ACTIONS(316),
    [anon_sym_15] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [anon_sym_16] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [anon_sym_17] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_18] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [anon_sym_19] = ACTIONS(316),
    [anon_sym_modulus] = ACTIONS(316),
    [anon_sym_20] = ACTIONS(316),
    [anon_sym_power] = ACTIONS(316),
    [anon_sym_21] = ACTIONS(316),
    [anon_sym_logarithm] = ACTIONS(316),
    [anon_sym_22] = ACTIONS(316),
    [anon_sym_minimum] = ACTIONS(316),
    [anon_sym_23] = ACTIONS(316),
    [anon_sym_maximum] = ACTIONS(316),
    [anon_sym_24] = ACTIONS(316),
    [anon_sym_atangent] = ACTIONS(316),
    [anon_sym_25] = ACTIONS(316),
    [anon_sym_length] = ACTIONS(316),
    [anon_sym_26] = ACTIONS(316),
    [anon_sym_shape] = ACTIONS(316),
    [anon_sym_27] = ACTIONS(316),
    [anon_sym_range] = ACTIONS(316),
    [anon_sym_28] = ACTIONS(316),
    [anon_sym_first] = ACTIONS(316),
    [anon_sym_29] = ACTIONS(316),
    [anon_sym_reverse] = ACTIONS(316),
    [anon_sym_30] = ACTIONS(316),
    [anon_sym_deshape] = ACTIONS(316),
    [anon_sym_31] = ACTIONS(316),
    [anon_sym_bits] = ACTIONS(316),
    [anon_sym_32] = ACTIONS(316),
    [anon_sym_transpose] = ACTIONS(316),
    [anon_sym_33] = ACTIONS(316),
    [anon_sym_rise] = ACTIONS(316),
    [anon_sym_34] = ACTIONS(316),
    [anon_sym_fall] = ACTIONS(316),
    [anon_sym_35] = ACTIONS(316),
    [anon_sym_classify] = ACTIONS(316),
    [anon_sym_36] = ACTIONS(316),
    [anon_sym_deduplicate] = ACTIONS(316),
    [anon_sym_37] = ACTIONS(316),
    [anon_sym_box] = ACTIONS(316),
    [anon_sym_38] = ACTIONS(316),
    [anon_sym_unbox] = ACTIONS(316),
    [anon_sym_39] = ACTIONS(316),
    [anon_sym_match] = ACTIONS(316),
    [anon_sym_40] = ACTIONS(316),
    [anon_sym_couple] = ACTIONS(316),
    [anon_sym_41] = ACTIONS(316),
    [anon_sym_join] = ACTIONS(316),
    [anon_sym_42] = ACTIONS(316),
    [anon_sym_select] = ACTIONS(316),
    [anon_sym_43] = ACTIONS(316),
    [anon_sym_pick] = ACTIONS(316),
    [anon_sym_44] = ACTIONS(316),
    [anon_sym_reshape] = ACTIONS(316),
    [anon_sym_45] = ACTIONS(316),
    [anon_sym_take] = ACTIONS(316),
    [anon_sym_46] = ACTIONS(316),
    [anon_sym_drop] = ACTIONS(316),
    [anon_sym_47] = ACTIONS(316),
    [anon_sym_rotate] = ACTIONS(316),
    [anon_sym_48] = ACTIONS(316),
    [anon_sym_windows] = ACTIONS(316),
    [anon_sym_49] = ACTIONS(316),
    [anon_sym_keep] = ACTIONS(316),
    [anon_sym_50] = ACTIONS(316),
    [anon_sym_find] = ACTIONS(316),
    [anon_sym_51] = ACTIONS(316),
    [anon_sym_member] = ACTIONS(316),
    [anon_sym_52] = ACTIONS(316),
    [anon_sym_indexof] = ACTIONS(316),
    [anon_sym_53] = ACTIONS(316),
    [anon_sym_assert] = ACTIONS(316),
    [anon_sym_54] = ACTIONS(316),
    [anon_sym_wait] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_break] = ACTIONS(316),
    [anon_sym_55] = ACTIONS(316),
    [anon_sym_recur] = ACTIONS(316),
    [anon_sym_56] = ACTIONS(316),
    [anon_sym_random] = ACTIONS(316),
    [anon_sym_57] = ACTIONS(316),
    [anon_sym_gen] = ACTIONS(316),
    [anon_sym_deal] = ACTIONS(316),
    [anon_sym_use] = ACTIONS(316),
    [anon_sym_tag] = ACTIONS(316),
    [anon_sym_type] = ACTIONS(316),
    [anon_sym_sig] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_dump] = ACTIONS(316),
    [anon_sym_reduce] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_scan] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_each] = ACTIONS(316),
    [anon_sym_58] = ACTIONS(316),
    [anon_sym_rows] = ACTIONS(316),
    [anon_sym_59] = ACTIONS(316),
    [anon_sym_repeat] = ACTIONS(316),
    [anon_sym_60] = ACTIONS(316),
    [anon_sym_dip] = ACTIONS(316),
    [anon_sym_di] = ACTIONS(318),
    [anon_sym_61] = ACTIONS(316),
    [anon_sym_gap] = ACTIONS(316),
    [anon_sym_ga] = ACTIONS(318),
    [anon_sym_62] = ACTIONS(316),
    [anon_sym_invert] = ACTIONS(316),
    [anon_sym_63] = ACTIONS(316),
    [anon_sym_spawn] = ACTIONS(316),
    [anon_sym_fold] = ACTIONS(316),
    [anon_sym_64] = ACTIONS(316),
    [anon_sym_distribute] = ACTIONS(316),
    [anon_sym_65] = ACTIONS(316),
    [anon_sym_table] = ACTIONS(316),
    [anon_sym_66] = ACTIONS(316),
    [anon_sym_cross] = ACTIONS(316),
    [anon_sym_67] = ACTIONS(316),
    [anon_sym_group] = ACTIONS(316),
    [anon_sym_68] = ACTIONS(316),
    [anon_sym_partition] = ACTIONS(316),
    [anon_sym_69] = ACTIONS(316),
    [anon_sym_both] = ACTIONS(316),
    [anon_sym_70] = ACTIONS(316),
    [anon_sym_bracket] = ACTIONS(316),
    [anon_sym_71] = ACTIONS(316),
    [anon_sym_fork] = ACTIONS(316),
    [anon_sym_72] = ACTIONS(316),
    [anon_sym_under] = ACTIONS(316),
    [anon_sym_73] = ACTIONS(316),
    [anon_sym_level] = ACTIONS(316),
    [anon_sym_74] = ACTIONS(316),
    [anon_sym_fill] = ACTIONS(316),
    [anon_sym_75] = ACTIONS(316),
    [anon_sym_bind] = ACTIONS(316),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(316),
    [anon_sym_try] = ACTIONS(316),
    [anon_sym_76] = ACTIONS(316),
    [anon_sym_77] = ACTIONS(316),
    [anon_sym_78] = ACTIONS(316),
    [anon_sym_79] = ACTIONS(316),
    [anon_sym_80] = ACTIONS(316),
    [anon_sym_81] = ACTIONS(316),
    [anon_sym_82] = ACTIONS(316),
    [anon_sym_roll] = ACTIONS(316),
    [anon_sym_83] = ACTIONS(316),
    [anon_sym_unroll] = ACTIONS(316),
    [anon_sym_84] = ACTIONS(316),
    [anon_sym_restack] = ACTIONS(316),
    [anon_sym_85] = ACTIONS(316),
    [anon_sym_86] = ACTIONS(316),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [54] = {
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_] = ACTIONS(294),
    [aux_sym_number_token1] = ACTIONS(292),
    [aux_sym_character_token1] = ACTIONS(292),
    [sym_multiLineString] = ACTIONS(292),
    [sym_signature] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
    [sym_identifier_deprecated] = ACTIONS(294),
    [sym_system] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(292),
    [sym_closeParen] = ACTIONS(292),
    [sym_openCurly] = ACTIONS(292),
    [sym_openBracket] = ACTIONS(292),
    [sym_underscore] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_COLON] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_identity] = ACTIONS(292),
    [anon_sym_id] = ACTIONS(294),
    [anon_sym_6] = ACTIONS(292),
    [anon_sym_not] = ACTIONS(292),
    [anon_sym_7] = ACTIONS(292),
    [anon_sym_sign] = ACTIONS(292),
    [anon_sym_8] = ACTIONS(292),
    [anon_sym_BQUOTE] = ACTIONS(292),
    [anon_sym_absolutevalue] = ACTIONS(292),
    [anon_sym_9] = ACTIONS(292),
    [anon_sym_sqrt] = ACTIONS(292),
    [anon_sym_10] = ACTIONS(292),
    [anon_sym_sine] = ACTIONS(292),
    [anon_sym_11] = ACTIONS(292),
    [anon_sym_floor] = ACTIONS(292),
    [anon_sym_12] = ACTIONS(292),
    [anon_sym_ceiling] = ACTIONS(292),
    [anon_sym_13] = ACTIONS(292),
    [anon_sym_round] = ACTIONS(292),
    [anon_sym_14] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_15] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_16] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_17] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_18] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_19] = ACTIONS(292),
    [anon_sym_modulus] = ACTIONS(292),
    [anon_sym_20] = ACTIONS(292),
    [anon_sym_power] = ACTIONS(292),
    [anon_sym_21] = ACTIONS(292),
    [anon_sym_logarithm] = ACTIONS(292),
    [anon_sym_22] = ACTIONS(292),
    [anon_sym_minimum] = ACTIONS(292),
    [anon_sym_23] = ACTIONS(292),
    [anon_sym_maximum] = ACTIONS(292),
    [anon_sym_24] = ACTIONS(292),
    [anon_sym_atangent] = ACTIONS(292),
    [anon_sym_25] = ACTIONS(292),
    [anon_sym_length] = ACTIONS(292),
    [anon_sym_26] = ACTIONS(292),
    [anon_sym_shape] = ACTIONS(292),
    [anon_sym_27] = ACTIONS(292),
    [anon_sym_range] = ACTIONS(292),
    [anon_sym_28] = ACTIONS(292),
    [anon_sym_first] = ACTIONS(292),
    [anon_sym_29] = ACTIONS(292),
    [anon_sym_reverse] = ACTIONS(292),
    [anon_sym_30] = ACTIONS(292),
    [anon_sym_deshape] = ACTIONS(292),
    [anon_sym_31] = ACTIONS(292),
    [anon_sym_bits] = ACTIONS(292),
    [anon_sym_32] = ACTIONS(292),
    [anon_sym_transpose] = ACTIONS(292),
    [anon_sym_33] = ACTIONS(292),
    [anon_sym_rise] = ACTIONS(292),
    [anon_sym_34] = ACTIONS(292),
    [anon_sym_fall] = ACTIONS(292),
    [anon_sym_35] = ACTIONS(292),
    [anon_sym_classify] = ACTIONS(292),
    [anon_sym_36] = ACTIONS(292),
    [anon_sym_deduplicate] = ACTIONS(292),
    [anon_sym_37] = ACTIONS(292),
    [anon_sym_box] = ACTIONS(292),
    [anon_sym_38] = ACTIONS(292),
    [anon_sym_unbox] = ACTIONS(292),
    [anon_sym_39] = ACTIONS(292),
    [anon_sym_match] = ACTIONS(292),
    [anon_sym_40] = ACTIONS(292),
    [anon_sym_couple] = ACTIONS(292),
    [anon_sym_41] = ACTIONS(292),
    [anon_sym_join] = ACTIONS(292),
    [anon_sym_42] = ACTIONS(292),
    [anon_sym_select] = ACTIONS(292),
    [anon_sym_43] = ACTIONS(292),
    [anon_sym_pick] = ACTIONS(292),
    [anon_sym_44] = ACTIONS(292),
    [anon_sym_reshape] = ACTIONS(292),
    [anon_sym_45] = ACTIONS(292),
    [anon_sym_take] = ACTIONS(292),
    [anon_sym_46] = ACTIONS(292),
    [anon_sym_drop] = ACTIONS(292),
    [anon_sym_47] = ACTIONS(292),
    [anon_sym_rotate] = ACTIONS(292),
    [anon_sym_48] = ACTIONS(292),
    [anon_sym_windows] = ACTIONS(292),
    [anon_sym_49] = ACTIONS(292),
    [anon_sym_keep] = ACTIONS(292),
    [anon_sym_50] = ACTIONS(292),
    [anon_sym_find] = ACTIONS(292),
    [anon_sym_51] = ACTIONS(292),
    [anon_sym_member] = ACTIONS(292),
    [anon_sym_52] = ACTIONS(292),
    [anon_sym_indexof] = ACTIONS(292),
    [anon_sym_53] = ACTIONS(292),
    [anon_sym_assert] = ACTIONS(292),
    [anon_sym_54] = ACTIONS(292),
    [anon_sym_wait] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_break] = ACTIONS(292),
    [anon_sym_55] = ACTIONS(292),
    [anon_sym_recur] = ACTIONS(292),
    [anon_sym_56] = ACTIONS(292),
    [anon_sym_random] = ACTIONS(292),
    [anon_sym_57] = ACTIONS(292),
    [anon_sym_gen] = ACTIONS(292),
    [anon_sym_deal] = ACTIONS(292),
    [anon_sym_use] = ACTIONS(292),
    [anon_sym_tag] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(292),
    [anon_sym_sig] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_dump] = ACTIONS(292),
    [anon_sym_reduce] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_scan] = ACTIONS(292),
    [anon_sym_BSLASH] = ACTIONS(292),
    [anon_sym_each] = ACTIONS(292),
    [anon_sym_58] = ACTIONS(292),
    [anon_sym_rows] = ACTIONS(292),
    [anon_sym_59] = ACTIONS(292),
    [anon_sym_repeat] = ACTIONS(292),
    [anon_sym_60] = ACTIONS(292),
    [anon_sym_dip] = ACTIONS(292),
    [anon_sym_di] = ACTIONS(294),
    [anon_sym_61] = ACTIONS(292),
    [anon_sym_gap] = ACTIONS(292),
    [anon_sym_ga] = ACTIONS(294),
    [anon_sym_62] = ACTIONS(292),
    [anon_sym_invert] = ACTIONS(292),
    [anon_sym_63] = ACTIONS(292),
    [anon_sym_spawn] = ACTIONS(292),
    [anon_sym_fold] = ACTIONS(292),
    [anon_sym_64] = ACTIONS(292),
    [anon_sym_distribute] = ACTIONS(292),
    [anon_sym_65] = ACTIONS(292),
    [anon_sym_table] = ACTIONS(292),
    [anon_sym_66] = ACTIONS(292),
    [anon_sym_cross] = ACTIONS(292),
    [anon_sym_67] = ACTIONS(292),
    [anon_sym_group] = ACTIONS(292),
    [anon_sym_68] = ACTIONS(292),
    [anon_sym_partition] = ACTIONS(292),
    [anon_sym_69] = ACTIONS(292),
    [anon_sym_both] = ACTIONS(292),
    [anon_sym_70] = ACTIONS(292),
    [anon_sym_bracket] = ACTIONS(292),
    [anon_sym_71] = ACTIONS(292),
    [anon_sym_fork] = ACTIONS(292),
    [anon_sym_72] = ACTIONS(292),
    [anon_sym_under] = ACTIONS(292),
    [anon_sym_73] = ACTIONS(292),
    [anon_sym_level] = ACTIONS(292),
    [anon_sym_74] = ACTIONS(292),
    [anon_sym_fill] = ACTIONS(292),
    [anon_sym_75] = ACTIONS(292),
    [anon_sym_bind] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_try] = ACTIONS(292),
    [anon_sym_76] = ACTIONS(292),
    [anon_sym_77] = ACTIONS(292),
    [anon_sym_78] = ACTIONS(292),
    [anon_sym_79] = ACTIONS(292),
    [anon_sym_80] = ACTIONS(292),
    [anon_sym_81] = ACTIONS(292),
    [anon_sym_82] = ACTIONS(292),
    [anon_sym_roll] = ACTIONS(292),
    [anon_sym_83] = ACTIONS(292),
    [anon_sym_unroll] = ACTIONS(292),
    [anon_sym_84] = ACTIONS(292),
    [anon_sym_restack] = ACTIONS(292),
    [anon_sym_85] = ACTIONS(292),
    [anon_sym_86] = ACTIONS(292),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_] = ACTIONS(298),
    [aux_sym_number_token1] = ACTIONS(296),
    [aux_sym_character_token1] = ACTIONS(296),
    [sym_multiLineString] = ACTIONS(296),
    [sym_signature] = ACTIONS(296),
    [sym_identifier] = ACTIONS(298),
    [sym_identifier_deprecated] = ACTIONS(298),
    [sym_system] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(296),
    [sym_closeParen] = ACTIONS(296),
    [sym_openCurly] = ACTIONS(296),
    [sym_openBracket] = ACTIONS(296),
    [sym_underscore] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_identity] = ACTIONS(296),
    [anon_sym_id] = ACTIONS(298),
    [anon_sym_6] = ACTIONS(296),
    [anon_sym_not] = ACTIONS(296),
    [anon_sym_7] = ACTIONS(296),
    [anon_sym_sign] = ACTIONS(296),
    [anon_sym_8] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [anon_sym_absolutevalue] = ACTIONS(296),
    [anon_sym_9] = ACTIONS(296),
    [anon_sym_sqrt] = ACTIONS(296),
    [anon_sym_10] = ACTIONS(296),
    [anon_sym_sine] = ACTIONS(296),
    [anon_sym_11] = ACTIONS(296),
    [anon_sym_floor] = ACTIONS(296),
    [anon_sym_12] = ACTIONS(296),
    [anon_sym_ceiling] = ACTIONS(296),
    [anon_sym_13] = ACTIONS(296),
    [anon_sym_round] = ACTIONS(296),
    [anon_sym_14] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_BANG_EQ] = ACTIONS(296),
    [anon_sym_15] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [anon_sym_16] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [anon_sym_17] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_18] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_19] = ACTIONS(296),
    [anon_sym_modulus] = ACTIONS(296),
    [anon_sym_20] = ACTIONS(296),
    [anon_sym_power] = ACTIONS(296),
    [anon_sym_21] = ACTIONS(296),
    [anon_sym_logarithm] = ACTIONS(296),
    [anon_sym_22] = ACTIONS(296),
    [anon_sym_minimum] = ACTIONS(296),
    [anon_sym_23] = ACTIONS(296),
    [anon_sym_maximum] = ACTIONS(296),
    [anon_sym_24] = ACTIONS(296),
    [anon_sym_atangent] = ACTIONS(296),
    [anon_sym_25] = ACTIONS(296),
    [anon_sym_length] = ACTIONS(296),
    [anon_sym_26] = ACTIONS(296),
    [anon_sym_shape] = ACTIONS(296),
    [anon_sym_27] = ACTIONS(296),
    [anon_sym_range] = ACTIONS(296),
    [anon_sym_28] = ACTIONS(296),
    [anon_sym_first] = ACTIONS(296),
    [anon_sym_29] = ACTIONS(296),
    [anon_sym_reverse] = ACTIONS(296),
    [anon_sym_30] = ACTIONS(296),
    [anon_sym_deshape] = ACTIONS(296),
    [anon_sym_31] = ACTIONS(296),
    [anon_sym_bits] = ACTIONS(296),
    [anon_sym_32] = ACTIONS(296),
    [anon_sym_transpose] = ACTIONS(296),
    [anon_sym_33] = ACTIONS(296),
    [anon_sym_rise] = ACTIONS(296),
    [anon_sym_34] = ACTIONS(296),
    [anon_sym_fall] = ACTIONS(296),
    [anon_sym_35] = ACTIONS(296),
    [anon_sym_classify] = ACTIONS(296),
    [anon_sym_36] = ACTIONS(296),
    [anon_sym_deduplicate] = ACTIONS(296),
    [anon_sym_37] = ACTIONS(296),
    [anon_sym_box] = ACTIONS(296),
    [anon_sym_38] = ACTIONS(296),
    [anon_sym_unbox] = ACTIONS(296),
    [anon_sym_39] = ACTIONS(296),
    [anon_sym_match] = ACTIONS(296),
    [anon_sym_40] = ACTIONS(296),
    [anon_sym_couple] = ACTIONS(296),
    [anon_sym_41] = ACTIONS(296),
    [anon_sym_join] = ACTIONS(296),
    [anon_sym_42] = ACTIONS(296),
    [anon_sym_select] = ACTIONS(296),
    [anon_sym_43] = ACTIONS(296),
    [anon_sym_pick] = ACTIONS(296),
    [anon_sym_44] = ACTIONS(296),
    [anon_sym_reshape] = ACTIONS(296),
    [anon_sym_45] = ACTIONS(296),
    [anon_sym_take] = ACTIONS(296),
    [anon_sym_46] = ACTIONS(296),
    [anon_sym_drop] = ACTIONS(296),
    [anon_sym_47] = ACTIONS(296),
    [anon_sym_rotate] = ACTIONS(296),
    [anon_sym_48] = ACTIONS(296),
    [anon_sym_windows] = ACTIONS(296),
    [anon_sym_49] = ACTIONS(296),
    [anon_sym_keep] = ACTIONS(296),
    [anon_sym_50] = ACTIONS(296),
    [anon_sym_find] = ACTIONS(296),
    [anon_sym_51] = ACTIONS(296),
    [anon_sym_member] = ACTIONS(296),
    [anon_sym_52] = ACTIONS(296),
    [anon_sym_indexof] = ACTIONS(296),
    [anon_sym_53] = ACTIONS(296),
    [anon_sym_assert] = ACTIONS(296),
    [anon_sym_54] = ACTIONS(296),
    [anon_sym_wait] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_break] = ACTIONS(296),
    [anon_sym_55] = ACTIONS(296),
    [anon_sym_recur] = ACTIONS(296),
    [anon_sym_56] = ACTIONS(296),
    [anon_sym_random] = ACTIONS(296),
    [anon_sym_57] = ACTIONS(296),
    [anon_sym_gen] = ACTIONS(296),
    [anon_sym_deal] = ACTIONS(296),
    [anon_sym_use] = ACTIONS(296),
    [anon_sym_tag] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(296),
    [anon_sym_sig] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_dump] = ACTIONS(296),
    [anon_sym_reduce] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_scan] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(296),
    [anon_sym_each] = ACTIONS(296),
    [anon_sym_58] = ACTIONS(296),
    [anon_sym_rows] = ACTIONS(296),
    [anon_sym_59] = ACTIONS(296),
    [anon_sym_repeat] = ACTIONS(296),
    [anon_sym_60] = ACTIONS(296),
    [anon_sym_dip] = ACTIONS(296),
    [anon_sym_di] = ACTIONS(298),
    [anon_sym_61] = ACTIONS(296),
    [anon_sym_gap] = ACTIONS(296),
    [anon_sym_ga] = ACTIONS(298),
    [anon_sym_62] = ACTIONS(296),
    [anon_sym_invert] = ACTIONS(296),
    [anon_sym_63] = ACTIONS(296),
    [anon_sym_spawn] = ACTIONS(296),
    [anon_sym_fold] = ACTIONS(296),
    [anon_sym_64] = ACTIONS(296),
    [anon_sym_distribute] = ACTIONS(296),
    [anon_sym_65] = ACTIONS(296),
    [anon_sym_table] = ACTIONS(296),
    [anon_sym_66] = ACTIONS(296),
    [anon_sym_cross] = ACTIONS(296),
    [anon_sym_67] = ACTIONS(296),
    [anon_sym_group] = ACTIONS(296),
    [anon_sym_68] = ACTIONS(296),
    [anon_sym_partition] = ACTIONS(296),
    [anon_sym_69] = ACTIONS(296),
    [anon_sym_both] = ACTIONS(296),
    [anon_sym_70] = ACTIONS(296),
    [anon_sym_bracket] = ACTIONS(296),
    [anon_sym_71] = ACTIONS(296),
    [anon_sym_fork] = ACTIONS(296),
    [anon_sym_72] = ACTIONS(296),
    [anon_sym_under] = ACTIONS(296),
    [anon_sym_73] = ACTIONS(296),
    [anon_sym_level] = ACTIONS(296),
    [anon_sym_74] = ACTIONS(296),
    [anon_sym_fill] = ACTIONS(296),
    [anon_sym_75] = ACTIONS(296),
    [anon_sym_bind] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_try] = ACTIONS(296),
    [anon_sym_76] = ACTIONS(296),
    [anon_sym_77] = ACTIONS(296),
    [anon_sym_78] = ACTIONS(296),
    [anon_sym_79] = ACTIONS(296),
    [anon_sym_80] = ACTIONS(296),
    [anon_sym_81] = ACTIONS(296),
    [anon_sym_82] = ACTIONS(296),
    [anon_sym_roll] = ACTIONS(296),
    [anon_sym_83] = ACTIONS(296),
    [anon_sym_unroll] = ACTIONS(296),
    [anon_sym_84] = ACTIONS(296),
    [anon_sym_restack] = ACTIONS(296),
    [anon_sym_85] = ACTIONS(296),
    [anon_sym_86] = ACTIONS(296),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [56] = {
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_] = ACTIONS(314),
    [aux_sym_number_token1] = ACTIONS(312),
    [aux_sym_character_token1] = ACTIONS(312),
    [sym_multiLineString] = ACTIONS(312),
    [sym_signature] = ACTIONS(312),
    [sym_identifier] = ACTIONS(314),
    [sym_identifier_deprecated] = ACTIONS(314),
    [sym_system] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(312),
    [sym_closeParen] = ACTIONS(312),
    [sym_openCurly] = ACTIONS(312),
    [sym_openBracket] = ACTIONS(312),
    [sym_underscore] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_identity] = ACTIONS(312),
    [anon_sym_id] = ACTIONS(314),
    [anon_sym_6] = ACTIONS(312),
    [anon_sym_not] = ACTIONS(312),
    [anon_sym_7] = ACTIONS(312),
    [anon_sym_sign] = ACTIONS(312),
    [anon_sym_8] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_absolutevalue] = ACTIONS(312),
    [anon_sym_9] = ACTIONS(312),
    [anon_sym_sqrt] = ACTIONS(312),
    [anon_sym_10] = ACTIONS(312),
    [anon_sym_sine] = ACTIONS(312),
    [anon_sym_11] = ACTIONS(312),
    [anon_sym_floor] = ACTIONS(312),
    [anon_sym_12] = ACTIONS(312),
    [anon_sym_ceiling] = ACTIONS(312),
    [anon_sym_13] = ACTIONS(312),
    [anon_sym_round] = ACTIONS(312),
    [anon_sym_14] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_15] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_16] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_17] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_18] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
    [anon_sym_19] = ACTIONS(312),
    [anon_sym_modulus] = ACTIONS(312),
    [anon_sym_20] = ACTIONS(312),
    [anon_sym_power] = ACTIONS(312),
    [anon_sym_21] = ACTIONS(312),
    [anon_sym_logarithm] = ACTIONS(312),
    [anon_sym_22] = ACTIONS(312),
    [anon_sym_minimum] = ACTIONS(312),
    [anon_sym_23] = ACTIONS(312),
    [anon_sym_maximum] = ACTIONS(312),
    [anon_sym_24] = ACTIONS(312),
    [anon_sym_atangent] = ACTIONS(312),
    [anon_sym_25] = ACTIONS(312),
    [anon_sym_length] = ACTIONS(312),
    [anon_sym_26] = ACTIONS(312),
    [anon_sym_shape] = ACTIONS(312),
    [anon_sym_27] = ACTIONS(312),
    [anon_sym_range] = ACTIONS(312),
    [anon_sym_28] = ACTIONS(312),
    [anon_sym_first] = ACTIONS(312),
    [anon_sym_29] = ACTIONS(312),
    [anon_sym_reverse] = ACTIONS(312),
    [anon_sym_30] = ACTIONS(312),
    [anon_sym_deshape] = ACTIONS(312),
    [anon_sym_31] = ACTIONS(312),
    [anon_sym_bits] = ACTIONS(312),
    [anon_sym_32] = ACTIONS(312),
    [anon_sym_transpose] = ACTIONS(312),
    [anon_sym_33] = ACTIONS(312),
    [anon_sym_rise] = ACTIONS(312),
    [anon_sym_34] = ACTIONS(312),
    [anon_sym_fall] = ACTIONS(312),
    [anon_sym_35] = ACTIONS(312),
    [anon_sym_classify] = ACTIONS(312),
    [anon_sym_36] = ACTIONS(312),
    [anon_sym_deduplicate] = ACTIONS(312),
    [anon_sym_37] = ACTIONS(312),
    [anon_sym_box] = ACTIONS(312),
    [anon_sym_38] = ACTIONS(312),
    [anon_sym_unbox] = ACTIONS(312),
    [anon_sym_39] = ACTIONS(312),
    [anon_sym_match] = ACTIONS(312),
    [anon_sym_40] = ACTIONS(312),
    [anon_sym_couple] = ACTIONS(312),
    [anon_sym_41] = ACTIONS(312),
    [anon_sym_join] = ACTIONS(312),
    [anon_sym_42] = ACTIONS(312),
    [anon_sym_select] = ACTIONS(312),
    [anon_sym_43] = ACTIONS(312),
    [anon_sym_pick] = ACTIONS(312),
    [anon_sym_44] = ACTIONS(312),
    [anon_sym_reshape] = ACTIONS(312),
    [anon_sym_45] = ACTIONS(312),
    [anon_sym_take] = ACTIONS(312),
    [anon_sym_46] = ACTIONS(312),
    [anon_sym_drop] = ACTIONS(312),
    [anon_sym_47] = ACTIONS(312),
    [anon_sym_rotate] = ACTIONS(312),
    [anon_sym_48] = ACTIONS(312),
    [anon_sym_windows] = ACTIONS(312),
    [anon_sym_49] = ACTIONS(312),
    [anon_sym_keep] = ACTIONS(312),
    [anon_sym_50] = ACTIONS(312),
    [anon_sym_find] = ACTIONS(312),
    [anon_sym_51] = ACTIONS(312),
    [anon_sym_member] = ACTIONS(312),
    [anon_sym_52] = ACTIONS(312),
    [anon_sym_indexof] = ACTIONS(312),
    [anon_sym_53] = ACTIONS(312),
    [anon_sym_assert] = ACTIONS(312),
    [anon_sym_54] = ACTIONS(312),
    [anon_sym_wait] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_break] = ACTIONS(312),
    [anon_sym_55] = ACTIONS(312),
    [anon_sym_recur] = ACTIONS(312),
    [anon_sym_56] = ACTIONS(312),
    [anon_sym_random] = ACTIONS(312),
    [anon_sym_57] = ACTIONS(312),
    [anon_sym_gen] = ACTIONS(312),
    [anon_sym_deal] = ACTIONS(312),
    [anon_sym_use] = ACTIONS(312),
    [anon_sym_tag] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(312),
    [anon_sym_sig] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_dump] = ACTIONS(312),
    [anon_sym_reduce] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_scan] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_each] = ACTIONS(312),
    [anon_sym_58] = ACTIONS(312),
    [anon_sym_rows] = ACTIONS(312),
    [anon_sym_59] = ACTIONS(312),
    [anon_sym_repeat] = ACTIONS(312),
    [anon_sym_60] = ACTIONS(312),
    [anon_sym_dip] = ACTIONS(312),
    [anon_sym_di] = ACTIONS(314),
    [anon_sym_61] = ACTIONS(312),
    [anon_sym_gap] = ACTIONS(312),
    [anon_sym_ga] = ACTIONS(314),
    [anon_sym_62] = ACTIONS(312),
    [anon_sym_invert] = ACTIONS(312),
    [anon_sym_63] = ACTIONS(312),
    [anon_sym_spawn] = ACTIONS(312),
    [anon_sym_fold] = ACTIONS(312),
    [anon_sym_64] = ACTIONS(312),
    [anon_sym_distribute] = ACTIONS(312),
    [anon_sym_65] = ACTIONS(312),
    [anon_sym_table] = ACTIONS(312),
    [anon_sym_66] = ACTIONS(312),
    [anon_sym_cross] = ACTIONS(312),
    [anon_sym_67] = ACTIONS(312),
    [anon_sym_group] = ACTIONS(312),
    [anon_sym_68] = ACTIONS(312),
    [anon_sym_partition] = ACTIONS(312),
    [anon_sym_69] = ACTIONS(312),
    [anon_sym_both] = ACTIONS(312),
    [anon_sym_70] = ACTIONS(312),
    [anon_sym_bracket] = ACTIONS(312),
    [anon_sym_71] = ACTIONS(312),
    [anon_sym_fork] = ACTIONS(312),
    [anon_sym_72] = ACTIONS(312),
    [anon_sym_under] = ACTIONS(312),
    [anon_sym_73] = ACTIONS(312),
    [anon_sym_level] = ACTIONS(312),
    [anon_sym_74] = ACTIONS(312),
    [anon_sym_fill] = ACTIONS(312),
    [anon_sym_75] = ACTIONS(312),
    [anon_sym_bind] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_try] = ACTIONS(312),
    [anon_sym_76] = ACTIONS(312),
    [anon_sym_77] = ACTIONS(312),
    [anon_sym_78] = ACTIONS(312),
    [anon_sym_79] = ACTIONS(312),
    [anon_sym_80] = ACTIONS(312),
    [anon_sym_81] = ACTIONS(312),
    [anon_sym_82] = ACTIONS(312),
    [anon_sym_roll] = ACTIONS(312),
    [anon_sym_83] = ACTIONS(312),
    [anon_sym_unroll] = ACTIONS(312),
    [anon_sym_84] = ACTIONS(312),
    [anon_sym_restack] = ACTIONS(312),
    [anon_sym_85] = ACTIONS(312),
    [anon_sym_86] = ACTIONS(312),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [57] = {
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_] = ACTIONS(342),
    [aux_sym_number_token1] = ACTIONS(344),
    [aux_sym_character_token1] = ACTIONS(344),
    [sym_multiLineString] = ACTIONS(344),
    [sym_signature] = ACTIONS(344),
    [sym_identifier] = ACTIONS(342),
    [sym_identifier_deprecated] = ACTIONS(342),
    [sym_system] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(344),
    [sym_closeParen] = ACTIONS(344),
    [sym_openCurly] = ACTIONS(344),
    [sym_openBracket] = ACTIONS(344),
    [sym_underscore] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_identity] = ACTIONS(344),
    [anon_sym_id] = ACTIONS(342),
    [anon_sym_6] = ACTIONS(344),
    [anon_sym_not] = ACTIONS(344),
    [anon_sym_7] = ACTIONS(344),
    [anon_sym_sign] = ACTIONS(344),
    [anon_sym_8] = ACTIONS(344),
    [anon_sym_BQUOTE] = ACTIONS(344),
    [anon_sym_absolutevalue] = ACTIONS(344),
    [anon_sym_9] = ACTIONS(344),
    [anon_sym_sqrt] = ACTIONS(344),
    [anon_sym_10] = ACTIONS(344),
    [anon_sym_sine] = ACTIONS(344),
    [anon_sym_11] = ACTIONS(344),
    [anon_sym_floor] = ACTIONS(344),
    [anon_sym_12] = ACTIONS(344),
    [anon_sym_ceiling] = ACTIONS(344),
    [anon_sym_13] = ACTIONS(344),
    [anon_sym_round] = ACTIONS(344),
    [anon_sym_14] = ACTIONS(344),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_15] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_16] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_17] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_18] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_19] = ACTIONS(344),
    [anon_sym_modulus] = ACTIONS(344),
    [anon_sym_20] = ACTIONS(344),
    [anon_sym_power] = ACTIONS(344),
    [anon_sym_21] = ACTIONS(344),
    [anon_sym_logarithm] = ACTIONS(344),
    [anon_sym_22] = ACTIONS(344),
    [anon_sym_minimum] = ACTIONS(344),
    [anon_sym_23] = ACTIONS(344),
    [anon_sym_maximum] = ACTIONS(344),
    [anon_sym_24] = ACTIONS(344),
    [anon_sym_atangent] = ACTIONS(344),
    [anon_sym_25] = ACTIONS(344),
    [anon_sym_length] = ACTIONS(344),
    [anon_sym_26] = ACTIONS(344),
    [anon_sym_shape] = ACTIONS(344),
    [anon_sym_27] = ACTIONS(344),
    [anon_sym_range] = ACTIONS(344),
    [anon_sym_28] = ACTIONS(344),
    [anon_sym_first] = ACTIONS(344),
    [anon_sym_29] = ACTIONS(344),
    [anon_sym_reverse] = ACTIONS(344),
    [anon_sym_30] = ACTIONS(344),
    [anon_sym_deshape] = ACTIONS(344),
    [anon_sym_31] = ACTIONS(344),
    [anon_sym_bits] = ACTIONS(344),
    [anon_sym_32] = ACTIONS(344),
    [anon_sym_transpose] = ACTIONS(344),
    [anon_sym_33] = ACTIONS(344),
    [anon_sym_rise] = ACTIONS(344),
    [anon_sym_34] = ACTIONS(344),
    [anon_sym_fall] = ACTIONS(344),
    [anon_sym_35] = ACTIONS(344),
    [anon_sym_classify] = ACTIONS(344),
    [anon_sym_36] = ACTIONS(344),
    [anon_sym_deduplicate] = ACTIONS(344),
    [anon_sym_37] = ACTIONS(344),
    [anon_sym_box] = ACTIONS(344),
    [anon_sym_38] = ACTIONS(344),
    [anon_sym_unbox] = ACTIONS(344),
    [anon_sym_39] = ACTIONS(344),
    [anon_sym_match] = ACTIONS(344),
    [anon_sym_40] = ACTIONS(344),
    [anon_sym_couple] = ACTIONS(344),
    [anon_sym_41] = ACTIONS(344),
    [anon_sym_join] = ACTIONS(344),
    [anon_sym_42] = ACTIONS(344),
    [anon_sym_select] = ACTIONS(344),
    [anon_sym_43] = ACTIONS(344),
    [anon_sym_pick] = ACTIONS(344),
    [anon_sym_44] = ACTIONS(344),
    [anon_sym_reshape] = ACTIONS(344),
    [anon_sym_45] = ACTIONS(344),
    [anon_sym_take] = ACTIONS(344),
    [anon_sym_46] = ACTIONS(344),
    [anon_sym_drop] = ACTIONS(344),
    [anon_sym_47] = ACTIONS(344),
    [anon_sym_rotate] = ACTIONS(344),
    [anon_sym_48] = ACTIONS(344),
    [anon_sym_windows] = ACTIONS(344),
    [anon_sym_49] = ACTIONS(344),
    [anon_sym_keep] = ACTIONS(344),
    [anon_sym_50] = ACTIONS(344),
    [anon_sym_find] = ACTIONS(344),
    [anon_sym_51] = ACTIONS(344),
    [anon_sym_member] = ACTIONS(344),
    [anon_sym_52] = ACTIONS(344),
    [anon_sym_indexof] = ACTIONS(344),
    [anon_sym_53] = ACTIONS(344),
    [anon_sym_assert] = ACTIONS(344),
    [anon_sym_54] = ACTIONS(344),
    [anon_sym_wait] = ACTIONS(344),
    [anon_sym_BANG] = ACTIONS(342),
    [anon_sym_break] = ACTIONS(344),
    [anon_sym_55] = ACTIONS(344),
    [anon_sym_recur] = ACTIONS(344),
    [anon_sym_56] = ACTIONS(344),
    [anon_sym_random] = ACTIONS(344),
    [anon_sym_57] = ACTIONS(344),
    [anon_sym_gen] = ACTIONS(344),
    [anon_sym_deal] = ACTIONS(344),
    [anon_sym_use] = ACTIONS(344),
    [anon_sym_tag] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [anon_sym_sig] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_dump] = ACTIONS(344),
    [anon_sym_reduce] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_scan] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_each] = ACTIONS(344),
    [anon_sym_58] = ACTIONS(344),
    [anon_sym_rows] = ACTIONS(344),
    [anon_sym_59] = ACTIONS(344),
    [anon_sym_repeat] = ACTIONS(344),
    [anon_sym_60] = ACTIONS(344),
    [anon_sym_dip] = ACTIONS(344),
    [anon_sym_di] = ACTIONS(342),
    [anon_sym_61] = ACTIONS(344),
    [anon_sym_gap] = ACTIONS(344),
    [anon_sym_ga] = ACTIONS(342),
    [anon_sym_62] = ACTIONS(344),
    [anon_sym_invert] = ACTIONS(344),
    [anon_sym_63] = ACTIONS(344),
    [anon_sym_spawn] = ACTIONS(344),
    [anon_sym_fold] = ACTIONS(344),
    [anon_sym_64] = ACTIONS(344),
    [anon_sym_distribute] = ACTIONS(344),
    [anon_sym_65] = ACTIONS(344),
    [anon_sym_table] = ACTIONS(344),
    [anon_sym_66] = ACTIONS(344),
    [anon_sym_cross] = ACTIONS(344),
    [anon_sym_67] = ACTIONS(344),
    [anon_sym_group] = ACTIONS(344),
    [anon_sym_68] = ACTIONS(344),
    [anon_sym_partition] = ACTIONS(344),
    [anon_sym_69] = ACTIONS(344),
    [anon_sym_both] = ACTIONS(344),
    [anon_sym_70] = ACTIONS(344),
    [anon_sym_bracket] = ACTIONS(344),
    [anon_sym_71] = ACTIONS(344),
    [anon_sym_fork] = ACTIONS(344),
    [anon_sym_72] = ACTIONS(344),
    [anon_sym_under] = ACTIONS(344),
    [anon_sym_73] = ACTIONS(344),
    [anon_sym_level] = ACTIONS(344),
    [anon_sym_74] = ACTIONS(344),
    [anon_sym_fill] = ACTIONS(344),
    [anon_sym_75] = ACTIONS(344),
    [anon_sym_bind] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_QMARK] = ACTIONS(344),
    [anon_sym_try] = ACTIONS(344),
    [anon_sym_76] = ACTIONS(344),
    [anon_sym_77] = ACTIONS(344),
    [anon_sym_78] = ACTIONS(344),
    [anon_sym_79] = ACTIONS(344),
    [anon_sym_80] = ACTIONS(344),
    [anon_sym_81] = ACTIONS(344),
    [anon_sym_82] = ACTIONS(344),
    [anon_sym_roll] = ACTIONS(344),
    [anon_sym_83] = ACTIONS(344),
    [anon_sym_unroll] = ACTIONS(344),
    [anon_sym_84] = ACTIONS(344),
    [anon_sym_restack] = ACTIONS(344),
    [anon_sym_85] = ACTIONS(344),
    [anon_sym_86] = ACTIONS(344),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [58] = {
    [anon_sym_DOLLAR] = ACTIONS(302),
    [anon_sym_] = ACTIONS(302),
    [aux_sym_number_token1] = ACTIONS(300),
    [aux_sym_character_token1] = ACTIONS(300),
    [sym_multiLineString] = ACTIONS(300),
    [sym_signature] = ACTIONS(300),
    [sym_identifier] = ACTIONS(302),
    [sym_identifier_deprecated] = ACTIONS(302),
    [sym_system] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(300),
    [sym_closeParen] = ACTIONS(300),
    [sym_openCurly] = ACTIONS(300),
    [sym_openBracket] = ACTIONS(300),
    [sym_underscore] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_COLON] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_identity] = ACTIONS(300),
    [anon_sym_id] = ACTIONS(302),
    [anon_sym_6] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(300),
    [anon_sym_7] = ACTIONS(300),
    [anon_sym_sign] = ACTIONS(300),
    [anon_sym_8] = ACTIONS(300),
    [anon_sym_BQUOTE] = ACTIONS(300),
    [anon_sym_absolutevalue] = ACTIONS(300),
    [anon_sym_9] = ACTIONS(300),
    [anon_sym_sqrt] = ACTIONS(300),
    [anon_sym_10] = ACTIONS(300),
    [anon_sym_sine] = ACTIONS(300),
    [anon_sym_11] = ACTIONS(300),
    [anon_sym_floor] = ACTIONS(300),
    [anon_sym_12] = ACTIONS(300),
    [anon_sym_ceiling] = ACTIONS(300),
    [anon_sym_13] = ACTIONS(300),
    [anon_sym_round] = ACTIONS(300),
    [anon_sym_14] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_15] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_16] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(300),
    [anon_sym_17] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_18] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_19] = ACTIONS(300),
    [anon_sym_modulus] = ACTIONS(300),
    [anon_sym_20] = ACTIONS(300),
    [anon_sym_power] = ACTIONS(300),
    [anon_sym_21] = ACTIONS(300),
    [anon_sym_logarithm] = ACTIONS(300),
    [anon_sym_22] = ACTIONS(300),
    [anon_sym_minimum] = ACTIONS(300),
    [anon_sym_23] = ACTIONS(300),
    [anon_sym_maximum] = ACTIONS(300),
    [anon_sym_24] = ACTIONS(300),
    [anon_sym_atangent] = ACTIONS(300),
    [anon_sym_25] = ACTIONS(300),
    [anon_sym_length] = ACTIONS(300),
    [anon_sym_26] = ACTIONS(300),
    [anon_sym_shape] = ACTIONS(300),
    [anon_sym_27] = ACTIONS(300),
    [anon_sym_range] = ACTIONS(300),
    [anon_sym_28] = ACTIONS(300),
    [anon_sym_first] = ACTIONS(300),
    [anon_sym_29] = ACTIONS(300),
    [anon_sym_reverse] = ACTIONS(300),
    [anon_sym_30] = ACTIONS(300),
    [anon_sym_deshape] = ACTIONS(300),
    [anon_sym_31] = ACTIONS(300),
    [anon_sym_bits] = ACTIONS(300),
    [anon_sym_32] = ACTIONS(300),
    [anon_sym_transpose] = ACTIONS(300),
    [anon_sym_33] = ACTIONS(300),
    [anon_sym_rise] = ACTIONS(300),
    [anon_sym_34] = ACTIONS(300),
    [anon_sym_fall] = ACTIONS(300),
    [anon_sym_35] = ACTIONS(300),
    [anon_sym_classify] = ACTIONS(300),
    [anon_sym_36] = ACTIONS(300),
    [anon_sym_deduplicate] = ACTIONS(300),
    [anon_sym_37] = ACTIONS(300),
    [anon_sym_box] = ACTIONS(300),
    [anon_sym_38] = ACTIONS(300),
    [anon_sym_unbox] = ACTIONS(300),
    [anon_sym_39] = ACTIONS(300),
    [anon_sym_match] = ACTIONS(300),
    [anon_sym_40] = ACTIONS(300),
    [anon_sym_couple] = ACTIONS(300),
    [anon_sym_41] = ACTIONS(300),
    [anon_sym_join] = ACTIONS(300),
    [anon_sym_42] = ACTIONS(300),
    [anon_sym_select] = ACTIONS(300),
    [anon_sym_43] = ACTIONS(300),
    [anon_sym_pick] = ACTIONS(300),
    [anon_sym_44] = ACTIONS(300),
    [anon_sym_reshape] = ACTIONS(300),
    [anon_sym_45] = ACTIONS(300),
    [anon_sym_take] = ACTIONS(300),
    [anon_sym_46] = ACTIONS(300),
    [anon_sym_drop] = ACTIONS(300),
    [anon_sym_47] = ACTIONS(300),
    [anon_sym_rotate] = ACTIONS(300),
    [anon_sym_48] = ACTIONS(300),
    [anon_sym_windows] = ACTIONS(300),
    [anon_sym_49] = ACTIONS(300),
    [anon_sym_keep] = ACTIONS(300),
    [anon_sym_50] = ACTIONS(300),
    [anon_sym_find] = ACTIONS(300),
    [anon_sym_51] = ACTIONS(300),
    [anon_sym_member] = ACTIONS(300),
    [anon_sym_52] = ACTIONS(300),
    [anon_sym_indexof] = ACTIONS(300),
    [anon_sym_53] = ACTIONS(300),
    [anon_sym_assert] = ACTIONS(300),
    [anon_sym_54] = ACTIONS(300),
    [anon_sym_wait] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_break] = ACTIONS(300),
    [anon_sym_55] = ACTIONS(300),
    [anon_sym_recur] = ACTIONS(300),
    [anon_sym_56] = ACTIONS(300),
    [anon_sym_random] = ACTIONS(300),
    [anon_sym_57] = ACTIONS(300),
    [anon_sym_gen] = ACTIONS(300),
    [anon_sym_deal] = ACTIONS(300),
    [anon_sym_use] = ACTIONS(300),
    [anon_sym_tag] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(300),
    [anon_sym_sig] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_dump] = ACTIONS(300),
    [anon_sym_reduce] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_scan] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_each] = ACTIONS(300),
    [anon_sym_58] = ACTIONS(300),
    [anon_sym_rows] = ACTIONS(300),
    [anon_sym_59] = ACTIONS(300),
    [anon_sym_repeat] = ACTIONS(300),
    [anon_sym_60] = ACTIONS(300),
    [anon_sym_dip] = ACTIONS(300),
    [anon_sym_di] = ACTIONS(302),
    [anon_sym_61] = ACTIONS(300),
    [anon_sym_gap] = ACTIONS(300),
    [anon_sym_ga] = ACTIONS(302),
    [anon_sym_62] = ACTIONS(300),
    [anon_sym_invert] = ACTIONS(300),
    [anon_sym_63] = ACTIONS(300),
    [anon_sym_spawn] = ACTIONS(300),
    [anon_sym_fold] = ACTIONS(300),
    [anon_sym_64] = ACTIONS(300),
    [anon_sym_distribute] = ACTIONS(300),
    [anon_sym_65] = ACTIONS(300),
    [anon_sym_table] = ACTIONS(300),
    [anon_sym_66] = ACTIONS(300),
    [anon_sym_cross] = ACTIONS(300),
    [anon_sym_67] = ACTIONS(300),
    [anon_sym_group] = ACTIONS(300),
    [anon_sym_68] = ACTIONS(300),
    [anon_sym_partition] = ACTIONS(300),
    [anon_sym_69] = ACTIONS(300),
    [anon_sym_both] = ACTIONS(300),
    [anon_sym_70] = ACTIONS(300),
    [anon_sym_bracket] = ACTIONS(300),
    [anon_sym_71] = ACTIONS(300),
    [anon_sym_fork] = ACTIONS(300),
    [anon_sym_72] = ACTIONS(300),
    [anon_sym_under] = ACTIONS(300),
    [anon_sym_73] = ACTIONS(300),
    [anon_sym_level] = ACTIONS(300),
    [anon_sym_74] = ACTIONS(300),
    [anon_sym_fill] = ACTIONS(300),
    [anon_sym_75] = ACTIONS(300),
    [anon_sym_bind] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(300),
    [anon_sym_76] = ACTIONS(300),
    [anon_sym_77] = ACTIONS(300),
    [anon_sym_78] = ACTIONS(300),
    [anon_sym_79] = ACTIONS(300),
    [anon_sym_80] = ACTIONS(300),
    [anon_sym_81] = ACTIONS(300),
    [anon_sym_82] = ACTIONS(300),
    [anon_sym_roll] = ACTIONS(300),
    [anon_sym_83] = ACTIONS(300),
    [anon_sym_unroll] = ACTIONS(300),
    [anon_sym_84] = ACTIONS(300),
    [anon_sym_restack] = ACTIONS(300),
    [anon_sym_85] = ACTIONS(300),
    [anon_sym_86] = ACTIONS(300),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_] = ACTIONS(340),
    [aux_sym_number_token1] = ACTIONS(338),
    [aux_sym_character_token1] = ACTIONS(338),
    [sym_multiLineString] = ACTIONS(338),
    [sym_signature] = ACTIONS(338),
    [sym_identifier] = ACTIONS(340),
    [sym_identifier_deprecated] = ACTIONS(340),
    [sym_system] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(338),
    [sym_closeParen] = ACTIONS(338),
    [sym_openCurly] = ACTIONS(338),
    [sym_openBracket] = ACTIONS(338),
    [sym_underscore] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_identity] = ACTIONS(338),
    [anon_sym_id] = ACTIONS(340),
    [anon_sym_6] = ACTIONS(338),
    [anon_sym_not] = ACTIONS(338),
    [anon_sym_7] = ACTIONS(338),
    [anon_sym_sign] = ACTIONS(338),
    [anon_sym_8] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_absolutevalue] = ACTIONS(338),
    [anon_sym_9] = ACTIONS(338),
    [anon_sym_sqrt] = ACTIONS(338),
    [anon_sym_10] = ACTIONS(338),
    [anon_sym_sine] = ACTIONS(338),
    [anon_sym_11] = ACTIONS(338),
    [anon_sym_floor] = ACTIONS(338),
    [anon_sym_12] = ACTIONS(338),
    [anon_sym_ceiling] = ACTIONS(338),
    [anon_sym_13] = ACTIONS(338),
    [anon_sym_round] = ACTIONS(338),
    [anon_sym_14] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_15] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_16] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_17] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_18] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_19] = ACTIONS(338),
    [anon_sym_modulus] = ACTIONS(338),
    [anon_sym_20] = ACTIONS(338),
    [anon_sym_power] = ACTIONS(338),
    [anon_sym_21] = ACTIONS(338),
    [anon_sym_logarithm] = ACTIONS(338),
    [anon_sym_22] = ACTIONS(338),
    [anon_sym_minimum] = ACTIONS(338),
    [anon_sym_23] = ACTIONS(338),
    [anon_sym_maximum] = ACTIONS(338),
    [anon_sym_24] = ACTIONS(338),
    [anon_sym_atangent] = ACTIONS(338),
    [anon_sym_25] = ACTIONS(338),
    [anon_sym_length] = ACTIONS(338),
    [anon_sym_26] = ACTIONS(338),
    [anon_sym_shape] = ACTIONS(338),
    [anon_sym_27] = ACTIONS(338),
    [anon_sym_range] = ACTIONS(338),
    [anon_sym_28] = ACTIONS(338),
    [anon_sym_first] = ACTIONS(338),
    [anon_sym_29] = ACTIONS(338),
    [anon_sym_reverse] = ACTIONS(338),
    [anon_sym_30] = ACTIONS(338),
    [anon_sym_deshape] = ACTIONS(338),
    [anon_sym_31] = ACTIONS(338),
    [anon_sym_bits] = ACTIONS(338),
    [anon_sym_32] = ACTIONS(338),
    [anon_sym_transpose] = ACTIONS(338),
    [anon_sym_33] = ACTIONS(338),
    [anon_sym_rise] = ACTIONS(338),
    [anon_sym_34] = ACTIONS(338),
    [anon_sym_fall] = ACTIONS(338),
    [anon_sym_35] = ACTIONS(338),
    [anon_sym_classify] = ACTIONS(338),
    [anon_sym_36] = ACTIONS(338),
    [anon_sym_deduplicate] = ACTIONS(338),
    [anon_sym_37] = ACTIONS(338),
    [anon_sym_box] = ACTIONS(338),
    [anon_sym_38] = ACTIONS(338),
    [anon_sym_unbox] = ACTIONS(338),
    [anon_sym_39] = ACTIONS(338),
    [anon_sym_match] = ACTIONS(338),
    [anon_sym_40] = ACTIONS(338),
    [anon_sym_couple] = ACTIONS(338),
    [anon_sym_41] = ACTIONS(338),
    [anon_sym_join] = ACTIONS(338),
    [anon_sym_42] = ACTIONS(338),
    [anon_sym_select] = ACTIONS(338),
    [anon_sym_43] = ACTIONS(338),
    [anon_sym_pick] = ACTIONS(338),
    [anon_sym_44] = ACTIONS(338),
    [anon_sym_reshape] = ACTIONS(338),
    [anon_sym_45] = ACTIONS(338),
    [anon_sym_take] = ACTIONS(338),
    [anon_sym_46] = ACTIONS(338),
    [anon_sym_drop] = ACTIONS(338),
    [anon_sym_47] = ACTIONS(338),
    [anon_sym_rotate] = ACTIONS(338),
    [anon_sym_48] = ACTIONS(338),
    [anon_sym_windows] = ACTIONS(338),
    [anon_sym_49] = ACTIONS(338),
    [anon_sym_keep] = ACTIONS(338),
    [anon_sym_50] = ACTIONS(338),
    [anon_sym_find] = ACTIONS(338),
    [anon_sym_51] = ACTIONS(338),
    [anon_sym_member] = ACTIONS(338),
    [anon_sym_52] = ACTIONS(338),
    [anon_sym_indexof] = ACTIONS(338),
    [anon_sym_53] = ACTIONS(338),
    [anon_sym_assert] = ACTIONS(338),
    [anon_sym_54] = ACTIONS(338),
    [anon_sym_wait] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_break] = ACTIONS(338),
    [anon_sym_55] = ACTIONS(338),
    [anon_sym_recur] = ACTIONS(338),
    [anon_sym_56] = ACTIONS(338),
    [anon_sym_random] = ACTIONS(338),
    [anon_sym_57] = ACTIONS(338),
    [anon_sym_gen] = ACTIONS(338),
    [anon_sym_deal] = ACTIONS(338),
    [anon_sym_use] = ACTIONS(338),
    [anon_sym_tag] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [anon_sym_sig] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_dump] = ACTIONS(338),
    [anon_sym_reduce] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_scan] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_each] = ACTIONS(338),
    [anon_sym_58] = ACTIONS(338),
    [anon_sym_rows] = ACTIONS(338),
    [anon_sym_59] = ACTIONS(338),
    [anon_sym_repeat] = ACTIONS(338),
    [anon_sym_60] = ACTIONS(338),
    [anon_sym_dip] = ACTIONS(338),
    [anon_sym_di] = ACTIONS(340),
    [anon_sym_61] = ACTIONS(338),
    [anon_sym_gap] = ACTIONS(338),
    [anon_sym_ga] = ACTIONS(340),
    [anon_sym_62] = ACTIONS(338),
    [anon_sym_invert] = ACTIONS(338),
    [anon_sym_63] = ACTIONS(338),
    [anon_sym_spawn] = ACTIONS(338),
    [anon_sym_fold] = ACTIONS(338),
    [anon_sym_64] = ACTIONS(338),
    [anon_sym_distribute] = ACTIONS(338),
    [anon_sym_65] = ACTIONS(338),
    [anon_sym_table] = ACTIONS(338),
    [anon_sym_66] = ACTIONS(338),
    [anon_sym_cross] = ACTIONS(338),
    [anon_sym_67] = ACTIONS(338),
    [anon_sym_group] = ACTIONS(338),
    [anon_sym_68] = ACTIONS(338),
    [anon_sym_partition] = ACTIONS(338),
    [anon_sym_69] = ACTIONS(338),
    [anon_sym_both] = ACTIONS(338),
    [anon_sym_70] = ACTIONS(338),
    [anon_sym_bracket] = ACTIONS(338),
    [anon_sym_71] = ACTIONS(338),
    [anon_sym_fork] = ACTIONS(338),
    [anon_sym_72] = ACTIONS(338),
    [anon_sym_under] = ACTIONS(338),
    [anon_sym_73] = ACTIONS(338),
    [anon_sym_level] = ACTIONS(338),
    [anon_sym_74] = ACTIONS(338),
    [anon_sym_fill] = ACTIONS(338),
    [anon_sym_75] = ACTIONS(338),
    [anon_sym_bind] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_try] = ACTIONS(338),
    [anon_sym_76] = ACTIONS(338),
    [anon_sym_77] = ACTIONS(338),
    [anon_sym_78] = ACTIONS(338),
    [anon_sym_79] = ACTIONS(338),
    [anon_sym_80] = ACTIONS(338),
    [anon_sym_81] = ACTIONS(338),
    [anon_sym_82] = ACTIONS(338),
    [anon_sym_roll] = ACTIONS(338),
    [anon_sym_83] = ACTIONS(338),
    [anon_sym_unroll] = ACTIONS(338),
    [anon_sym_84] = ACTIONS(338),
    [anon_sym_restack] = ACTIONS(338),
    [anon_sym_85] = ACTIONS(338),
    [anon_sym_86] = ACTIONS(338),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [60] = {
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_] = ACTIONS(336),
    [aux_sym_number_token1] = ACTIONS(334),
    [aux_sym_character_token1] = ACTIONS(334),
    [sym_multiLineString] = ACTIONS(334),
    [sym_signature] = ACTIONS(334),
    [sym_identifier] = ACTIONS(336),
    [sym_identifier_deprecated] = ACTIONS(336),
    [sym_system] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(334),
    [sym_closeParen] = ACTIONS(334),
    [sym_openCurly] = ACTIONS(334),
    [sym_openBracket] = ACTIONS(334),
    [sym_underscore] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_identity] = ACTIONS(334),
    [anon_sym_id] = ACTIONS(336),
    [anon_sym_6] = ACTIONS(334),
    [anon_sym_not] = ACTIONS(334),
    [anon_sym_7] = ACTIONS(334),
    [anon_sym_sign] = ACTIONS(334),
    [anon_sym_8] = ACTIONS(334),
    [anon_sym_BQUOTE] = ACTIONS(334),
    [anon_sym_absolutevalue] = ACTIONS(334),
    [anon_sym_9] = ACTIONS(334),
    [anon_sym_sqrt] = ACTIONS(334),
    [anon_sym_10] = ACTIONS(334),
    [anon_sym_sine] = ACTIONS(334),
    [anon_sym_11] = ACTIONS(334),
    [anon_sym_floor] = ACTIONS(334),
    [anon_sym_12] = ACTIONS(334),
    [anon_sym_ceiling] = ACTIONS(334),
    [anon_sym_13] = ACTIONS(334),
    [anon_sym_round] = ACTIONS(334),
    [anon_sym_14] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_15] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(334),
    [anon_sym_16] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(334),
    [anon_sym_17] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_18] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_19] = ACTIONS(334),
    [anon_sym_modulus] = ACTIONS(334),
    [anon_sym_20] = ACTIONS(334),
    [anon_sym_power] = ACTIONS(334),
    [anon_sym_21] = ACTIONS(334),
    [anon_sym_logarithm] = ACTIONS(334),
    [anon_sym_22] = ACTIONS(334),
    [anon_sym_minimum] = ACTIONS(334),
    [anon_sym_23] = ACTIONS(334),
    [anon_sym_maximum] = ACTIONS(334),
    [anon_sym_24] = ACTIONS(334),
    [anon_sym_atangent] = ACTIONS(334),
    [anon_sym_25] = ACTIONS(334),
    [anon_sym_length] = ACTIONS(334),
    [anon_sym_26] = ACTIONS(334),
    [anon_sym_shape] = ACTIONS(334),
    [anon_sym_27] = ACTIONS(334),
    [anon_sym_range] = ACTIONS(334),
    [anon_sym_28] = ACTIONS(334),
    [anon_sym_first] = ACTIONS(334),
    [anon_sym_29] = ACTIONS(334),
    [anon_sym_reverse] = ACTIONS(334),
    [anon_sym_30] = ACTIONS(334),
    [anon_sym_deshape] = ACTIONS(334),
    [anon_sym_31] = ACTIONS(334),
    [anon_sym_bits] = ACTIONS(334),
    [anon_sym_32] = ACTIONS(334),
    [anon_sym_transpose] = ACTIONS(334),
    [anon_sym_33] = ACTIONS(334),
    [anon_sym_rise] = ACTIONS(334),
    [anon_sym_34] = ACTIONS(334),
    [anon_sym_fall] = ACTIONS(334),
    [anon_sym_35] = ACTIONS(334),
    [anon_sym_classify] = ACTIONS(334),
    [anon_sym_36] = ACTIONS(334),
    [anon_sym_deduplicate] = ACTIONS(334),
    [anon_sym_37] = ACTIONS(334),
    [anon_sym_box] = ACTIONS(334),
    [anon_sym_38] = ACTIONS(334),
    [anon_sym_unbox] = ACTIONS(334),
    [anon_sym_39] = ACTIONS(334),
    [anon_sym_match] = ACTIONS(334),
    [anon_sym_40] = ACTIONS(334),
    [anon_sym_couple] = ACTIONS(334),
    [anon_sym_41] = ACTIONS(334),
    [anon_sym_join] = ACTIONS(334),
    [anon_sym_42] = ACTIONS(334),
    [anon_sym_select] = ACTIONS(334),
    [anon_sym_43] = ACTIONS(334),
    [anon_sym_pick] = ACTIONS(334),
    [anon_sym_44] = ACTIONS(334),
    [anon_sym_reshape] = ACTIONS(334),
    [anon_sym_45] = ACTIONS(334),
    [anon_sym_take] = ACTIONS(334),
    [anon_sym_46] = ACTIONS(334),
    [anon_sym_drop] = ACTIONS(334),
    [anon_sym_47] = ACTIONS(334),
    [anon_sym_rotate] = ACTIONS(334),
    [anon_sym_48] = ACTIONS(334),
    [anon_sym_windows] = ACTIONS(334),
    [anon_sym_49] = ACTIONS(334),
    [anon_sym_keep] = ACTIONS(334),
    [anon_sym_50] = ACTIONS(334),
    [anon_sym_find] = ACTIONS(334),
    [anon_sym_51] = ACTIONS(334),
    [anon_sym_member] = ACTIONS(334),
    [anon_sym_52] = ACTIONS(334),
    [anon_sym_indexof] = ACTIONS(334),
    [anon_sym_53] = ACTIONS(334),
    [anon_sym_assert] = ACTIONS(334),
    [anon_sym_54] = ACTIONS(334),
    [anon_sym_wait] = ACTIONS(334),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym_break] = ACTIONS(334),
    [anon_sym_55] = ACTIONS(334),
    [anon_sym_recur] = ACTIONS(334),
    [anon_sym_56] = ACTIONS(334),
    [anon_sym_random] = ACTIONS(334),
    [anon_sym_57] = ACTIONS(334),
    [anon_sym_gen] = ACTIONS(334),
    [anon_sym_deal] = ACTIONS(334),
    [anon_sym_use] = ACTIONS(334),
    [anon_sym_tag] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_sig] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(334),
    [anon_sym_dump] = ACTIONS(334),
    [anon_sym_reduce] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_scan] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(334),
    [anon_sym_each] = ACTIONS(334),
    [anon_sym_58] = ACTIONS(334),
    [anon_sym_rows] = ACTIONS(334),
    [anon_sym_59] = ACTIONS(334),
    [anon_sym_repeat] = ACTIONS(334),
    [anon_sym_60] = ACTIONS(334),
    [anon_sym_dip] = ACTIONS(334),
    [anon_sym_di] = ACTIONS(336),
    [anon_sym_61] = ACTIONS(334),
    [anon_sym_gap] = ACTIONS(334),
    [anon_sym_ga] = ACTIONS(336),
    [anon_sym_62] = ACTIONS(334),
    [anon_sym_invert] = ACTIONS(334),
    [anon_sym_63] = ACTIONS(334),
    [anon_sym_spawn] = ACTIONS(334),
    [anon_sym_fold] = ACTIONS(334),
    [anon_sym_64] = ACTIONS(334),
    [anon_sym_distribute] = ACTIONS(334),
    [anon_sym_65] = ACTIONS(334),
    [anon_sym_table] = ACTIONS(334),
    [anon_sym_66] = ACTIONS(334),
    [anon_sym_cross] = ACTIONS(334),
    [anon_sym_67] = ACTIONS(334),
    [anon_sym_group] = ACTIONS(334),
    [anon_sym_68] = ACTIONS(334),
    [anon_sym_partition] = ACTIONS(334),
    [anon_sym_69] = ACTIONS(334),
    [anon_sym_both] = ACTIONS(334),
    [anon_sym_70] = ACTIONS(334),
    [anon_sym_bracket] = ACTIONS(334),
    [anon_sym_71] = ACTIONS(334),
    [anon_sym_fork] = ACTIONS(334),
    [anon_sym_72] = ACTIONS(334),
    [anon_sym_under] = ACTIONS(334),
    [anon_sym_73] = ACTIONS(334),
    [anon_sym_level] = ACTIONS(334),
    [anon_sym_74] = ACTIONS(334),
    [anon_sym_fill] = ACTIONS(334),
    [anon_sym_75] = ACTIONS(334),
    [anon_sym_bind] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_QMARK] = ACTIONS(334),
    [anon_sym_try] = ACTIONS(334),
    [anon_sym_76] = ACTIONS(334),
    [anon_sym_77] = ACTIONS(334),
    [anon_sym_78] = ACTIONS(334),
    [anon_sym_79] = ACTIONS(334),
    [anon_sym_80] = ACTIONS(334),
    [anon_sym_81] = ACTIONS(334),
    [anon_sym_82] = ACTIONS(334),
    [anon_sym_roll] = ACTIONS(334),
    [anon_sym_83] = ACTIONS(334),
    [anon_sym_unroll] = ACTIONS(334),
    [anon_sym_84] = ACTIONS(334),
    [anon_sym_restack] = ACTIONS(334),
    [anon_sym_85] = ACTIONS(334),
    [anon_sym_86] = ACTIONS(334),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [aux_sym_number_token1] = ACTIONS(181),
    [aux_sym_character_token1] = ACTIONS(181),
    [sym_multiLineString] = ACTIONS(181),
    [sym_signature] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_identifier_deprecated] = ACTIONS(183),
    [sym_system] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(181),
    [sym_closeParen] = ACTIONS(181),
    [sym_openCurly] = ACTIONS(181),
    [sym_openBracket] = ACTIONS(181),
    [sym_underscore] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_identity] = ACTIONS(181),
    [anon_sym_id] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_7] = ACTIONS(181),
    [anon_sym_sign] = ACTIONS(181),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_absolutevalue] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_sqrt] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(181),
    [anon_sym_sine] = ACTIONS(181),
    [anon_sym_11] = ACTIONS(181),
    [anon_sym_floor] = ACTIONS(181),
    [anon_sym_12] = ACTIONS(181),
    [anon_sym_ceiling] = ACTIONS(181),
    [anon_sym_13] = ACTIONS(181),
    [anon_sym_round] = ACTIONS(181),
    [anon_sym_14] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_15] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_16] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_17] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_18] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_19] = ACTIONS(181),
    [anon_sym_modulus] = ACTIONS(181),
    [anon_sym_20] = ACTIONS(181),
    [anon_sym_power] = ACTIONS(181),
    [anon_sym_21] = ACTIONS(181),
    [anon_sym_logarithm] = ACTIONS(181),
    [anon_sym_22] = ACTIONS(181),
    [anon_sym_minimum] = ACTIONS(181),
    [anon_sym_23] = ACTIONS(181),
    [anon_sym_maximum] = ACTIONS(181),
    [anon_sym_24] = ACTIONS(181),
    [anon_sym_atangent] = ACTIONS(181),
    [anon_sym_25] = ACTIONS(181),
    [anon_sym_length] = ACTIONS(181),
    [anon_sym_26] = ACTIONS(181),
    [anon_sym_shape] = ACTIONS(181),
    [anon_sym_27] = ACTIONS(181),
    [anon_sym_range] = ACTIONS(181),
    [anon_sym_28] = ACTIONS(181),
    [anon_sym_first] = ACTIONS(181),
    [anon_sym_29] = ACTIONS(181),
    [anon_sym_reverse] = ACTIONS(181),
    [anon_sym_30] = ACTIONS(181),
    [anon_sym_deshape] = ACTIONS(181),
    [anon_sym_31] = ACTIONS(181),
    [anon_sym_bits] = ACTIONS(181),
    [anon_sym_32] = ACTIONS(181),
    [anon_sym_transpose] = ACTIONS(181),
    [anon_sym_33] = ACTIONS(181),
    [anon_sym_rise] = ACTIONS(181),
    [anon_sym_34] = ACTIONS(181),
    [anon_sym_fall] = ACTIONS(181),
    [anon_sym_35] = ACTIONS(181),
    [anon_sym_classify] = ACTIONS(181),
    [anon_sym_36] = ACTIONS(181),
    [anon_sym_deduplicate] = ACTIONS(181),
    [anon_sym_37] = ACTIONS(181),
    [anon_sym_box] = ACTIONS(181),
    [anon_sym_38] = ACTIONS(181),
    [anon_sym_unbox] = ACTIONS(181),
    [anon_sym_39] = ACTIONS(181),
    [anon_sym_match] = ACTIONS(181),
    [anon_sym_40] = ACTIONS(181),
    [anon_sym_couple] = ACTIONS(181),
    [anon_sym_41] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_42] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_43] = ACTIONS(181),
    [anon_sym_pick] = ACTIONS(181),
    [anon_sym_44] = ACTIONS(181),
    [anon_sym_reshape] = ACTIONS(181),
    [anon_sym_45] = ACTIONS(181),
    [anon_sym_take] = ACTIONS(181),
    [anon_sym_46] = ACTIONS(181),
    [anon_sym_drop] = ACTIONS(181),
    [anon_sym_47] = ACTIONS(181),
    [anon_sym_rotate] = ACTIONS(181),
    [anon_sym_48] = ACTIONS(181),
    [anon_sym_windows] = ACTIONS(181),
    [anon_sym_49] = ACTIONS(181),
    [anon_sym_keep] = ACTIONS(181),
    [anon_sym_50] = ACTIONS(181),
    [anon_sym_find] = ACTIONS(181),
    [anon_sym_51] = ACTIONS(181),
    [anon_sym_member] = ACTIONS(181),
    [anon_sym_52] = ACTIONS(181),
    [anon_sym_indexof] = ACTIONS(181),
    [anon_sym_53] = ACTIONS(181),
    [anon_sym_assert] = ACTIONS(181),
    [anon_sym_54] = ACTIONS(181),
    [anon_sym_wait] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_break] = ACTIONS(181),
    [anon_sym_55] = ACTIONS(181),
    [anon_sym_recur] = ACTIONS(181),
    [anon_sym_56] = ACTIONS(181),
    [anon_sym_random] = ACTIONS(181),
    [anon_sym_57] = ACTIONS(181),
    [anon_sym_gen] = ACTIONS(181),
    [anon_sym_deal] = ACTIONS(181),
    [anon_sym_use] = ACTIONS(181),
    [anon_sym_tag] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_sig] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_dump] = ACTIONS(181),
    [anon_sym_reduce] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_scan] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_each] = ACTIONS(181),
    [anon_sym_58] = ACTIONS(181),
    [anon_sym_rows] = ACTIONS(181),
    [anon_sym_59] = ACTIONS(181),
    [anon_sym_repeat] = ACTIONS(181),
    [anon_sym_60] = ACTIONS(181),
    [anon_sym_dip] = ACTIONS(181),
    [anon_sym_di] = ACTIONS(183),
    [anon_sym_61] = ACTIONS(181),
    [anon_sym_gap] = ACTIONS(181),
    [anon_sym_ga] = ACTIONS(183),
    [anon_sym_62] = ACTIONS(181),
    [anon_sym_invert] = ACTIONS(181),
    [anon_sym_63] = ACTIONS(181),
    [anon_sym_spawn] = ACTIONS(181),
    [anon_sym_fold] = ACTIONS(181),
    [anon_sym_64] = ACTIONS(181),
    [anon_sym_distribute] = ACTIONS(181),
    [anon_sym_65] = ACTIONS(181),
    [anon_sym_table] = ACTIONS(181),
    [anon_sym_66] = ACTIONS(181),
    [anon_sym_cross] = ACTIONS(181),
    [anon_sym_67] = ACTIONS(181),
    [anon_sym_group] = ACTIONS(181),
    [anon_sym_68] = ACTIONS(181),
    [anon_sym_partition] = ACTIONS(181),
    [anon_sym_69] = ACTIONS(181),
    [anon_sym_both] = ACTIONS(181),
    [anon_sym_70] = ACTIONS(181),
    [anon_sym_bracket] = ACTIONS(181),
    [anon_sym_71] = ACTIONS(181),
    [anon_sym_fork] = ACTIONS(181),
    [anon_sym_72] = ACTIONS(181),
    [anon_sym_under] = ACTIONS(181),
    [anon_sym_73] = ACTIONS(181),
    [anon_sym_level] = ACTIONS(181),
    [anon_sym_74] = ACTIONS(181),
    [anon_sym_fill] = ACTIONS(181),
    [anon_sym_75] = ACTIONS(181),
    [anon_sym_bind] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_try] = ACTIONS(181),
    [anon_sym_76] = ACTIONS(181),
    [anon_sym_77] = ACTIONS(181),
    [anon_sym_78] = ACTIONS(181),
    [anon_sym_79] = ACTIONS(181),
    [anon_sym_80] = ACTIONS(181),
    [anon_sym_81] = ACTIONS(181),
    [anon_sym_82] = ACTIONS(181),
    [anon_sym_roll] = ACTIONS(181),
    [anon_sym_83] = ACTIONS(181),
    [anon_sym_unroll] = ACTIONS(181),
    [anon_sym_84] = ACTIONS(181),
    [anon_sym_restack] = ACTIONS(181),
    [anon_sym_85] = ACTIONS(181),
    [anon_sym_86] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [62] = {
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_] = ACTIONS(332),
    [aux_sym_number_token1] = ACTIONS(330),
    [aux_sym_character_token1] = ACTIONS(330),
    [sym_multiLineString] = ACTIONS(330),
    [sym_signature] = ACTIONS(330),
    [sym_identifier] = ACTIONS(332),
    [sym_identifier_deprecated] = ACTIONS(332),
    [sym_system] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(330),
    [sym_closeParen] = ACTIONS(330),
    [sym_openCurly] = ACTIONS(330),
    [sym_openBracket] = ACTIONS(330),
    [sym_underscore] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_identity] = ACTIONS(330),
    [anon_sym_id] = ACTIONS(332),
    [anon_sym_6] = ACTIONS(330),
    [anon_sym_not] = ACTIONS(330),
    [anon_sym_7] = ACTIONS(330),
    [anon_sym_sign] = ACTIONS(330),
    [anon_sym_8] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(330),
    [anon_sym_absolutevalue] = ACTIONS(330),
    [anon_sym_9] = ACTIONS(330),
    [anon_sym_sqrt] = ACTIONS(330),
    [anon_sym_10] = ACTIONS(330),
    [anon_sym_sine] = ACTIONS(330),
    [anon_sym_11] = ACTIONS(330),
    [anon_sym_floor] = ACTIONS(330),
    [anon_sym_12] = ACTIONS(330),
    [anon_sym_ceiling] = ACTIONS(330),
    [anon_sym_13] = ACTIONS(330),
    [anon_sym_round] = ACTIONS(330),
    [anon_sym_14] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(330),
    [anon_sym_15] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_16] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_17] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_18] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_19] = ACTIONS(330),
    [anon_sym_modulus] = ACTIONS(330),
    [anon_sym_20] = ACTIONS(330),
    [anon_sym_power] = ACTIONS(330),
    [anon_sym_21] = ACTIONS(330),
    [anon_sym_logarithm] = ACTIONS(330),
    [anon_sym_22] = ACTIONS(330),
    [anon_sym_minimum] = ACTIONS(330),
    [anon_sym_23] = ACTIONS(330),
    [anon_sym_maximum] = ACTIONS(330),
    [anon_sym_24] = ACTIONS(330),
    [anon_sym_atangent] = ACTIONS(330),
    [anon_sym_25] = ACTIONS(330),
    [anon_sym_length] = ACTIONS(330),
    [anon_sym_26] = ACTIONS(330),
    [anon_sym_shape] = ACTIONS(330),
    [anon_sym_27] = ACTIONS(330),
    [anon_sym_range] = ACTIONS(330),
    [anon_sym_28] = ACTIONS(330),
    [anon_sym_first] = ACTIONS(330),
    [anon_sym_29] = ACTIONS(330),
    [anon_sym_reverse] = ACTIONS(330),
    [anon_sym_30] = ACTIONS(330),
    [anon_sym_deshape] = ACTIONS(330),
    [anon_sym_31] = ACTIONS(330),
    [anon_sym_bits] = ACTIONS(330),
    [anon_sym_32] = ACTIONS(330),
    [anon_sym_transpose] = ACTIONS(330),
    [anon_sym_33] = ACTIONS(330),
    [anon_sym_rise] = ACTIONS(330),
    [anon_sym_34] = ACTIONS(330),
    [anon_sym_fall] = ACTIONS(330),
    [anon_sym_35] = ACTIONS(330),
    [anon_sym_classify] = ACTIONS(330),
    [anon_sym_36] = ACTIONS(330),
    [anon_sym_deduplicate] = ACTIONS(330),
    [anon_sym_37] = ACTIONS(330),
    [anon_sym_box] = ACTIONS(330),
    [anon_sym_38] = ACTIONS(330),
    [anon_sym_unbox] = ACTIONS(330),
    [anon_sym_39] = ACTIONS(330),
    [anon_sym_match] = ACTIONS(330),
    [anon_sym_40] = ACTIONS(330),
    [anon_sym_couple] = ACTIONS(330),
    [anon_sym_41] = ACTIONS(330),
    [anon_sym_join] = ACTIONS(330),
    [anon_sym_42] = ACTIONS(330),
    [anon_sym_select] = ACTIONS(330),
    [anon_sym_43] = ACTIONS(330),
    [anon_sym_pick] = ACTIONS(330),
    [anon_sym_44] = ACTIONS(330),
    [anon_sym_reshape] = ACTIONS(330),
    [anon_sym_45] = ACTIONS(330),
    [anon_sym_take] = ACTIONS(330),
    [anon_sym_46] = ACTIONS(330),
    [anon_sym_drop] = ACTIONS(330),
    [anon_sym_47] = ACTIONS(330),
    [anon_sym_rotate] = ACTIONS(330),
    [anon_sym_48] = ACTIONS(330),
    [anon_sym_windows] = ACTIONS(330),
    [anon_sym_49] = ACTIONS(330),
    [anon_sym_keep] = ACTIONS(330),
    [anon_sym_50] = ACTIONS(330),
    [anon_sym_find] = ACTIONS(330),
    [anon_sym_51] = ACTIONS(330),
    [anon_sym_member] = ACTIONS(330),
    [anon_sym_52] = ACTIONS(330),
    [anon_sym_indexof] = ACTIONS(330),
    [anon_sym_53] = ACTIONS(330),
    [anon_sym_assert] = ACTIONS(330),
    [anon_sym_54] = ACTIONS(330),
    [anon_sym_wait] = ACTIONS(330),
    [anon_sym_BANG] = ACTIONS(332),
    [anon_sym_break] = ACTIONS(330),
    [anon_sym_55] = ACTIONS(330),
    [anon_sym_recur] = ACTIONS(330),
    [anon_sym_56] = ACTIONS(330),
    [anon_sym_random] = ACTIONS(330),
    [anon_sym_57] = ACTIONS(330),
    [anon_sym_gen] = ACTIONS(330),
    [anon_sym_deal] = ACTIONS(330),
    [anon_sym_use] = ACTIONS(330),
    [anon_sym_tag] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_sig] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(330),
    [anon_sym_dump] = ACTIONS(330),
    [anon_sym_reduce] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_scan] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_each] = ACTIONS(330),
    [anon_sym_58] = ACTIONS(330),
    [anon_sym_rows] = ACTIONS(330),
    [anon_sym_59] = ACTIONS(330),
    [anon_sym_repeat] = ACTIONS(330),
    [anon_sym_60] = ACTIONS(330),
    [anon_sym_dip] = ACTIONS(330),
    [anon_sym_di] = ACTIONS(332),
    [anon_sym_61] = ACTIONS(330),
    [anon_sym_gap] = ACTIONS(330),
    [anon_sym_ga] = ACTIONS(332),
    [anon_sym_62] = ACTIONS(330),
    [anon_sym_invert] = ACTIONS(330),
    [anon_sym_63] = ACTIONS(330),
    [anon_sym_spawn] = ACTIONS(330),
    [anon_sym_fold] = ACTIONS(330),
    [anon_sym_64] = ACTIONS(330),
    [anon_sym_distribute] = ACTIONS(330),
    [anon_sym_65] = ACTIONS(330),
    [anon_sym_table] = ACTIONS(330),
    [anon_sym_66] = ACTIONS(330),
    [anon_sym_cross] = ACTIONS(330),
    [anon_sym_67] = ACTIONS(330),
    [anon_sym_group] = ACTIONS(330),
    [anon_sym_68] = ACTIONS(330),
    [anon_sym_partition] = ACTIONS(330),
    [anon_sym_69] = ACTIONS(330),
    [anon_sym_both] = ACTIONS(330),
    [anon_sym_70] = ACTIONS(330),
    [anon_sym_bracket] = ACTIONS(330),
    [anon_sym_71] = ACTIONS(330),
    [anon_sym_fork] = ACTIONS(330),
    [anon_sym_72] = ACTIONS(330),
    [anon_sym_under] = ACTIONS(330),
    [anon_sym_73] = ACTIONS(330),
    [anon_sym_level] = ACTIONS(330),
    [anon_sym_74] = ACTIONS(330),
    [anon_sym_fill] = ACTIONS(330),
    [anon_sym_75] = ACTIONS(330),
    [anon_sym_bind] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_try] = ACTIONS(330),
    [anon_sym_76] = ACTIONS(330),
    [anon_sym_77] = ACTIONS(330),
    [anon_sym_78] = ACTIONS(330),
    [anon_sym_79] = ACTIONS(330),
    [anon_sym_80] = ACTIONS(330),
    [anon_sym_81] = ACTIONS(330),
    [anon_sym_82] = ACTIONS(330),
    [anon_sym_roll] = ACTIONS(330),
    [anon_sym_83] = ACTIONS(330),
    [anon_sym_unroll] = ACTIONS(330),
    [anon_sym_84] = ACTIONS(330),
    [anon_sym_restack] = ACTIONS(330),
    [anon_sym_85] = ACTIONS(330),
    [anon_sym_86] = ACTIONS(330),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [63] = {
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_] = ACTIONS(310),
    [aux_sym_number_token1] = ACTIONS(308),
    [aux_sym_character_token1] = ACTIONS(308),
    [sym_multiLineString] = ACTIONS(308),
    [sym_signature] = ACTIONS(308),
    [sym_identifier] = ACTIONS(310),
    [sym_identifier_deprecated] = ACTIONS(310),
    [sym_system] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(308),
    [sym_closeParen] = ACTIONS(308),
    [sym_openCurly] = ACTIONS(308),
    [sym_openBracket] = ACTIONS(308),
    [sym_underscore] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_identity] = ACTIONS(308),
    [anon_sym_id] = ACTIONS(310),
    [anon_sym_6] = ACTIONS(308),
    [anon_sym_not] = ACTIONS(308),
    [anon_sym_7] = ACTIONS(308),
    [anon_sym_sign] = ACTIONS(308),
    [anon_sym_8] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [anon_sym_absolutevalue] = ACTIONS(308),
    [anon_sym_9] = ACTIONS(308),
    [anon_sym_sqrt] = ACTIONS(308),
    [anon_sym_10] = ACTIONS(308),
    [anon_sym_sine] = ACTIONS(308),
    [anon_sym_11] = ACTIONS(308),
    [anon_sym_floor] = ACTIONS(308),
    [anon_sym_12] = ACTIONS(308),
    [anon_sym_ceiling] = ACTIONS(308),
    [anon_sym_13] = ACTIONS(308),
    [anon_sym_round] = ACTIONS(308),
    [anon_sym_14] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_15] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_16] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_17] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_18] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_19] = ACTIONS(308),
    [anon_sym_modulus] = ACTIONS(308),
    [anon_sym_20] = ACTIONS(308),
    [anon_sym_power] = ACTIONS(308),
    [anon_sym_21] = ACTIONS(308),
    [anon_sym_logarithm] = ACTIONS(308),
    [anon_sym_22] = ACTIONS(308),
    [anon_sym_minimum] = ACTIONS(308),
    [anon_sym_23] = ACTIONS(308),
    [anon_sym_maximum] = ACTIONS(308),
    [anon_sym_24] = ACTIONS(308),
    [anon_sym_atangent] = ACTIONS(308),
    [anon_sym_25] = ACTIONS(308),
    [anon_sym_length] = ACTIONS(308),
    [anon_sym_26] = ACTIONS(308),
    [anon_sym_shape] = ACTIONS(308),
    [anon_sym_27] = ACTIONS(308),
    [anon_sym_range] = ACTIONS(308),
    [anon_sym_28] = ACTIONS(308),
    [anon_sym_first] = ACTIONS(308),
    [anon_sym_29] = ACTIONS(308),
    [anon_sym_reverse] = ACTIONS(308),
    [anon_sym_30] = ACTIONS(308),
    [anon_sym_deshape] = ACTIONS(308),
    [anon_sym_31] = ACTIONS(308),
    [anon_sym_bits] = ACTIONS(308),
    [anon_sym_32] = ACTIONS(308),
    [anon_sym_transpose] = ACTIONS(308),
    [anon_sym_33] = ACTIONS(308),
    [anon_sym_rise] = ACTIONS(308),
    [anon_sym_34] = ACTIONS(308),
    [anon_sym_fall] = ACTIONS(308),
    [anon_sym_35] = ACTIONS(308),
    [anon_sym_classify] = ACTIONS(308),
    [anon_sym_36] = ACTIONS(308),
    [anon_sym_deduplicate] = ACTIONS(308),
    [anon_sym_37] = ACTIONS(308),
    [anon_sym_box] = ACTIONS(308),
    [anon_sym_38] = ACTIONS(308),
    [anon_sym_unbox] = ACTIONS(308),
    [anon_sym_39] = ACTIONS(308),
    [anon_sym_match] = ACTIONS(308),
    [anon_sym_40] = ACTIONS(308),
    [anon_sym_couple] = ACTIONS(308),
    [anon_sym_41] = ACTIONS(308),
    [anon_sym_join] = ACTIONS(308),
    [anon_sym_42] = ACTIONS(308),
    [anon_sym_select] = ACTIONS(308),
    [anon_sym_43] = ACTIONS(308),
    [anon_sym_pick] = ACTIONS(308),
    [anon_sym_44] = ACTIONS(308),
    [anon_sym_reshape] = ACTIONS(308),
    [anon_sym_45] = ACTIONS(308),
    [anon_sym_take] = ACTIONS(308),
    [anon_sym_46] = ACTIONS(308),
    [anon_sym_drop] = ACTIONS(308),
    [anon_sym_47] = ACTIONS(308),
    [anon_sym_rotate] = ACTIONS(308),
    [anon_sym_48] = ACTIONS(308),
    [anon_sym_windows] = ACTIONS(308),
    [anon_sym_49] = ACTIONS(308),
    [anon_sym_keep] = ACTIONS(308),
    [anon_sym_50] = ACTIONS(308),
    [anon_sym_find] = ACTIONS(308),
    [anon_sym_51] = ACTIONS(308),
    [anon_sym_member] = ACTIONS(308),
    [anon_sym_52] = ACTIONS(308),
    [anon_sym_indexof] = ACTIONS(308),
    [anon_sym_53] = ACTIONS(308),
    [anon_sym_assert] = ACTIONS(308),
    [anon_sym_54] = ACTIONS(308),
    [anon_sym_wait] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_break] = ACTIONS(308),
    [anon_sym_55] = ACTIONS(308),
    [anon_sym_recur] = ACTIONS(308),
    [anon_sym_56] = ACTIONS(308),
    [anon_sym_random] = ACTIONS(308),
    [anon_sym_57] = ACTIONS(308),
    [anon_sym_gen] = ACTIONS(308),
    [anon_sym_deal] = ACTIONS(308),
    [anon_sym_use] = ACTIONS(308),
    [anon_sym_tag] = ACTIONS(308),
    [anon_sym_type] = ACTIONS(308),
    [anon_sym_sig] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_dump] = ACTIONS(308),
    [anon_sym_reduce] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_scan] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_each] = ACTIONS(308),
    [anon_sym_58] = ACTIONS(308),
    [anon_sym_rows] = ACTIONS(308),
    [anon_sym_59] = ACTIONS(308),
    [anon_sym_repeat] = ACTIONS(308),
    [anon_sym_60] = ACTIONS(308),
    [anon_sym_dip] = ACTIONS(308),
    [anon_sym_di] = ACTIONS(310),
    [anon_sym_61] = ACTIONS(308),
    [anon_sym_gap] = ACTIONS(308),
    [anon_sym_ga] = ACTIONS(310),
    [anon_sym_62] = ACTIONS(308),
    [anon_sym_invert] = ACTIONS(308),
    [anon_sym_63] = ACTIONS(308),
    [anon_sym_spawn] = ACTIONS(308),
    [anon_sym_fold] = ACTIONS(308),
    [anon_sym_64] = ACTIONS(308),
    [anon_sym_distribute] = ACTIONS(308),
    [anon_sym_65] = ACTIONS(308),
    [anon_sym_table] = ACTIONS(308),
    [anon_sym_66] = ACTIONS(308),
    [anon_sym_cross] = ACTIONS(308),
    [anon_sym_67] = ACTIONS(308),
    [anon_sym_group] = ACTIONS(308),
    [anon_sym_68] = ACTIONS(308),
    [anon_sym_partition] = ACTIONS(308),
    [anon_sym_69] = ACTIONS(308),
    [anon_sym_both] = ACTIONS(308),
    [anon_sym_70] = ACTIONS(308),
    [anon_sym_bracket] = ACTIONS(308),
    [anon_sym_71] = ACTIONS(308),
    [anon_sym_fork] = ACTIONS(308),
    [anon_sym_72] = ACTIONS(308),
    [anon_sym_under] = ACTIONS(308),
    [anon_sym_73] = ACTIONS(308),
    [anon_sym_level] = ACTIONS(308),
    [anon_sym_74] = ACTIONS(308),
    [anon_sym_fill] = ACTIONS(308),
    [anon_sym_75] = ACTIONS(308),
    [anon_sym_bind] = ACTIONS(308),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_try] = ACTIONS(308),
    [anon_sym_76] = ACTIONS(308),
    [anon_sym_77] = ACTIONS(308),
    [anon_sym_78] = ACTIONS(308),
    [anon_sym_79] = ACTIONS(308),
    [anon_sym_80] = ACTIONS(308),
    [anon_sym_81] = ACTIONS(308),
    [anon_sym_82] = ACTIONS(308),
    [anon_sym_roll] = ACTIONS(308),
    [anon_sym_83] = ACTIONS(308),
    [anon_sym_unroll] = ACTIONS(308),
    [anon_sym_84] = ACTIONS(308),
    [anon_sym_restack] = ACTIONS(308),
    [anon_sym_85] = ACTIONS(308),
    [anon_sym_86] = ACTIONS(308),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [64] = {
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_] = ACTIONS(328),
    [aux_sym_number_token1] = ACTIONS(326),
    [aux_sym_character_token1] = ACTIONS(326),
    [sym_multiLineString] = ACTIONS(326),
    [sym_signature] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
    [sym_identifier_deprecated] = ACTIONS(328),
    [sym_system] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(326),
    [sym_closeParen] = ACTIONS(326),
    [sym_openCurly] = ACTIONS(326),
    [sym_openBracket] = ACTIONS(326),
    [sym_underscore] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_identity] = ACTIONS(326),
    [anon_sym_id] = ACTIONS(328),
    [anon_sym_6] = ACTIONS(326),
    [anon_sym_not] = ACTIONS(326),
    [anon_sym_7] = ACTIONS(326),
    [anon_sym_sign] = ACTIONS(326),
    [anon_sym_8] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_absolutevalue] = ACTIONS(326),
    [anon_sym_9] = ACTIONS(326),
    [anon_sym_sqrt] = ACTIONS(326),
    [anon_sym_10] = ACTIONS(326),
    [anon_sym_sine] = ACTIONS(326),
    [anon_sym_11] = ACTIONS(326),
    [anon_sym_floor] = ACTIONS(326),
    [anon_sym_12] = ACTIONS(326),
    [anon_sym_ceiling] = ACTIONS(326),
    [anon_sym_13] = ACTIONS(326),
    [anon_sym_round] = ACTIONS(326),
    [anon_sym_14] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_15] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [anon_sym_16] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_17] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_18] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_19] = ACTIONS(326),
    [anon_sym_modulus] = ACTIONS(326),
    [anon_sym_20] = ACTIONS(326),
    [anon_sym_power] = ACTIONS(326),
    [anon_sym_21] = ACTIONS(326),
    [anon_sym_logarithm] = ACTIONS(326),
    [anon_sym_22] = ACTIONS(326),
    [anon_sym_minimum] = ACTIONS(326),
    [anon_sym_23] = ACTIONS(326),
    [anon_sym_maximum] = ACTIONS(326),
    [anon_sym_24] = ACTIONS(326),
    [anon_sym_atangent] = ACTIONS(326),
    [anon_sym_25] = ACTIONS(326),
    [anon_sym_length] = ACTIONS(326),
    [anon_sym_26] = ACTIONS(326),
    [anon_sym_shape] = ACTIONS(326),
    [anon_sym_27] = ACTIONS(326),
    [anon_sym_range] = ACTIONS(326),
    [anon_sym_28] = ACTIONS(326),
    [anon_sym_first] = ACTIONS(326),
    [anon_sym_29] = ACTIONS(326),
    [anon_sym_reverse] = ACTIONS(326),
    [anon_sym_30] = ACTIONS(326),
    [anon_sym_deshape] = ACTIONS(326),
    [anon_sym_31] = ACTIONS(326),
    [anon_sym_bits] = ACTIONS(326),
    [anon_sym_32] = ACTIONS(326),
    [anon_sym_transpose] = ACTIONS(326),
    [anon_sym_33] = ACTIONS(326),
    [anon_sym_rise] = ACTIONS(326),
    [anon_sym_34] = ACTIONS(326),
    [anon_sym_fall] = ACTIONS(326),
    [anon_sym_35] = ACTIONS(326),
    [anon_sym_classify] = ACTIONS(326),
    [anon_sym_36] = ACTIONS(326),
    [anon_sym_deduplicate] = ACTIONS(326),
    [anon_sym_37] = ACTIONS(326),
    [anon_sym_box] = ACTIONS(326),
    [anon_sym_38] = ACTIONS(326),
    [anon_sym_unbox] = ACTIONS(326),
    [anon_sym_39] = ACTIONS(326),
    [anon_sym_match] = ACTIONS(326),
    [anon_sym_40] = ACTIONS(326),
    [anon_sym_couple] = ACTIONS(326),
    [anon_sym_41] = ACTIONS(326),
    [anon_sym_join] = ACTIONS(326),
    [anon_sym_42] = ACTIONS(326),
    [anon_sym_select] = ACTIONS(326),
    [anon_sym_43] = ACTIONS(326),
    [anon_sym_pick] = ACTIONS(326),
    [anon_sym_44] = ACTIONS(326),
    [anon_sym_reshape] = ACTIONS(326),
    [anon_sym_45] = ACTIONS(326),
    [anon_sym_take] = ACTIONS(326),
    [anon_sym_46] = ACTIONS(326),
    [anon_sym_drop] = ACTIONS(326),
    [anon_sym_47] = ACTIONS(326),
    [anon_sym_rotate] = ACTIONS(326),
    [anon_sym_48] = ACTIONS(326),
    [anon_sym_windows] = ACTIONS(326),
    [anon_sym_49] = ACTIONS(326),
    [anon_sym_keep] = ACTIONS(326),
    [anon_sym_50] = ACTIONS(326),
    [anon_sym_find] = ACTIONS(326),
    [anon_sym_51] = ACTIONS(326),
    [anon_sym_member] = ACTIONS(326),
    [anon_sym_52] = ACTIONS(326),
    [anon_sym_indexof] = ACTIONS(326),
    [anon_sym_53] = ACTIONS(326),
    [anon_sym_assert] = ACTIONS(326),
    [anon_sym_54] = ACTIONS(326),
    [anon_sym_wait] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_break] = ACTIONS(326),
    [anon_sym_55] = ACTIONS(326),
    [anon_sym_recur] = ACTIONS(326),
    [anon_sym_56] = ACTIONS(326),
    [anon_sym_random] = ACTIONS(326),
    [anon_sym_57] = ACTIONS(326),
    [anon_sym_gen] = ACTIONS(326),
    [anon_sym_deal] = ACTIONS(326),
    [anon_sym_use] = ACTIONS(326),
    [anon_sym_tag] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [anon_sym_sig] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_dump] = ACTIONS(326),
    [anon_sym_reduce] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_scan] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_each] = ACTIONS(326),
    [anon_sym_58] = ACTIONS(326),
    [anon_sym_rows] = ACTIONS(326),
    [anon_sym_59] = ACTIONS(326),
    [anon_sym_repeat] = ACTIONS(326),
    [anon_sym_60] = ACTIONS(326),
    [anon_sym_dip] = ACTIONS(326),
    [anon_sym_di] = ACTIONS(328),
    [anon_sym_61] = ACTIONS(326),
    [anon_sym_gap] = ACTIONS(326),
    [anon_sym_ga] = ACTIONS(328),
    [anon_sym_62] = ACTIONS(326),
    [anon_sym_invert] = ACTIONS(326),
    [anon_sym_63] = ACTIONS(326),
    [anon_sym_spawn] = ACTIONS(326),
    [anon_sym_fold] = ACTIONS(326),
    [anon_sym_64] = ACTIONS(326),
    [anon_sym_distribute] = ACTIONS(326),
    [anon_sym_65] = ACTIONS(326),
    [anon_sym_table] = ACTIONS(326),
    [anon_sym_66] = ACTIONS(326),
    [anon_sym_cross] = ACTIONS(326),
    [anon_sym_67] = ACTIONS(326),
    [anon_sym_group] = ACTIONS(326),
    [anon_sym_68] = ACTIONS(326),
    [anon_sym_partition] = ACTIONS(326),
    [anon_sym_69] = ACTIONS(326),
    [anon_sym_both] = ACTIONS(326),
    [anon_sym_70] = ACTIONS(326),
    [anon_sym_bracket] = ACTIONS(326),
    [anon_sym_71] = ACTIONS(326),
    [anon_sym_fork] = ACTIONS(326),
    [anon_sym_72] = ACTIONS(326),
    [anon_sym_under] = ACTIONS(326),
    [anon_sym_73] = ACTIONS(326),
    [anon_sym_level] = ACTIONS(326),
    [anon_sym_74] = ACTIONS(326),
    [anon_sym_fill] = ACTIONS(326),
    [anon_sym_75] = ACTIONS(326),
    [anon_sym_bind] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_try] = ACTIONS(326),
    [anon_sym_76] = ACTIONS(326),
    [anon_sym_77] = ACTIONS(326),
    [anon_sym_78] = ACTIONS(326),
    [anon_sym_79] = ACTIONS(326),
    [anon_sym_80] = ACTIONS(326),
    [anon_sym_81] = ACTIONS(326),
    [anon_sym_82] = ACTIONS(326),
    [anon_sym_roll] = ACTIONS(326),
    [anon_sym_83] = ACTIONS(326),
    [anon_sym_unroll] = ACTIONS(326),
    [anon_sym_84] = ACTIONS(326),
    [anon_sym_restack] = ACTIONS(326),
    [anon_sym_85] = ACTIONS(326),
    [anon_sym_86] = ACTIONS(326),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [65] = {
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_] = ACTIONS(346),
    [aux_sym_number_token1] = ACTIONS(222),
    [aux_sym_character_token1] = ACTIONS(222),
    [sym_multiLineString] = ACTIONS(222),
    [sym_signature] = ACTIONS(222),
    [sym_identifier] = ACTIONS(346),
    [sym_identifier_deprecated] = ACTIONS(346),
    [sym_system] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(222),
    [sym_openCurly] = ACTIONS(222),
    [sym_openBracket] = ACTIONS(222),
    [sym_closeBracket] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_identity] = ACTIONS(222),
    [anon_sym_id] = ACTIONS(346),
    [anon_sym_6] = ACTIONS(222),
    [anon_sym_not] = ACTIONS(222),
    [anon_sym_7] = ACTIONS(222),
    [anon_sym_sign] = ACTIONS(222),
    [anon_sym_8] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_absolutevalue] = ACTIONS(222),
    [anon_sym_9] = ACTIONS(222),
    [anon_sym_sqrt] = ACTIONS(222),
    [anon_sym_10] = ACTIONS(222),
    [anon_sym_sine] = ACTIONS(222),
    [anon_sym_11] = ACTIONS(222),
    [anon_sym_floor] = ACTIONS(222),
    [anon_sym_12] = ACTIONS(222),
    [anon_sym_ceiling] = ACTIONS(222),
    [anon_sym_13] = ACTIONS(222),
    [anon_sym_round] = ACTIONS(222),
    [anon_sym_14] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(222),
    [anon_sym_15] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [anon_sym_16] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [anon_sym_17] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_18] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_19] = ACTIONS(222),
    [anon_sym_modulus] = ACTIONS(222),
    [anon_sym_20] = ACTIONS(222),
    [anon_sym_power] = ACTIONS(222),
    [anon_sym_21] = ACTIONS(222),
    [anon_sym_logarithm] = ACTIONS(222),
    [anon_sym_22] = ACTIONS(222),
    [anon_sym_minimum] = ACTIONS(222),
    [anon_sym_23] = ACTIONS(222),
    [anon_sym_maximum] = ACTIONS(222),
    [anon_sym_24] = ACTIONS(222),
    [anon_sym_atangent] = ACTIONS(222),
    [anon_sym_25] = ACTIONS(222),
    [anon_sym_length] = ACTIONS(222),
    [anon_sym_26] = ACTIONS(222),
    [anon_sym_shape] = ACTIONS(222),
    [anon_sym_27] = ACTIONS(222),
    [anon_sym_range] = ACTIONS(222),
    [anon_sym_28] = ACTIONS(222),
    [anon_sym_first] = ACTIONS(222),
    [anon_sym_29] = ACTIONS(222),
    [anon_sym_reverse] = ACTIONS(222),
    [anon_sym_30] = ACTIONS(222),
    [anon_sym_deshape] = ACTIONS(222),
    [anon_sym_31] = ACTIONS(222),
    [anon_sym_bits] = ACTIONS(222),
    [anon_sym_32] = ACTIONS(222),
    [anon_sym_transpose] = ACTIONS(222),
    [anon_sym_33] = ACTIONS(222),
    [anon_sym_rise] = ACTIONS(222),
    [anon_sym_34] = ACTIONS(222),
    [anon_sym_fall] = ACTIONS(222),
    [anon_sym_35] = ACTIONS(222),
    [anon_sym_classify] = ACTIONS(222),
    [anon_sym_36] = ACTIONS(222),
    [anon_sym_deduplicate] = ACTIONS(222),
    [anon_sym_37] = ACTIONS(222),
    [anon_sym_box] = ACTIONS(222),
    [anon_sym_38] = ACTIONS(222),
    [anon_sym_unbox] = ACTIONS(222),
    [anon_sym_39] = ACTIONS(222),
    [anon_sym_match] = ACTIONS(222),
    [anon_sym_40] = ACTIONS(222),
    [anon_sym_couple] = ACTIONS(222),
    [anon_sym_41] = ACTIONS(222),
    [anon_sym_join] = ACTIONS(222),
    [anon_sym_42] = ACTIONS(222),
    [anon_sym_select] = ACTIONS(222),
    [anon_sym_43] = ACTIONS(222),
    [anon_sym_pick] = ACTIONS(222),
    [anon_sym_44] = ACTIONS(222),
    [anon_sym_reshape] = ACTIONS(222),
    [anon_sym_45] = ACTIONS(222),
    [anon_sym_take] = ACTIONS(222),
    [anon_sym_46] = ACTIONS(222),
    [anon_sym_drop] = ACTIONS(222),
    [anon_sym_47] = ACTIONS(222),
    [anon_sym_rotate] = ACTIONS(222),
    [anon_sym_48] = ACTIONS(222),
    [anon_sym_windows] = ACTIONS(222),
    [anon_sym_49] = ACTIONS(222),
    [anon_sym_keep] = ACTIONS(222),
    [anon_sym_50] = ACTIONS(222),
    [anon_sym_find] = ACTIONS(222),
    [anon_sym_51] = ACTIONS(222),
    [anon_sym_member] = ACTIONS(222),
    [anon_sym_52] = ACTIONS(222),
    [anon_sym_indexof] = ACTIONS(222),
    [anon_sym_53] = ACTIONS(222),
    [anon_sym_assert] = ACTIONS(222),
    [anon_sym_54] = ACTIONS(222),
    [anon_sym_wait] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_break] = ACTIONS(222),
    [anon_sym_55] = ACTIONS(222),
    [anon_sym_recur] = ACTIONS(222),
    [anon_sym_56] = ACTIONS(222),
    [anon_sym_random] = ACTIONS(222),
    [anon_sym_57] = ACTIONS(222),
    [anon_sym_gen] = ACTIONS(222),
    [anon_sym_deal] = ACTIONS(222),
    [anon_sym_use] = ACTIONS(222),
    [anon_sym_tag] = ACTIONS(222),
    [anon_sym_type] = ACTIONS(222),
    [anon_sym_sig] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_dump] = ACTIONS(222),
    [anon_sym_reduce] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_scan] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_each] = ACTIONS(222),
    [anon_sym_58] = ACTIONS(222),
    [anon_sym_rows] = ACTIONS(222),
    [anon_sym_59] = ACTIONS(222),
    [anon_sym_repeat] = ACTIONS(222),
    [anon_sym_60] = ACTIONS(222),
    [anon_sym_dip] = ACTIONS(222),
    [anon_sym_di] = ACTIONS(346),
    [anon_sym_61] = ACTIONS(222),
    [anon_sym_gap] = ACTIONS(222),
    [anon_sym_ga] = ACTIONS(346),
    [anon_sym_62] = ACTIONS(222),
    [anon_sym_invert] = ACTIONS(222),
    [anon_sym_63] = ACTIONS(222),
    [anon_sym_spawn] = ACTIONS(222),
    [anon_sym_fold] = ACTIONS(222),
    [anon_sym_64] = ACTIONS(222),
    [anon_sym_distribute] = ACTIONS(222),
    [anon_sym_65] = ACTIONS(222),
    [anon_sym_table] = ACTIONS(222),
    [anon_sym_66] = ACTIONS(222),
    [anon_sym_cross] = ACTIONS(222),
    [anon_sym_67] = ACTIONS(222),
    [anon_sym_group] = ACTIONS(222),
    [anon_sym_68] = ACTIONS(222),
    [anon_sym_partition] = ACTIONS(222),
    [anon_sym_69] = ACTIONS(222),
    [anon_sym_both] = ACTIONS(222),
    [anon_sym_70] = ACTIONS(222),
    [anon_sym_bracket] = ACTIONS(222),
    [anon_sym_71] = ACTIONS(222),
    [anon_sym_fork] = ACTIONS(222),
    [anon_sym_72] = ACTIONS(222),
    [anon_sym_under] = ACTIONS(222),
    [anon_sym_73] = ACTIONS(222),
    [anon_sym_level] = ACTIONS(222),
    [anon_sym_74] = ACTIONS(222),
    [anon_sym_fill] = ACTIONS(222),
    [anon_sym_75] = ACTIONS(222),
    [anon_sym_bind] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_try] = ACTIONS(222),
    [anon_sym_76] = ACTIONS(222),
    [anon_sym_77] = ACTIONS(222),
    [anon_sym_78] = ACTIONS(222),
    [anon_sym_79] = ACTIONS(222),
    [anon_sym_80] = ACTIONS(222),
    [anon_sym_81] = ACTIONS(222),
    [anon_sym_82] = ACTIONS(222),
    [anon_sym_roll] = ACTIONS(222),
    [anon_sym_83] = ACTIONS(222),
    [anon_sym_unroll] = ACTIONS(222),
    [anon_sym_84] = ACTIONS(222),
    [anon_sym_restack] = ACTIONS(222),
    [anon_sym_85] = ACTIONS(222),
    [anon_sym_86] = ACTIONS(222),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [66] = {
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_] = ACTIONS(346),
    [aux_sym_number_token1] = ACTIONS(222),
    [aux_sym_character_token1] = ACTIONS(222),
    [sym_multiLineString] = ACTIONS(222),
    [sym_signature] = ACTIONS(222),
    [sym_identifier] = ACTIONS(346),
    [sym_identifier_deprecated] = ACTIONS(346),
    [sym_system] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(222),
    [sym_openCurly] = ACTIONS(222),
    [sym_closeCurly] = ACTIONS(222),
    [sym_openBracket] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_identity] = ACTIONS(222),
    [anon_sym_id] = ACTIONS(346),
    [anon_sym_6] = ACTIONS(222),
    [anon_sym_not] = ACTIONS(222),
    [anon_sym_7] = ACTIONS(222),
    [anon_sym_sign] = ACTIONS(222),
    [anon_sym_8] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_absolutevalue] = ACTIONS(222),
    [anon_sym_9] = ACTIONS(222),
    [anon_sym_sqrt] = ACTIONS(222),
    [anon_sym_10] = ACTIONS(222),
    [anon_sym_sine] = ACTIONS(222),
    [anon_sym_11] = ACTIONS(222),
    [anon_sym_floor] = ACTIONS(222),
    [anon_sym_12] = ACTIONS(222),
    [anon_sym_ceiling] = ACTIONS(222),
    [anon_sym_13] = ACTIONS(222),
    [anon_sym_round] = ACTIONS(222),
    [anon_sym_14] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(222),
    [anon_sym_15] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [anon_sym_16] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [anon_sym_17] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_18] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_19] = ACTIONS(222),
    [anon_sym_modulus] = ACTIONS(222),
    [anon_sym_20] = ACTIONS(222),
    [anon_sym_power] = ACTIONS(222),
    [anon_sym_21] = ACTIONS(222),
    [anon_sym_logarithm] = ACTIONS(222),
    [anon_sym_22] = ACTIONS(222),
    [anon_sym_minimum] = ACTIONS(222),
    [anon_sym_23] = ACTIONS(222),
    [anon_sym_maximum] = ACTIONS(222),
    [anon_sym_24] = ACTIONS(222),
    [anon_sym_atangent] = ACTIONS(222),
    [anon_sym_25] = ACTIONS(222),
    [anon_sym_length] = ACTIONS(222),
    [anon_sym_26] = ACTIONS(222),
    [anon_sym_shape] = ACTIONS(222),
    [anon_sym_27] = ACTIONS(222),
    [anon_sym_range] = ACTIONS(222),
    [anon_sym_28] = ACTIONS(222),
    [anon_sym_first] = ACTIONS(222),
    [anon_sym_29] = ACTIONS(222),
    [anon_sym_reverse] = ACTIONS(222),
    [anon_sym_30] = ACTIONS(222),
    [anon_sym_deshape] = ACTIONS(222),
    [anon_sym_31] = ACTIONS(222),
    [anon_sym_bits] = ACTIONS(222),
    [anon_sym_32] = ACTIONS(222),
    [anon_sym_transpose] = ACTIONS(222),
    [anon_sym_33] = ACTIONS(222),
    [anon_sym_rise] = ACTIONS(222),
    [anon_sym_34] = ACTIONS(222),
    [anon_sym_fall] = ACTIONS(222),
    [anon_sym_35] = ACTIONS(222),
    [anon_sym_classify] = ACTIONS(222),
    [anon_sym_36] = ACTIONS(222),
    [anon_sym_deduplicate] = ACTIONS(222),
    [anon_sym_37] = ACTIONS(222),
    [anon_sym_box] = ACTIONS(222),
    [anon_sym_38] = ACTIONS(222),
    [anon_sym_unbox] = ACTIONS(222),
    [anon_sym_39] = ACTIONS(222),
    [anon_sym_match] = ACTIONS(222),
    [anon_sym_40] = ACTIONS(222),
    [anon_sym_couple] = ACTIONS(222),
    [anon_sym_41] = ACTIONS(222),
    [anon_sym_join] = ACTIONS(222),
    [anon_sym_42] = ACTIONS(222),
    [anon_sym_select] = ACTIONS(222),
    [anon_sym_43] = ACTIONS(222),
    [anon_sym_pick] = ACTIONS(222),
    [anon_sym_44] = ACTIONS(222),
    [anon_sym_reshape] = ACTIONS(222),
    [anon_sym_45] = ACTIONS(222),
    [anon_sym_take] = ACTIONS(222),
    [anon_sym_46] = ACTIONS(222),
    [anon_sym_drop] = ACTIONS(222),
    [anon_sym_47] = ACTIONS(222),
    [anon_sym_rotate] = ACTIONS(222),
    [anon_sym_48] = ACTIONS(222),
    [anon_sym_windows] = ACTIONS(222),
    [anon_sym_49] = ACTIONS(222),
    [anon_sym_keep] = ACTIONS(222),
    [anon_sym_50] = ACTIONS(222),
    [anon_sym_find] = ACTIONS(222),
    [anon_sym_51] = ACTIONS(222),
    [anon_sym_member] = ACTIONS(222),
    [anon_sym_52] = ACTIONS(222),
    [anon_sym_indexof] = ACTIONS(222),
    [anon_sym_53] = ACTIONS(222),
    [anon_sym_assert] = ACTIONS(222),
    [anon_sym_54] = ACTIONS(222),
    [anon_sym_wait] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_break] = ACTIONS(222),
    [anon_sym_55] = ACTIONS(222),
    [anon_sym_recur] = ACTIONS(222),
    [anon_sym_56] = ACTIONS(222),
    [anon_sym_random] = ACTIONS(222),
    [anon_sym_57] = ACTIONS(222),
    [anon_sym_gen] = ACTIONS(222),
    [anon_sym_deal] = ACTIONS(222),
    [anon_sym_use] = ACTIONS(222),
    [anon_sym_tag] = ACTIONS(222),
    [anon_sym_type] = ACTIONS(222),
    [anon_sym_sig] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_dump] = ACTIONS(222),
    [anon_sym_reduce] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_scan] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_each] = ACTIONS(222),
    [anon_sym_58] = ACTIONS(222),
    [anon_sym_rows] = ACTIONS(222),
    [anon_sym_59] = ACTIONS(222),
    [anon_sym_repeat] = ACTIONS(222),
    [anon_sym_60] = ACTIONS(222),
    [anon_sym_dip] = ACTIONS(222),
    [anon_sym_di] = ACTIONS(346),
    [anon_sym_61] = ACTIONS(222),
    [anon_sym_gap] = ACTIONS(222),
    [anon_sym_ga] = ACTIONS(346),
    [anon_sym_62] = ACTIONS(222),
    [anon_sym_invert] = ACTIONS(222),
    [anon_sym_63] = ACTIONS(222),
    [anon_sym_spawn] = ACTIONS(222),
    [anon_sym_fold] = ACTIONS(222),
    [anon_sym_64] = ACTIONS(222),
    [anon_sym_distribute] = ACTIONS(222),
    [anon_sym_65] = ACTIONS(222),
    [anon_sym_table] = ACTIONS(222),
    [anon_sym_66] = ACTIONS(222),
    [anon_sym_cross] = ACTIONS(222),
    [anon_sym_67] = ACTIONS(222),
    [anon_sym_group] = ACTIONS(222),
    [anon_sym_68] = ACTIONS(222),
    [anon_sym_partition] = ACTIONS(222),
    [anon_sym_69] = ACTIONS(222),
    [anon_sym_both] = ACTIONS(222),
    [anon_sym_70] = ACTIONS(222),
    [anon_sym_bracket] = ACTIONS(222),
    [anon_sym_71] = ACTIONS(222),
    [anon_sym_fork] = ACTIONS(222),
    [anon_sym_72] = ACTIONS(222),
    [anon_sym_under] = ACTIONS(222),
    [anon_sym_73] = ACTIONS(222),
    [anon_sym_level] = ACTIONS(222),
    [anon_sym_74] = ACTIONS(222),
    [anon_sym_fill] = ACTIONS(222),
    [anon_sym_75] = ACTIONS(222),
    [anon_sym_bind] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_try] = ACTIONS(222),
    [anon_sym_76] = ACTIONS(222),
    [anon_sym_77] = ACTIONS(222),
    [anon_sym_78] = ACTIONS(222),
    [anon_sym_79] = ACTIONS(222),
    [anon_sym_80] = ACTIONS(222),
    [anon_sym_81] = ACTIONS(222),
    [anon_sym_82] = ACTIONS(222),
    [anon_sym_roll] = ACTIONS(222),
    [anon_sym_83] = ACTIONS(222),
    [anon_sym_unroll] = ACTIONS(222),
    [anon_sym_84] = ACTIONS(222),
    [anon_sym_restack] = ACTIONS(222),
    [anon_sym_85] = ACTIONS(222),
    [anon_sym_86] = ACTIONS(222),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
  [67] = {
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_] = ACTIONS(348),
    [aux_sym_number_token1] = ACTIONS(350),
    [aux_sym_character_token1] = ACTIONS(350),
    [sym_multiLineString] = ACTIONS(350),
    [sym_signature] = ACTIONS(350),
    [sym_identifier] = ACTIONS(348),
    [sym_identifier_deprecated] = ACTIONS(348),
    [sym_system] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [sym_openParen] = ACTIONS(350),
    [sym_openCurly] = ACTIONS(350),
    [sym_openBracket] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_identity] = ACTIONS(350),
    [anon_sym_id] = ACTIONS(348),
    [anon_sym_6] = ACTIONS(350),
    [anon_sym_not] = ACTIONS(350),
    [anon_sym_7] = ACTIONS(350),
    [anon_sym_sign] = ACTIONS(350),
    [anon_sym_8] = ACTIONS(350),
    [anon_sym_BQUOTE] = ACTIONS(350),
    [anon_sym_absolutevalue] = ACTIONS(350),
    [anon_sym_9] = ACTIONS(350),
    [anon_sym_sqrt] = ACTIONS(350),
    [anon_sym_10] = ACTIONS(350),
    [anon_sym_sine] = ACTIONS(350),
    [anon_sym_11] = ACTIONS(350),
    [anon_sym_floor] = ACTIONS(350),
    [anon_sym_12] = ACTIONS(350),
    [anon_sym_ceiling] = ACTIONS(350),
    [anon_sym_13] = ACTIONS(350),
    [anon_sym_round] = ACTIONS(350),
    [anon_sym_14] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_BANG_EQ] = ACTIONS(350),
    [anon_sym_15] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_16] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_17] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_18] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_19] = ACTIONS(350),
    [anon_sym_modulus] = ACTIONS(350),
    [anon_sym_20] = ACTIONS(350),
    [anon_sym_power] = ACTIONS(350),
    [anon_sym_21] = ACTIONS(350),
    [anon_sym_logarithm] = ACTIONS(350),
    [anon_sym_22] = ACTIONS(350),
    [anon_sym_minimum] = ACTIONS(350),
    [anon_sym_23] = ACTIONS(350),
    [anon_sym_maximum] = ACTIONS(350),
    [anon_sym_24] = ACTIONS(350),
    [anon_sym_atangent] = ACTIONS(350),
    [anon_sym_25] = ACTIONS(350),
    [anon_sym_length] = ACTIONS(350),
    [anon_sym_26] = ACTIONS(350),
    [anon_sym_shape] = ACTIONS(350),
    [anon_sym_27] = ACTIONS(350),
    [anon_sym_range] = ACTIONS(350),
    [anon_sym_28] = ACTIONS(350),
    [anon_sym_first] = ACTIONS(350),
    [anon_sym_29] = ACTIONS(350),
    [anon_sym_reverse] = ACTIONS(350),
    [anon_sym_30] = ACTIONS(350),
    [anon_sym_deshape] = ACTIONS(350),
    [anon_sym_31] = ACTIONS(350),
    [anon_sym_bits] = ACTIONS(350),
    [anon_sym_32] = ACTIONS(350),
    [anon_sym_transpose] = ACTIONS(350),
    [anon_sym_33] = ACTIONS(350),
    [anon_sym_rise] = ACTIONS(350),
    [anon_sym_34] = ACTIONS(350),
    [anon_sym_fall] = ACTIONS(350),
    [anon_sym_35] = ACTIONS(350),
    [anon_sym_classify] = ACTIONS(350),
    [anon_sym_36] = ACTIONS(350),
    [anon_sym_deduplicate] = ACTIONS(350),
    [anon_sym_37] = ACTIONS(350),
    [anon_sym_box] = ACTIONS(350),
    [anon_sym_38] = ACTIONS(350),
    [anon_sym_unbox] = ACTIONS(350),
    [anon_sym_39] = ACTIONS(350),
    [anon_sym_match] = ACTIONS(350),
    [anon_sym_40] = ACTIONS(350),
    [anon_sym_couple] = ACTIONS(350),
    [anon_sym_41] = ACTIONS(350),
    [anon_sym_join] = ACTIONS(350),
    [anon_sym_42] = ACTIONS(350),
    [anon_sym_select] = ACTIONS(350),
    [anon_sym_43] = ACTIONS(350),
    [anon_sym_pick] = ACTIONS(350),
    [anon_sym_44] = ACTIONS(350),
    [anon_sym_reshape] = ACTIONS(350),
    [anon_sym_45] = ACTIONS(350),
    [anon_sym_take] = ACTIONS(350),
    [anon_sym_46] = ACTIONS(350),
    [anon_sym_drop] = ACTIONS(350),
    [anon_sym_47] = ACTIONS(350),
    [anon_sym_rotate] = ACTIONS(350),
    [anon_sym_48] = ACTIONS(350),
    [anon_sym_windows] = ACTIONS(350),
    [anon_sym_49] = ACTIONS(350),
    [anon_sym_keep] = ACTIONS(350),
    [anon_sym_50] = ACTIONS(350),
    [anon_sym_find] = ACTIONS(350),
    [anon_sym_51] = ACTIONS(350),
    [anon_sym_member] = ACTIONS(350),
    [anon_sym_52] = ACTIONS(350),
    [anon_sym_indexof] = ACTIONS(350),
    [anon_sym_53] = ACTIONS(350),
    [anon_sym_assert] = ACTIONS(350),
    [anon_sym_54] = ACTIONS(350),
    [anon_sym_wait] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_break] = ACTIONS(350),
    [anon_sym_55] = ACTIONS(350),
    [anon_sym_recur] = ACTIONS(350),
    [anon_sym_56] = ACTIONS(350),
    [anon_sym_random] = ACTIONS(350),
    [anon_sym_57] = ACTIONS(350),
    [anon_sym_gen] = ACTIONS(350),
    [anon_sym_deal] = ACTIONS(350),
    [anon_sym_use] = ACTIONS(350),
    [anon_sym_tag] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_sig] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_dump] = ACTIONS(350),
    [anon_sym_reduce] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_scan] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [anon_sym_each] = ACTIONS(350),
    [anon_sym_58] = ACTIONS(350),
    [anon_sym_rows] = ACTIONS(350),
    [anon_sym_59] = ACTIONS(350),
    [anon_sym_repeat] = ACTIONS(350),
    [anon_sym_60] = ACTIONS(350),
    [anon_sym_dip] = ACTIONS(350),
    [anon_sym_di] = ACTIONS(348),
    [anon_sym_61] = ACTIONS(350),
    [anon_sym_gap] = ACTIONS(350),
    [anon_sym_ga] = ACTIONS(348),
    [anon_sym_62] = ACTIONS(350),
    [anon_sym_invert] = ACTIONS(350),
    [anon_sym_63] = ACTIONS(350),
    [anon_sym_spawn] = ACTIONS(350),
    [anon_sym_fold] = ACTIONS(350),
    [anon_sym_64] = ACTIONS(350),
    [anon_sym_distribute] = ACTIONS(350),
    [anon_sym_65] = ACTIONS(350),
    [anon_sym_table] = ACTIONS(350),
    [anon_sym_66] = ACTIONS(350),
    [anon_sym_cross] = ACTIONS(350),
    [anon_sym_67] = ACTIONS(350),
    [anon_sym_group] = ACTIONS(350),
    [anon_sym_68] = ACTIONS(350),
    [anon_sym_partition] = ACTIONS(350),
    [anon_sym_69] = ACTIONS(350),
    [anon_sym_both] = ACTIONS(350),
    [anon_sym_70] = ACTIONS(350),
    [anon_sym_bracket] = ACTIONS(350),
    [anon_sym_71] = ACTIONS(350),
    [anon_sym_fork] = ACTIONS(350),
    [anon_sym_72] = ACTIONS(350),
    [anon_sym_under] = ACTIONS(350),
    [anon_sym_73] = ACTIONS(350),
    [anon_sym_level] = ACTIONS(350),
    [anon_sym_74] = ACTIONS(350),
    [anon_sym_fill] = ACTIONS(350),
    [anon_sym_75] = ACTIONS(350),
    [anon_sym_bind] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_try] = ACTIONS(350),
    [anon_sym_76] = ACTIONS(350),
    [anon_sym_77] = ACTIONS(350),
    [anon_sym_78] = ACTIONS(350),
    [anon_sym_79] = ACTIONS(350),
    [anon_sym_80] = ACTIONS(350),
    [anon_sym_81] = ACTIONS(350),
    [anon_sym_82] = ACTIONS(350),
    [anon_sym_roll] = ACTIONS(350),
    [anon_sym_83] = ACTIONS(350),
    [anon_sym_unroll] = ACTIONS(350),
    [anon_sym_84] = ACTIONS(350),
    [anon_sym_restack] = ACTIONS(350),
    [anon_sym_85] = ACTIONS(350),
    [anon_sym_86] = ACTIONS(350),
    [sym__whitespace] = ACTIONS(5),
    [sym__end_of_line] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(69), 1,
      sym_constant,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(181), 2,
      sym_underscore,
      sym__whitespace,
    ACTIONS(352), 8,
      anon_sym_eta,
      anon_sym_2,
      anon_sym_pi,
      anon_sym_3,
      anon_sym_tau,
      anon_sym_4,
      anon_sym_infinity,
      anon_sym_5,
  [22] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(304), 2,
      sym_underscore,
      sym__whitespace,
  [31] = 3,
    ACTIONS(324), 1,
      sym_underscore,
    ACTIONS(354), 1,
      sym__whitespace,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
  [42] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(288), 2,
      sym_underscore,
      sym__whitespace,
  [51] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(288), 2,
      sym_underscore,
      sym__whitespace,
  [60] = 2,
    ACTIONS(356), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym__end_of_line,
  [69] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(292), 2,
      sym_underscore,
      sym__whitespace,
  [78] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(296), 2,
      sym_underscore,
      sym__whitespace,
  [87] = 2,
    ACTIONS(358), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym__end_of_line,
  [96] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(300), 2,
      sym_underscore,
      sym__whitespace,
  [105] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(312), 2,
      sym_underscore,
      sym__whitespace,
  [114] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(316), 2,
      sym_underscore,
      sym__whitespace,
  [123] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(308), 2,
      sym_underscore,
      sym__whitespace,
  [132] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(326), 2,
      sym_underscore,
      sym__whitespace,
  [141] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(284), 2,
      sym_underscore,
      sym__whitespace,
  [150] = 2,
    ACTIONS(360), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym__end_of_line,
  [159] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(330), 2,
      sym_underscore,
      sym__whitespace,
  [168] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(181), 2,
      sym_underscore,
      sym__whitespace,
  [177] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(334), 2,
      sym_underscore,
      sym__whitespace,
  [186] = 3,
    ACTIONS(324), 1,
      sym_underscore,
    ACTIONS(362), 1,
      sym__whitespace,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
  [197] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym__end_of_line,
    ACTIONS(338), 2,
      sym_underscore,
      sym__whitespace,
  [206] = 2,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym__end_of_line,
  [215] = 2,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym__end_of_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(68)] = 0,
  [SMALL_STATE(69)] = 22,
  [SMALL_STATE(70)] = 31,
  [SMALL_STATE(71)] = 42,
  [SMALL_STATE(72)] = 51,
  [SMALL_STATE(73)] = 60,
  [SMALL_STATE(74)] = 69,
  [SMALL_STATE(75)] = 78,
  [SMALL_STATE(76)] = 87,
  [SMALL_STATE(77)] = 96,
  [SMALL_STATE(78)] = 105,
  [SMALL_STATE(79)] = 114,
  [SMALL_STATE(80)] = 123,
  [SMALL_STATE(81)] = 132,
  [SMALL_STATE(82)] = 141,
  [SMALL_STATE(83)] = 150,
  [SMALL_STATE(84)] = 159,
  [SMALL_STATE(85)] = 168,
  [SMALL_STATE(86)] = 177,
  [SMALL_STATE(87)] = 186,
  [SMALL_STATE(88)] = 197,
  [SMALL_STATE(89)] = 206,
  [SMALL_STATE(90)] = 215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(73),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(48),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(47),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(10),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(46),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(46),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(45),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(45),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 2), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROGRAM, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(76),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(23),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(58),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(59),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(60),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(60),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(13),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(4),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(61),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(61),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(62),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(62),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(83),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(68),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(77),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(88),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(86),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(86),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(24),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(16),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(11),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(85),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(85),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(84),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(84),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(82),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(81),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier2, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier2, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PROGRAM_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PROGRAM_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier1, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier1, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat2, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
