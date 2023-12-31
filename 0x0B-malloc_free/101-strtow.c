#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
* strtow - splits a string into words.
* @str: the string
*
* Return: returns a pointer to an array of strings (words)
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

   words = (char **) malloc(sizeof(char *) * (len + 1));
   if (words == NULL)
	   return (NULL);

   util(words, str);
   words[len] = NULL;
   return (NULL);
}

/**
* util - a util function for fetching words into an array
* @words: the strings array
* @str: the string
*/
void util(char **words, char *str)
{
	int x, y, start, flag;

	x = y = flag = 0;
	while (str[x])
	{
		if (flag == 0 && str[x] != ' ')
		{
			start = x;
			flag = 1;
		}
		x++;
	}

	if (flag == 1)
		create_word(words, str, start, x, y);
}

/**
* create_word - creates a word and insert it into the array
* @words: the array of strings
* @str: the string
* @start: the starting index of the word
* @end: the stopping index of the word
* @index: the index of the array to insert the word
*/
void create_word(char **words, char *str, int start, int end, int index)
{
	int a, b;

	a = end - start;
	words[index] = (char *)malloc(sizeof(char) * (1 + a));

	for (b = 0; start < end; start++, b++)
		words[index][b] = str[start];
	words[index][b] = '\0';
}
