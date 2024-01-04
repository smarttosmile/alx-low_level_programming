#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk: This is the name of the function
 * (char *s, char *accept): These are the parameters. The first parameter (s) is a pointer to the string to be searched, and the second parameter (accept) is a pointer to the string containing characters to search for
 * {}: The curly braces define the body of the function, containing two nested for loops
 * for (i = 0; *s != '\0'; i++): This is the outer for loop that iterates through each character in the string s until the null terminator is reached
 * for (j = 0; accept[j] != '\0'; j++): This is the inner for loop that iterates through each character in the string accept to check for a match
 * if (*s == accept[j]): This condition checks if the current character in s matches the current character in accept
 * return (s);: If a match is found, the function returns a pointer to the current position in s
 * s++;: This line increments the pointer s to check the next character in the outer loop
 * return (NULL);: If no match is found, the function returns NULL to indicate that no matching character was found in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
