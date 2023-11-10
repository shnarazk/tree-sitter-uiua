[
  (openParen)
  (closeParen)
  (openCurly)
  (closeCurly)
  (openBracket)
  (closeBracket)
] @punctuation.bracket

[ (branchSeparator) ] @special
[ (character) ] @character
[ (comment) ] @comment
[ (constant) ] @constant.numeric
[ (identifier) ] @variable
[ (leftArrow) ] @keyword.directive
[ (function) ] @function
[ (modifier1) ] @operator
[ (modifier2) ] @operator
[ (number) ] @constant.numeric
[ (placeHolder) ] @special
[ (otherConstant) ] @string.special
[ (signature) ] @type
[ (system) ] @function.builtin
[ (tripleMinus) ] @module
[ (underscore) ] @punctuation.delimiter

; ocean
[
    "rock"
    "ro"
    "⋄"
    "surface"
    "~"
    "deep"
    "de"
    "≊"
    "abyss"
    "ab"
    "≃"
    "seabed"
    "se"
    "∸"
] @attribute

; planet
[
  "id"
  "identity"
  "∘"
  "dip"
  "⊙"
  "gap"
  "⋅"
] @tag

[
  (string)
  (multiLineString)
] @string

[
  (deprecated)
  (identifierDeprecated)
] @warning

