#ifndef MAIN_H
#define MAIN_H

/* Converts a binary umber to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

#endif /* ifndef MAIN_H */
