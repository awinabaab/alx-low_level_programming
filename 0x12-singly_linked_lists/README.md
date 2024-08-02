# C - Singly Linked Lists
  - When and why using linked lists vs arrays
  - How to build and use linked lists

## [0-print_list.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)
   A function that prints all the elements of a `list_t` list.
   - Prototype: `size_t print_list(const list_t *h);`
   - Returns the number of nodes
   - If `str` is `NULL`, print `[0] (nil)`

## [1-list_len.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c)
   A function that returns the number of elements in a linked `list_t` list.
   - Prototype: `size_t list_len(const list_t *h);`

## [2-add_node.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c)
   A function that adds a new node at the beginning of a `list_t` list.
   - Prototype: `list_t *add_node(list_t **head, const char *str);`
   - Returns the address of the new element, or `NULL` if it failed

## [3-add_node_end.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c)
   A function that adds a new node at the end of a `list_t` list.
   - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
   - Returns the address of the new element, or `NULL` if it failed

## [4-free_list.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c)
   A function that frees a `list_t` list.
   - Prototype: `void free_list(list_t *head);`

## [100-first.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c)
   A function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.

## [101-hello_holberton.asm](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm)
   A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.