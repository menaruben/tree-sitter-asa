; highlights.scm

; Function definitions
[
  (function_definition
    name: (identifier) @function
  )
]

; Instructions
[
  (instruction
    (push) @keyword
    (pop) @keyword
    (add) @keyword
    (sub) @keyword
    (mul) @keyword
    (div) @keyword
    (lshift) @keyword
    (rshift) @keyword
    (cmp) @keyword
    (call) @keyword
    (show) @keyword
    (print) @keyword
    (println) @keyword
    (type) @keyword
    (incr) @keyword
    (decr) @keyword
    (import) @keyword
  )
]

; Labels and Goto
[
  (label) @label
  (goto) @keyword
  (ifgoto) @keyword
]

; Values
[
  (integer) @number
  (float) @number
  (double) @number
  (bigdouble) @number
  (biginteger) @number
  (string) @string
  (char) @character
  (boolean) @boolean
]

; Comments
[
  (comment) @comment
]
