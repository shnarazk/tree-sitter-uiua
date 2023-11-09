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
[ (leftArrow) ] @operator
[ (function) ] @function
[ (modifier1) ] @function.special
[ (modifier2) ] @keyword.directive
[ (number) ] @constant.numeric
[ (placeHolder) ] @label
[ (ocean) ] @type.builtin
[ (other_constant) ] @string.special
[ (planet) ] @variable.parameter
[ (signature) ] @type
[ (system) ] @function.builtin
[ (tripleMinus) ] @module

[
  (string)
  (multiLineString)
] @string

[
  (deprecated)
  (identifier_deprecated)
] @warning

