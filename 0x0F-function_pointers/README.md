# C - Function Pointers
  - What are function pointers and how to use them
  - What does a function pointer exactly hold
  - Where does a function pointer point to in the virtual memory

## [0-print_name.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c)
   A function that prints a name.
   - Prototype: `void print_name(char *name, void (*f)(char *));`

## [1-array_iterator.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c)
   A function that executes a function given as a parameter on each element of an array.
   - Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
   - Where size is the size of the array
   - Action is a pointer to the function you need to use

## [2-int_index.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c)
   A function that searches for an integer.
   - Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
   - Where `size` is the number of elements in the array
   - `cmp` is a pointer to the function to be used to compare values
   - `int_index` returns the index of the first element for which the `cmp` function does not return 0
   - If no element matches, return -1
   - If `size <= 0`, return `-1`

## [3-main.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c)
   A program that performs simple operations.
   - Usage: `calc num1 operator num2`
   - You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to int
   operator is one of the following:
   	    - +: addition
	    - : subtraction
	    - *: multiplication
	    - /: division
	    - %: modulo
  - The program prints the result of the operation, followed by a new line
  - You can assume that the result of all operations can be stored in an int
  - If the number of arguments is wrong, print `Error`, followed by a new line, and `exit` with the status `98`
  - If the operator is none of the above, print `Error`, followed by a new line, and `exit` with the status `99`
  - If the user tries to divide `(/ or %)` by `0`, print `Error`, followed by a new line, and `exit` with the status `100`

  ### Files
  #### [3-calc.h](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h)
       Contains all the function prototypes and data structures used by the program.

  #### [3-op_functions.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c)
       Contains the following 5 functions (not more):
       - op_add: returns the sum of a and b. Prototype: `int op_add(int a, int b);`
       - op_sub: returns the difference of a and b. Prototype: `int op_sub(int a, int b);`
       - op_mul: returns the product of a and b. Prototype: `int op_mul(int a, int b);`
       - op_div: returns the result of the division of a by b. Prototype: `int op_div(int a, int b);`
       - op_mod: returns the remainder of the division of a by b. Prototype: `int op_mod(int a, int b);`

  #### [3-get_op_func.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c)
       Contains the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
       - Prototype: `int (*get_op_func(char *s))(int, int);`
       - Where `s` is the operator passed as argument to the program
       - Returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
       - If `s` does not match any of the 5 expected operators (+, -, *, /, %), return `NULL`