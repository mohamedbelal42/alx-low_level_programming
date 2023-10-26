#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 * @head: linked list to search
 * Return: address of node where loop starts/reurns, NULLis no loop 
 */

listint_t *fint_listint_loop_fl(listint_t *head)
{


size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = 
