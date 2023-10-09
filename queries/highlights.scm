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
(string) @string

[ (identifier) ] @variable

[ (function) ] @function
[ (system) ] @function.builtin

[ (modifier1) ] @special

[
  (modifier2)
  (leftArrow)
] @keyword.directive
