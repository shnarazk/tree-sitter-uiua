[
  (openParen)
  (closeParen)
  (openCurly)
  (closeCurly)
  (openBracket)
  (closeBracket)
] @punctuation.bracket

[
  (underscore)
  (branchSeparator)
] @punctuation.delimiter

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
  "identifier"
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

