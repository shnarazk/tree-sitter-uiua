#!/usr/bin/env uiua run
FirstColumn ← 16
SecondColumn ← 6
---
ThirdColumn ← 22
---
~~~
⍤ <ThirdColumn FirstColumn
⍤ <ThirdColumn SecondColumn
~~~
CommentChar ← @# # this is comment
FileList ← ↘1&args
NotBlankLine ← ▽∵(≠0⧻).
NotStartsWithComment ← ▽∵(/<⊂⊃(⊗CommentChar⊔)(⊗0=@ ⊔)).
LoC ← |1 ⧻NotStartsWithComment NotBlankLine ⊜□¬=@\n.&fras
≡(&fe⊔)..FileList
≡(|2 ?(LoC)(□"N/A";))
≡(|2 □$"| _ | _ |"⬚@ (↙) FirstColumn $"_" ⊙(⬚@ (↙) dump∘ SecondColumn $"_")∶∩⊔)
⊂□$"|-_-|-_-:|" ⬚@-↙ FirstColumn "" ⬚@-↙ - 1 SecondColumn ""
⊂□$"| File_ | LoC_ |" ⬚@ ↙ - 4 FirstColumn "" ⬚@ ↙ - 3 SecondColumn ""
∵&p
