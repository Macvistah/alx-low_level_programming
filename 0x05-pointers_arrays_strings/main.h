#include <unistd.h>
#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
	void reset_to_98(int *n);
	void swap_int(int *a, int *b);
	int _strlen(char *s);
	void _puts(char *str);
	void print_rev(char *s);
	void rev_string(char *s);
	void puts2(char *str);
	void puts_half(char *str);
	void print_array(int *a, int n);
	char *_strcpy(char *dest, char *src);
#endif
