#ifndef main_h
#define main_h

void pprint(char *str, int l);
char *multiplication(char n, char *nu, int n_index, char *dt, int _idx);
int howmanydigits(char **tty);
void ssstart(char *str, int l);
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif
