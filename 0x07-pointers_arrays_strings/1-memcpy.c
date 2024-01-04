#include "main.h"

/**
 * *_memcpy: This is the name of the function.
 * (char *dest, char *src, unsigned int n): These are the parameters. The first parameter (dest) is a pointer to the destination memory block, the second parameter (src) is a pointer to the source memory block, and the third parameter (n) is the number of bytes to copy
 * {}: The curly braces define the body of the function, containing a for loop to iterate through the specified number of bytes
 * for (i = 0; i < n; i++): This is a for loop that iterates n times, copying each byte from the source (src) to the destination (dest)
 * dest[i] = src[i];: This line copies the byte at the current position i in the source memory block to the corresponding position in the destination memory block
 * return (dest);: The function returns the pointer dest, pointing to the beginning of the destination memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
