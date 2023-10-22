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

[
  (signature)
  (placeHolder)
] @type

(comment) @comment
(character) @character
(number) @constant.numeric.integer
(constant) @constant.numeric
(other_constant) @string.special

[
  (string)
  (multiLineString)
] @string

[ (identifier) ] @variable

[ (function) ] @function
[ (system) ] @function.builtin

[ (modifier1) ] @special

[
  (modifier2)
  (leftArrow)
] @keyword.directive

[
  (deprecated)
  (identifier_deprecated)
] @warning

[
  (tripleMinus)
] @namespace
