module.exports = grammar({
  name: 'uiua',
  extras: $ => [/[ \t]+/, $.comment, $._end_of_line],
  conflicts: $ => [
  ],
  rules: {
    source_file: $  => $._PROGRAM,
    _PROGRAM: $     => seq(optional($.number), $._end_of_line),

    number: $       => token(choice(/¯?[∞]/, /¯π([eE]¯?\d+)?/, /¯?\d+(\.\d+)?([eE]¯?\d+)?/)),
    character: $    => token(seq('@', choice(/'[^/]'/, /\\./))),
    string: $       => token(seq('"', repeat(choice('""', /[^"]+/)), '"')),
    comment: $      => /#.*/,
    _end_of_line: $ => token(/\r?\n/),
  }
});
