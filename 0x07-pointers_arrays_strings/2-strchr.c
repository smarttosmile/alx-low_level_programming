#include "main.h"
#include <stdio.h>

/**
 * *_strchr: This is the name of the function
 * (char *s, char c): These are the parameters. The first parameter (s) is a pointer to the string to be searched, and the second parameter (c) is the character to search for
 * {}: The curly braces define the body of the function, containing a while loop that continues indefinitely (while (1))
 * a = *s++;: This line retrieves the value at the current position pointed to by s and increments the pointer s to the next position
 * if (a == c): This condition checks if the retrieved character a is equal to the target character c
 * return (s - 1);: If the target character is found, the function returns a pointer to the position in the string where the character was found (s - 1 compensates for the increment in the previous line)
 * if (a == 0): This condition checks if the retrieved character is the null terminator (ASCII 0), indicating the end of the string
 * return (NULL);: If the end of the string is reached without finding the target character, the function returns NULL to indicate that the character was not found in the string
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
