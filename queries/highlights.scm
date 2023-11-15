[
  (openParen)
  (closeParen)
  (openCurly)
  (closeCurly)
  (openBracket)
  (closeBracket)
] @punctuation.bracket

[
  (branchSeparator)
  (underscore)
] @constructor
; ] @punctuation.delimiter

[ (character) ] @constant.character
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
  (dollarString)
  (multiLineString)
] @string

[
  (deprecated)
  (identifierDeprecated)
] @warning

