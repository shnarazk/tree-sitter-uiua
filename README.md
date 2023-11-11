# tree-sitter-uiua

Finally, your editors support AST-based editting of [Uiua](https://github.com/uiua-lang/uiua) programs.

## References

- [Uiua](https://www.uiua.org), [github](https://github.com/uiua-lang/uiua)
- [tree-sitter tutorial](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [target color schema](https://github.com/helix-editor/helix/blob/53f47bc47771c94dab51626ca025be28e62eba0c/runtime/themes/solarized_light.toml#L1-L23)
- [textobjects](https://docs.helix-editor.com/guides/textobject.html)

# A configuration for Helix

Are you a [Helix](https://helix-editor.com/) user? Then try:

1. [Optional] Add [the basic configuration](https://github.com/helix-editor/helix/wiki/How-to-install-the-default-language-servers#uiua)

2. Add the following to your $CONFIG/helix/languages.toml

```toml
[[grammar]]
name = "uiua"
source.git = "https://github.com/shnarazk/tree-sitter-uiua"
source.rev = commit-id-as-string
```

3. Build up on shell:

```
$ hx -g fetch
$ hx -g build
```

4. Copy query files:

```
$ mkdir -p $HELIX/runtime/queries/uiua # or make your query directory
$ cp -r queries $HELIX/runtime/queries/uiua
```

Now you can:
- traverse modules by `]t` and `[t`
- traverse comments by `]c` and `[c`
- and any AST-based editing as other languages
