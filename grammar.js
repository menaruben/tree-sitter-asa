/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'asa',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_def,
      $.goto,
      $.label,
      $.ifgoto,
      $.import,
      $.single_line_comment // get ignored
    ),

    function_def: $ => seq(
      'begin', $.identifier, ':',
      repeat($.instruction_or_statement),
      'end'
    ),
    goto: $ => seq("goto", $.identifier, ";"),
    label: $ => seq("label", $.identifier, ";"),
    ifgoto: $ => seq("ifgoto", $.integer, $.identifier, ";"),
    import: $ => seq("import", $.string, ";"),

    instruction_or_statement: $ => choice(
      $.instruction, $._statement),

    instruction: $ => choice(
      $.raise,
      $.show,
      $.str,
      $.print,
      $.println,
      $.push_id,
      $.push_val,
      $.pop,
      $.add,
      $.sub,
      $.mul,
      $.div,
      $.lshift,
      $.rshift,
      $.cmp,
      $.halt,
      $.increment,
      $.decrement,
      $.call,
      $.gettype,
      $.var_def
    ),
    
    raise: $ => seq("raise", ";"),
    show: $ => seq("show", ";"),
    str: $ => seq("str", ";"),
    print: $ => seq("print", ";"),
    println: $ => seq("println", ";"),
    push_id: $ => seq("push", $.identifier, ";"),
    push_val: $ => seq("push", $.val, ";"),
    pop: $ => seq("pop", $.identifier, ";"),
    add: $ => seq("add", ";"),
    sub: $ => seq("sub", ";"),
    mul: $ => seq("mul", ";"),
    div: $ => seq("div", ";"),
    lshift: $ => seq("lshift", ";"),
    rshift: $ => seq("rshift", ";"),
    cmp: $ => seq("cmp", ";"),
    halt: $ => seq("halt", ";"),
    increment: $ => seq("incr", ";"),
    decrement: $ => seq("decr", ";"),
    call: $ => seq("call", $.identifier, ";"),
    gettype: $ => seq("type", ";"),
    var_def: $ => seq("var", $.identifier, $.val, ";"),

    val: $ => choice(
      $.integer,
      $.float,
      $.double,
      $.bigdouble,
      $.biginteger,
      $.string,
      $.char,
      $.boolean
    ),
    
    identifier: $ => /[a-zA-Z_]\w*(\/\w+)*\??/,
    integer: $ => /\d+/,
    float: $ => /\d+\.\d+f/,
    double: $ => /\d+\.\d+/,
    bigdouble: $ => /\d+\.\d+bd/,
    biginteger: $ => /\d+bi/,
    string: $ => /"[^"]*"/,
    char: $ => /'[^']'/,
    boolean: $ => choice('true', 'false'),

    single_line_comment: $ => seq('//', /[^\n]*/)
  }
});
