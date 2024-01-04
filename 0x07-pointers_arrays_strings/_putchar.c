#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)//int: This specifies the return type of the function. In this case, the function returns an integer
{
	return (write(1, &c, 1));//return write(1, &c, 1);: This line contains the code that actually performs the main action of the function. It uses the write system call to write the character c to the standard output (1 represents stdout). The function returns the value returned by the write system call, which is the number of bytes written (or an error code if there was an issue)
}
