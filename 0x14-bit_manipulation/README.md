# C - Bit Manipulation
  - How to manipulate bits and use bitwise operators

## [0-binary_to_uint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)
   A function that converts a binary number to an `unsigned int`
   - Prototype: `unsigned int binary_to_uint(const char *b);`
   - where `b` is pointing to a string of `0` and `1` chars
   - Return: The converted number or `0` if
     - there is one or more chars in the string `b` that is not `0` or `1`
     - `b` is NULL

## [1-print_binary.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c)
   A function that prints the binary representation of a number
   - Prototype: `void print_binary(unsigned long int n);`

## [2-get_bit.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c)
   A function that returns the value of a bit at a given index
   - Prototype: `int get_bit(insigned long int n, unsigned int index);`
   - where `index` is the index from `0` of the bit you want to get
   - Returns the value of the bit at index `index` or `-1` of an error occurred

## [3-set_bit.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c)
   A function that sets the value of a bit to `1` at a given index
   - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
   - Where `index` is the index, starting from `0` of the bit you want to set
   - Returns `1` if it worked, or `-1` if an error occurred

## [4-clear_bit.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c)
   A function that sets the values of a bit to `0` at a given index
   - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
   - Where `index` is the index, starting from `0` of the bit you want to set
   - Returns: `1` if it worked, or `-1` if an error occurred

## [5-flip_bits.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c)
   A function that returns the number of bits you would need to flip to get\
    from one number to another
   - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

## [6-get_endianness.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x14-bit_manipulation/6-get_endianness.c)
   A function that checks the endianness
   - Prototype: `int get_endianness(void);`
   - Returns `0` if big endian, `1` if little endian