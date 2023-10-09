["·"] @constant.builtin
["‿" "⟨" "⟩" "[" "]"] @operator
["(" ")" "{" "}"] @punctuation.bracket

[
  "?"
  "⍥"
  "↰"
  "↲"
] @keyword.directive

(comment) @comment
(character) @character
(number) @numeric
(string) @string

[
  (identifier)
] @variable

[
  (function)
] @function

[
  (modifier)
] @special

[
  (leftArrow)
] @special
