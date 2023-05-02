#include "lists.h"

/**
 * find_listint_loop - abc
 * @sum: abc
 *
 * Return: abc
 */
listint_t *find_listint_loop(listint_t *sum)
{
	listint_t *cactus, *boolivard;

	cactus = boolivard = sum;
	while (cactus && boolivard && boolivard->next)
	{
		cactus = cactus->next;
		boolivard = boolivard->next->next;
		if (cactus == boolivard)
		{
			cactus = sum;
			break;
		}
	}
	if (!cactus || !boolivard || !boolivard->next)
		return (NULL);
	while (cactus != boolivard)
	{
		cactus = cactus->next;
		boolivard = boolivard->next;
	}
	return (boolivard);
}
