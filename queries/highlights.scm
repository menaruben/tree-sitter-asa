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
(instruction (push))      @function.builtin
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

; Identifiers
(identifier) @variable

; Values
(val_or_id (val (integer))    @numeric.integer)
(val_or_id (val (string))     @string)
(val_or_id (val (boolean))    @boolean)
(val_or_id (val (float))      @numeric.float)
(val_or_id (val (double))     @numeric.float)
(val_or_id (val (biginteger)) @numeric.integer)
(val_or_id (val (char))       @character)
(val_or_id (identifier) @variable)

; comments
(single_line_comment) @comment
