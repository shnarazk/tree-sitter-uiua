#!/usr/bin/env uiua run
FirstColumn ← 16
SecondColumn ← 6
---
⍤ ≥FirstColumn SecondColumn
---
F!! ← (+|-|^2|^2)
CommentChar ← @# # this is comment
FileList ← ↘1&args
NotBlankLine ← ▽∵(≠0⧻).
NotStartsWithComment ← ▽∵(/<⊂⊃(⊗CommentChar⊔)(⊗0=@ ⊔)).
LoC ← |1 ⧻NotStartsWithComment NotBlankLine ⊜□¬=@\n.&fras
≡(&fe⊔)..FileList
≡(|2 ?(LoC)(□"N/A";))
≡(|2 □$"| _ | _ |"⬚@\s(↙) FirstColumn $"_" ⊙(⬚@\s(↙) dump∘ SecondColumn $"_")∶∩⊔)
⊂□$"|-_-|-_-:|" ⬚@-↙ FirstColumn "" ⬚@-↙ - 1 SecondColumn ""
⊂□$"| File_ | LoC_ |" ⬚@\s↙ - 4 FirstColumn "" ⬚@\s↙ - 3 SecondColumn ""
∵&p
