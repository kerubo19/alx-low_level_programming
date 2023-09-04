#include "main.h"


/**
 * strtow - split a string
 * @str: string
 *
 * Return: NULL if str == 0 || *str == ' '
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i + 1] == ' '))
		{
			word_count++;
		}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;
		for (k = 0; str[j + k] != ' ' && str[j + k]; k++)
			;
		words[i] = malloc(sizeof(char) * (k + 1));
		if (words[i] == NULL)
			return (NULL);

		strncpy(words[i], str + j, k);
		words[i][k] = '\0';
		j += k;
	}
	words[i] = NULL;
	return (words);
}
