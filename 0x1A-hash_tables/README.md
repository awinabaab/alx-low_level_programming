# C - Hash tables
  - What is a hash function
  - What makes a good hash function
  - What is a hash table, how do they work and how to use them
  - What is a collision and what are the main ways of dealing with collisions in the context of a hash table
  - What are the advantages and drawbacks of using hash tables
  - What are the most common use cases of hash tables

## [0-hash_table_create.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/0-hash_table_create.c)
   A function that creates a `hash_table_t` hash table
   - Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
     - where `size` is the size of the array
   - Returns a pointer to the newly created hash table if success, otherwise returns NULL

## [1-djb2.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/1-djb2.c)
   A hash function implementing the `djb2` algorithm
   - Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

## [2-key_index.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/2-key_index.c)
   A function that gives you the index of a key
   - Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
     - where `key` is the key
     - `size` is the size of the array of the hash table
   - This function uses the `djb2` algorithm in [1-djb2.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/1-djb2.c)
   - Returns the index at which the `key/value` pair should be stored in the array of the hash table

## [3-hash_table_set.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/3-hash_table_set.c)
   A function that adds an element to a `hash_table_t` hash table
   - Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
     - where `ht` is the `hash_table_t` hash table
     - `key` is the key(cannot be an empty string)
     - `value` is the value of the `key`
   - Returns `1` if succeeded, `0` otherwise

## [4-hash_table_get.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/4-hash_table_get.c)
   A function that retrieves tha value associated with a key
   - Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
     - where `ht` is the hash table you want to look into
     - `key` is the key to be searched for
   - Returns the value associated with the `key` or `NULL` if key could not be found

## [5-hash_table_print.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/5-hash_table_print.c)
   A function that prints a `hash_table_t` hash table
   - Prototype: `void hash_table_print(const hash_table_t *ht);`
     - `ht` is the hash table
   - Prints the key/value pair in the order that tey appear in the array of the hash table in an array,list format
   - Prints nothing if `ht` is NULL

## [6-hash_table_delete.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x1A-hash_tables/6-hash_table_delete.c)
   A function that deletes a hash table
   - Prototype: `void hash_table_delete(hash_table_t *ht);`
     - where `ht` is the hash table