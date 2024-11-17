; highlights.scm

; Keywords
(function_def "begin") @keyword
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

; Instructions


(instruction (push_id))   @function.builtin
(instruction (push_val))  @function.builtin
(instruction (pop))       @function.builtin
(instruction (show))      @function.builtin
(instruction (str))       @function.builtin
(instruction (print))     @function.builtin
(instruction (println))   @function.builtin
(instruction (add))       @function.builtin
(instruction (sub))       @function.builtin
(instruction (mul))       @function.builtin
(instruction (div))       @function.builtin
(instruction (lshift))    @function.builtin
(instruction (rshift))    @function.builtin
(instruction (cmp))       @function.builtin
(instruction (halt))      @function.builtin
(instruction (increment)) @function.builtin
(instruction (decrement)) @function.builtin
(instruction (call))      @function.builtin
(instruction (gettype))   @function.builtin

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
