# tree-sitter-uiua
Structual editing and highlighting [Uiua](https://www.uiua.or,) programs with editors powered by [tree-sitter](https://tree-sitter.github.io/)

## Implementation memo

## References

- [tree-sitter tutorial](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [target color schema](https://github.com/helix-editor/helix/blob/53f47bc47771c94dab51626ca025be28e62eba0c/runtime/themes/solarized_light.toml#L1-L23)
- [textobjects](https://docs.helix-editor.com/guides/textobject.html)

# A configuration for Helix

Are you a [Helix](https://helix-editor.com/) user? Then try:

1. Add the following to your $CONFIG/helix/languages.toml

```toml
[[grammar]]
name = "uiua"
source.git = "https://github.com/shnarazk/tree-sitter-uiua"
source.rev = the latest commit id

[language.auto-pairs]
'(' = ')'
'{' = '}'
'[' = ']'
'"' = '"'
```

2. Build up on shell:

```
$ hx -g fetch
$ hx -g build
```

3. Copy query files:

```
$ mkdir -p $HELIX/runtime/queries/uiua
$ cp -r queries $HELIX/runtime/queries/uiua
```

In future, you can:
- expand/shrink selection by moving up/down on AST as we expect
- indent after `:`, `?`, `{`, `⟨` and so on, and outdent at `}`, `⟩`, `;` and so on
- traverse function blocks by `]f` and `[f`
- traverse function headers by `]a` and `[a`
- traverse namespaces by `]t` and `[t`
- traverse comments by `]c` and `[c`
