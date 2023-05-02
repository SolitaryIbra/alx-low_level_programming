#include "lists.h"

/**
 * sum_listint - abc
 * @num: abc
 *
 * Return: abc
 */
int sum_listint(listint_t *num)
{
int vardic = 0;

while (num != NULL)
{
vardic += num->n;
num = num->next;
}
return (vardic);
}
