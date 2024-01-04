#include "main.h"

/**
 * *unsigned int: This indicates that the function returns an unsigned integer, representing the length of the initial segment
 * _strspn: This is the name of the function
 * (char *s, char *accept): These are the parameters. The first parameter (s) is a pointer to the string to be examined, and the second parameter (accept) is a pointer to the string containing the characters to match
 * {}: The curly braces define the body of the function, containing two nested for loops
 * f = 0;: This line initializes the count of matching characters to 0
 * for (i = 0; s[i] != '\0'; i++): This is the outer for loop that iterates through each character in the string s until the null terminator is reached
 * flag = 0;: This line initializes a flag to 0, indicating that the current character in s is not found in accept
 * for (j = 0; accept[j] != '\0'; j++): This is the inner for loop that iterates through each character in the string accept to check for a match
 * if (s[i] == accept[j]): This condition checks if the current character in s matches the current character in accept
 * f++;: If there is a match, the count of matching characters is incremented
 * flag = 1;: The flag is set to 1 to indicate a match
 * if (flag == 0): This condition checks if the flag is still 0 after the inner loop, indicating that the current character in s was not found in accept
 *
 * return (f);: If the current character in s is not in accept, the function returns the count of matching characters
 * return (0);: If the end of s is reached without finding a character not in accept, the function returns the final count of matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
