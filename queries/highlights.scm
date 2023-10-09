; ["_" "[" "]" "{" "}"] @punctuation.bracket

; [
;   "?"
;   "⍥"
;   "↰"
;   "↲"
; ] @keyword.directive

(comment) @comment
(character) @character
(number) @numeric
(string) @string

; [
;   (identifier)
; ] @variable

[
  (function)
] @function

[
  (modifier1)
  (modifier2)
] @special

[
  (leftArrow)
] @special
