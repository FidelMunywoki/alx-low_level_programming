#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 *_isupper - prints 1 if alphabet is uppercase and 0 otherwise
 * @c: alphabet to be checked
 *Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 *_isdigit - function that checks for a digit (0-9)
 *@c: digit to be checked
 *Return: 1 if true, 0 if false
 */


int _isdigit(int c);

/**
 * mul - multiplies two digits
 * @a: digit 1
 * @b: digit 2
 * Return: multiplication of the two digits
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers 0-9 followed by newline using _putchr
 * Return: 0 to 9
 * Description: You can only use _putchar twice
 */

void print_numbers(void);

/**
 * print_most_numbers - prints numbers from 0-9 except 2 and 4
 * Description: use _putchar
 * Return: 0-1, 3, 5-9
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by newline
 * Description: You can only use _putchar
 * Return: 0-14 ten times\
 */

void more_numbers(void);

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */

void print_line(int n);

/**
 * print_diagonal - prints a doagonal line of length n
 * @n: Lenth of the diagonal line
 */
void print_diagonal(int n);

/**
 * print_square - use # to print a box given the size input
 * @size: size of the box you need to print out:
 * Return: void
 */
void print_square(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);
#endif
