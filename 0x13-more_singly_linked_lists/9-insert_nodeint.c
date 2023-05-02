#include "lists.h"

/**
 * insert_nodeint_at_index - xyz
 * @head: xyz
 * @idx: xyz
 * @n: xyz
 *
 * Return: xyz
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int shaliba;
    listint_t *new_node, *current_node;

    /* xyz */
    if (head == NULL)
        return (NULL);

    /* xyz */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;

    /* xyz */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* xyz */
    current_node = *head;
    for (shaliba = 0; shaliba < idx - 1 && current_node != NULL; shaliba++)
        current_node = current_node->next;

    /* xyz */
    if (current_node == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* xyz */
    new_node->next = current_node->next;
    current_node->next = new_node;

    return (new_node);
}
