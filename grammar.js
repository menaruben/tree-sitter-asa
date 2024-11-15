/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'asa',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_definition,
      $.instruction,
      $.label,
      $.goto,
      $.ifgoto,
      $.halt
    ),

    function_definition: $ => seq(
      'begin',
      $.identifier,
      ':',
      repeat($._statement),
      'end'
    ),

    instruction: $ => choice(
      $.push,
      $.pop,
      $.add,
      $.sub,
      $.mul,
      $.div,
      $.lshift,
      $.rshift,
      $.cmp,
      $.call,
      $.show,
      $.print,
      $.println,
      $.type,
      $.incr,
      $.decr,
      $.import
    ),

    push: $ => seq('push', $._value, ';'),
    pop: $ => seq('pop', $.identifier, ';'),
    add: $ => seq('add', ';'),
    sub: $ => seq('sub', ';'),
    mul: $ => seq('mul', ';'),
    div: $ => seq('div', ';'),
    lshift: $ => seq('lshift', ';'),
    rshift: $ => seq('rshift', ';'),
    cmp: $ => seq('cmp', ';'),
    call: $ => seq('call', $.identifier, ';'),
    show: $ => seq('show', ';'),
    print: $ => seq('print', ';'),
    println: $ => seq('println', ';'),
    type: $ => seq('type', ';'),
    incr: $ => seq('incr', ';'),
    decr: $ => seq('decr', ';'),
    import: $ => seq('import', $.string, ';'),

    label: $ => seq('label', $.identifier, ';'),
    goto: $ => seq('goto', $.identifier, ';'),
    ifgoto: $ => seq('ifgoto', $.cmpint, $.identifier, ';'),
    halt: $ => seq('halt', ';'),

    _value: $ => choice(
      $.integer,
      $.float,
      $.double,
      $.bigdouble,
      $.biginteger,
      $.string,
      $.char,
      $.boolean
    ),

    cmpint: $ => choice('-1', '0', '1'),

    identifier: $ => /[a-zA-Z_]\w*(\/\w+)*\??/,
    integer: $ => /\d+/,
    float: $ => /\d+\.\d+f/,
    double: $ => /\d+\.\d+/,
    bigdouble: $ => /\d+\.\d+bd/,
    biginteger: $ => /\d+bi/,
    string: $ => /"[^"]*"/,
    char: $ => /'[^']'/,
    boolean: $ => choice('true', 'false')
  }
});
