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
[ (ocean) ] @attribute
[ (other_constant) ] @string.special
[ (planet) ] @tag
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

