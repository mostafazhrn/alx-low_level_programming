#ifndef VARIDAC_H
#define VARIDAC_H
#include <stdio.h>
#include <stdarg.h>

/**
 *struct format - this is print of struct
 *@pt: this represent the struct
 *@fu: this represent the func
 */
typedef struct format
{
char *pt;
void (*fu)(va_list all);
} fu;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
