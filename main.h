#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/*
 * File - main.h
 * Author - Daniel John
 * Description: A header file containg functions used in
 * 		the printf project.
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int printf_hex_convert(unsigned long int num);
int printf_HEX_convert(unsigned int num);
int _putchar(char c);
int _puts(char *s);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_string(va_list arg);
int printf_char(va_list arg);
int printf_per37(void);
int printf_int(va_list arg);
int printf_deci(va_list arg);
int printf_strev(va_list arg);
int printf_rot13(va_list arg);
int printf_bin(va_list arg);
int printf_unsigned(va_list arg);
int printf_octal(va_list arg);
int printf_hex(va_list arg);
int printf_HEX(va_list arg);
int printf_exclusive_str(va_list arg);
int printf_address(va_list arg);


#endif
