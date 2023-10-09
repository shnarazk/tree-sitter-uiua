; ["_" "[" "]" "{" "}"] @punctuation.bracket

; [
;   "?"
;   "⍥"
;   "↰"
;   "↲"
;   (leftArrow)
; ] @keyword.directive

(comment) @comment
(character) @character
(number) @numeric
(constant) @numeric.constant
(string) @string

[ (identifier) ] @variable

[ (function) ] @function
[ (system) ] @function.builtin

[ (modifier1) ] @special

[
  (modifier2)
  (leftArrow)
] @keyword.directive

[ (deprecated) ] @warning

