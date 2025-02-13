# C - More Singly Linked Lists
  - How to use linked lists

## [0-print_listint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c)
   A function that prints all the elements of a `listint_t` list
   - Prototype: `size_t print_listint(const listint_t *h);`
   - Return: Number of nodes

## [1-listint_len.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c)
   A function that returns the number of elements in a linked `listint_t` list
   - Prototype: `size_t listint_len(const listint_t *h);`

## [2-add_nodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c)
   A function that adds a new node at the beginning of a `listint_t` list
   - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
   - Return: The address of the new element, or `NULL` if it failed

## [3-add_nodeint_end.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c)
   A function that adds a new node at the end of a `listnint_t` list
   - Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
   - Return: The address of the new element, or `NULL` if it failed

## [4-free_listint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c)
   A function that frees a `listint_t` list
   - Prototype: `void free_listint(listint_t *head);`

## [5-free_listint2.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c)
   A function that frees a `listint_t` list
   - Prototype: `void free_listint2(listint_t **head);`
   - The function sets the `head` to `NULL`

## [6-pop_listint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c)
   A funcion that deletes the head node of a `listint_t` linked list,\
   and returns the head node's data (n)
   - Prototype: `int pop_listint(listint_t **head);`
   - If linked list is empty return `0`

## [7-get_nodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c)
   A function that returns the nth node of a `listint_t` linked list
   - Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
   - Where `index` is the index of the node, starting at `0`
   - If the node does not exist, return `NULL`

## [8-sum_listint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c)
   A function that returns the sum of all the data (n) of a `listint_t` linked list
   - Prototype: `int sum_listint(listint_t *head);`
   - If the list is empty, return `0`

## [9-insert_nodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c)
   A function that inserts a new node at a given position
   - Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
   - Where `idx` is the index of the list where the new node should be added. Index starts at `0`
   - Returns: the address of the new node, or `NULL` if it failed
   - if it is not possible to add the new node at index `idx`, the node will not be added and `NULL` will be returned

## [10-delete_nodeint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c)
   A function that deleter the node at index `index` of a `listint_t` linked list
   - Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
   - Where `index` is the index of the node that should be deleted. Index starts at 0
   - Returns `1` if it succeeded, `-1` if it failed

## [100-reverse_listint.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c)
   A function that reverses a `listint_t` linked list
   - Prototype: `listint_t *reverse_listint(listint_t **head);`
   - Returns a pointer to the first node of the reversed list