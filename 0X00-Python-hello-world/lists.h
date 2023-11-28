#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Node structure for a singly linked list
 * @n: Integer data of the node
 * @next: Pointer to the next node in the list
 *
 * Description: Defines a singly linked list node structure
 *			for a Holberton project.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Adds a new node with given data at the beginning of a list
 * @head: Pointer to the pointer of the head of the list
 * @n: Data for the new node
 * Return: Pointer to the new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Frees the memory allocated for a linked list
 * @head: Pointer to the head of the linked list
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Checks if a linked list has a cycle
 * @list: Pointer to the head of the linked list
 * Return: 1 if a cycle is detected, 0 otherwise
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
