#ifndef VA_FUNCTIONS_H
#define VA_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct type - user defined datatype to hold types of accepted argument
 * @format: variable to represent each format character
 * @print_function: function pointer to required functions
 */
/* arg_v: type definition for struct type */
typedef struct type
{
	char format;
	void (*print_function)(va_list);
} arg_v;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif /* VA_FUNCTIONS_H exists*/
