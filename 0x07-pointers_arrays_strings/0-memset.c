#include "main.h"

/**
 * *memset: This is the name of the function
 * (char *s, char b, unsigned int n): These are the parameters. The first parameter (s) is a pointer to the memory block to be filled, the second parameter (b) is the value used to fill the block, and the third parameter (n) is the number of bytes to fill.
 * {}: The curly braces define the body of the function, containing a for loop to iterate through the memory block.
 * for (i = 0; i < n; i++): This is a for loop that iterates n times, starting i from 0 and continuing until n-1.
 * s[i] = b;: This line assigns the value of b to the current position i in the specified memory block pointed to by the pointer s.
 * return (s);: The function returns the pointer s pointing to the beginning of the filled memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
