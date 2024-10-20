# Changelog

### 0.13.0: 2024-1X-XX

- WIP conform to Uiua-0.13.0

### 0.12.0: 2024-10-XX

- WIP conform to Uiua-0.12.0

### 0.11.2: 2024-10-20

- conform to Uiua-0.11.0

### 0.11.1: 2024-10-18

- conform to Uiua-0.10.0

### 0.11.0: 2024-02-29

- follow Uiua-0.9.0
  - Note: function strands are treated as arrays, just as they were

### 0.10.0: 2024-02-01

- follow Uiua-0.8.0

- Add the [`content ⊔`](https://uiua.org/docs/content) modifier
- Deprecate [`unpack ⊐`](https://uiua.org/docs/unpack)
- Add the [`unique ◰`](https://uiua.org/docs/unique) function
- Change [`deduplicate ◴`](https://uiua.org/docs/deduplicate)'s glyph. Code using `⊖` will continue to work and will be formatted as `◴`.
- Deprecate [`cross ⊠`](https://uiua.org/docs/cross)
- Unicode escape sequences that are not 2 or 4 bytes long can now be specified with `\u{…}`
- Change [`pop ◌`](https://uiua.org/docs/pop)'s glyph. Code using `;` will continue to work and will be formatted as `◌`.
- Completely remove the deprecated `unbox ⊔`
- Add experimental hashmap functions
  - [`map`](https://uiua.org/docs/map)
  - [`has`](https://uiua.org/docs/has)
  - [`get`](https://uiua.org/docs/get)
  - [`insert`](https://uiua.org/docs/insert)
  - [`remove`](https://uiua.org/docs/remove)
- Add experimental [`bind`](https://uiua.org/docs/bind) modifier

### 0.9.0: 2023-12-07

- follow Uiua-0.6.0
    - add ``⋕``
    - deprecate `unbox`
    - change `invert ⍘` to `un °`
    - change `pack` to `unpack`

### 0.8.0: 2023-12-03

- follow Uiua-0.5.1
    - add `stack`
    - remove `reach`, `distribute`, `tribute`, `level`, `combinate`
    - add `'` and `''`

### 0.7.0: 2023-12-03

- handle $-string known as multi-line string correctly

### 0.6.0: 2023-12-01

- follow Uiua-0.4.0
    - add `rectify`, `this`, `recur`, and `fix`
    - add `all`, `this`, `setinv`, and `setunder`
    - deprecate `⟜`

### 0.5.0: 2023-11-20

- follow Uiua-0.3.0
    - deprecate `level`, `combinate`, `tribute`, and `distribute`
    - add `rerank` and `fix`
    - change the glyph for `flip`
    - remove `if`
- parse '$-string' correctly (#15)
- parse '¯' as a part of `number` if they make a token (#15)

### 0.4.0: 2023-11-11

- parse '|' correctly
- render ocean tokens as `attribute`
- render planet tokens as `tag`

### 0.3.3: 2023-11-04

Follows Uiua-0.1.0

- add `complex`
- remove `break`
- add fraction leterals

### 0.3.2: 2023-10-30

- follows Uiua-0.0.25

### 0.3.1: 2023-10-26

- follows Uiua-0.0.22

### 0.3.0: 2023-10-22

- follows Uiua-0.0.22
- remove `block`, multiline element

### 0.2.0: 2023-10-17

- break a block into line segments
- handle emojis as identifiers correctly
- render `multiLineString` as @string
- render numbers as @constant.numeric.integer
- render misc non-number constants as @string.special
- render comment as @injection.content
- add folds.scm
- follows Uiua-0.0.20

### 0.1.0: 2023-10-14

adapt to uiua-0.0.19
- add `parse`
- add `@\s`
- reject `$ "..."`

### 0.0.1: 2023-10-11

- adapt to uiua-0.0.18

### Prereleases: 2023-10-09

0. Phase0: playing with tokens
1. Phase1: preparing for helix
2. Phase2: mock a grammar up

