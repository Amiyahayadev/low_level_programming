#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *s);
int _isdigit(int n);
int multiply(int a, int b);
int _putchar(char c);
void print_int(int num);
void *create_array(unsigned int nmemb, unsigned int size);
void print_error(void);

#endif /*MAIN_H already exists*/
