#ifndef MAIN_H
#define MAIN_H

/* Converts a binary umber to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Returns the number of bits you would need to fliep to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* ifndef MAIN_H */
