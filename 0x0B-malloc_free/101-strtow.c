#include "main.h"
#include <stdlib.h>

void uti(char **, char *);
void cree(char **, char *, int, int, int);

/**
 * strtow -sqtr
 * @str: stirng
 * Return: char*
 */

char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	uti(words, str);
	words[len] = NULL;
	return (words);
}
/**
 * uti -d.,lw
 * @words: words
 * @str: string
 * Return: void
 */

void uti(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			cree(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		cree(words, str, start, i, j);
}

/**
 * cree -3d;[ep
 * @words: dle;lfe
 * @str: wdlpd
 * @start: sjide
 * @end: oskwl
 * @index: dle;lf
 */

void cree(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}

