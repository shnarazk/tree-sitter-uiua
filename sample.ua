#!/usr/bin/env uiua run
FirstColumn ← 16
SecondColumn ← 6
CommentChar ← @# # this is comment
Year ← ?(⊂∶"/"⊔⊡0)("./";)⧻.↘1&args
FileList ← ∵(□⊂∶".ua"⊂"day"↙¯2⊂"00"$"_")+1⇡25
NotBlankLine ← ▽∵(≠0⧻).
NotStartsWithComment ← ▽∵(/<⊂⊃(⊗CommentChar⊔)(⊗0=@ ⊔)).
LoC ← |1 ⧻NotStartsWithComment NotBlankLine ⊜□¬=@\n.&fras
≡(&fe⊔)..∵(⊂Year ⊔)FileList
≡(|2 ?(LoC)(□"N/A";))
≡(|2 □$"| _ | _ |"⬚@ (↙) FirstColumn $"_" ⊙(⬚@ (↙) dump∘ SecondColumn $"_")∶∩⊔)
⊂□$"|-_-|-_-:|" ⬚@-↙ FirstColumn "" ⬚@-↙ - 1 SecondColumn ""
⊂□$"| File_ | LoC_ |" ⬚@ ↙ - 4 FirstColumn "" ⬚@ ↙ - 3 SecondColumn ""
∵&p
