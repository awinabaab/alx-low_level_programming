#include "main.h"
#include <stdlib.h>
#include <string.h>

int word_count(char *);
void alloc(char **, char *);

/**
 * word_count - Counts the number of words in a string
 * @str: String of words to be counted
 *
 * Return: Number of words in @str
 */

int word_count(char *str)
{
	int count = 0, trigger = 0;

	while (*str != '\0')
	{
		if (*str != 32 && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*str == 32)
			trigger = 0;
		str++;
	}

	return (count);
}

/**
 * alloc - Allocates memory for a 2D array and
 * copies words in a string into an array
 * @grid: 2D array to store the words of @str
 * @str: String of words to be copied
 *
 * Return: void
 */

void alloc(char **grid, char *str)
{
	int sub = 0, index, start = 0, end = 0, len;

	while (str[start] != '\0')
	{
		while (str[start] == 32)
		{
			start++;
		}
		end = start;
		while (str[end] != '\0' && str[end] != ' ')
			end++;
		if (end > start)
		{
			len = end - start;

			grid[sub] = malloc((len + 1) * sizeof(char));
			if (grid[sub] == NULL)
			{
				for (index = 0; index < sub; index++)
					free(grid[index]);
				free(grid);
			}
			strncpy(grid[sub], str + start, len);
			grid[sub][len] = '\0';
			sub++;
			start = end;
		}
	}
	grid[sub] = NULL;
}

/**
 * strtow - Splits string into words
 * @str: String to be split
 *
 * Return: Pointer to @str
 */

char **strtow(char *str)
{
	char **split;
	int wordcount;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordcount = word_count(str);
	if (wordcount == 0)
		return (NULL);

	split = malloc(sizeof(*split) * wordcount + 1);
	if (split == NULL)
		return (NULL);
	alloc(split, str);

	return (split);
}
