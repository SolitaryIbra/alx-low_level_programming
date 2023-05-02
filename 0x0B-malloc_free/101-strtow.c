#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
* strtow - output word splitter.
* @strname: a string
*
* Return: a Pointer
*/
char **strtow(char *strname)
{
int i, flag, length;
char **sentence;

if (strname == NULL 
|| 
strname[0] == '\0' 
|| 
(strname[0] == ' ' && strname[1] == '\0'))
return (NULL);

i = flag = length = 0;
while (strname[i])
{
if (flag == 0 && strname[i] != ' ')
flag = 1;
if (i > 0 && strname[i] == ' ' && strname[i - 1] != ' ')
{
flag = 0;
length++;
}
i++;
}

length += flag == 1 ? 1 : 0;
if (length == 0)
return (NULL);

sentence = (char **)malloc(sizeof(char *) * (length + 1));
if (sentence == NULL)
return (NULL);

util(sentence, strname);
sentence[length] = NULL;
return (sentence);
}

/**
* util - a util function for fetching words into an array
* @sentence: the strings array
* @strname: the string
*/
void util(char **sentence, char *strname)
{
int i, j, init, flag;

i = j = flag = 0;
while (strname[i])
{
if (flag == 0 && strname[i] != ' ')
{
init = i;
flag = 1;
}

if (i > 0 && strname[i] == ' ' && strname[i - 1] != ' ')
{
create_word(sentence, strname, init, i, j);
j++;
flag = 0;
}

i++;
}

if (flag == 1)
create_word(sentence, strname, init, i, j);
}

/**
* create_word - creates a word and insert it into the array
* @sentence: the array of strings
* @strname: the string
* @init: the starting index of the word
* @end: the stopping index of the word
* @index: the index of the array to insert the word
*/
void create_word(char **sentence, char *strname, int init, int end, int index)
{
int i, j;

i = end - init;
sentence[index] = (char *)malloc(sizeof(char) * (i + 1));

for (j = 0; init < end; init++, j++)
sentence[index][j] = strname[init];
sentence[index][j] = '\0';
}
