; highlights.scm

; Keywords / Instructions
(function_def "def") @keyword.function
(function_def "end")   @keyword

(var_def 
  "var" @keyword
  (identifier) @variable
  (val))

(goto
  "goto" @keyword 
  (identifier) @variable)

(label 
  "label" @keyword
  (identifier) @variable)

(ifgoto 
  "ifgoto" @keyword
  (integer) @numeric.integer 
  (identifier) @variable)

(import
  "import" @keyword 
  (string) @string)

(raise) @keyword
(show)  @keyword
(halt)  @keyword

(push)      @function.builtin
(pop)       @function.builtin
(str)       @function.builtin
(print)     @function.builtin
(println)   @function.builtin
(add)       @function.builtin
(sub)       @function.builtin
(mul)       @function.builtin
(div)       @function.builtin
(lshift)    @function.builtin
(rshift)    @function.builtin
(cmp)       @function.builtin
(increment) @function.builtin
(decrement) @function.builtin
(call)      @function.builtin
(gettype)   @function.builtin

; values
(identifier)       @variable
(val (integer))    @numeric.integer
(val (string))     @string
(val (boolean))    @boolean
(val (float))      @numeric.float
(val (double))     @numeric.float
(val (biginteger)) @numeric.integer
(val (bigdouble))  @numeric.float
(val (char))       @character

; punctuation
[
  ":"
  ";"
] @punctuation.delimiter

; comments
(single_line_comment) @comment
