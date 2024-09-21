# C - Doubly Linked Lists
  - What is a doubly linked list
  - How to use doubly linked lists
  - Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists

## [0-print_dlistint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/0-print_dlistint.c)
   A function that prints all the elements of a `dlistint_t` list
   - Prototype: `size_t print_dlistint(const dlistint_t *h);`
   - Return: Number of nodes

## [1-dlistint_len.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/1-dlistint_len.c)
   A function that returns the number of elements in a linked `dlistint_t` list
   - Prototype: `size_t dlistint_len(const dlistint_t *h);`

## [2-add_dnodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/2-add_dnodeint.c)
   A function that adds a new node at the beginning of `dlistint_t` list
   - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
   - Return: Address of the new node, or `NULL` if it failed

## [3-add_dnodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/3-add_dnodeint_end.c)
   A function that adds a new node at the end of a `dlistint_t` list
   - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
   - Return: The address of the new node, or `NULL` if it failed

## [4-free_dlistint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/4-free_dlistint.c)
   A function that frees a `dlistint_t` list
   - Prototype: `void free_dlistint(dlistint_t *head);`

## [5-get_dnodeint_at_index.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/5-get_dnodeint_at_index.c)
   A function that returns the nth node of a `dlistint_t` linked list
   - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
   - Where `index` is the index of the node, starting from `0`
   - Return: `NULL` if node doesn't exist, else returns a pointer to the node

## [6-sum_dlistint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists6/6-sum_dlistint.c)
   A function that returns te sum of all the data(n) of a `dlistint_t` linked list
   - Prototype: `int sum_dlistint(dlistint_t *head);`
   - Return: 0 if list is empty

## [7-insert_dnodeint_at_index.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/7-insert_dnodeint_at_index.c)
   A function that inserts a new node at a given position
   - Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsignde int idx, int n);`
   - Where `idx` is the index of the list where the new node should be added. Index starts at `0`
   - Return: The address of the new node, or `NULL` if it failed
   - If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

## [8-delete_dnodeint_at_index.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/8-delete_dnodeint_at_index.c)
   A function that deletes the node at index `index` of a `dlistint_t` linked list
   - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
   - Where `index` is the index of the node that should be deleted. Index starts at `0`
   - Return: `1` on success, `-1` on failure

## [100-password](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/100-password)
   The password for [crackme4}(https://github.com/alx-tools/0x17.c)

## [101-result](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/101-result)
   The largest palidrome made from the product of two 3-digit numbers