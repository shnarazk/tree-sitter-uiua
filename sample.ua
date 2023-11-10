#!/usr/bin/env uiua run
Column ← 16
Fill ← ⊂∶⬚∘↙∘⊃∘(∶""↥0-∶Column ⧻⋅.)
CommentChar ← @# # this is comment
FileList ← (∘|["sample.ua"];)=0⧻.↘1&args
NotBlankLine ← ▽∵(≠0⧻).
NotStartsWithComment ← ⊐▽∵(/<⊂⊃(⊗CommentChar)(⊗0=@\s)).
LoC ← |1 ⧻NotStartsWithComment NotBlankLine ⊜□≠@\n.&fras
&p $"| _ | _ |" ∩Fill @\s "File" @\s "LoC"
&p $"|-_-|-_:|" .Fill @- ""
;⊐≡(0 &p $"| _ | _ |" ∩(Fill@\s) ∶?($"_"LoC)("N/A";)&fe)..FileList
