/* SYSC 2006 Lab 11 
   Name: Joshua Noronha
   ID: 101194076
 */

#include <assert.h>				// assert
#include <stdlib.h>				// malloc, free
#include <stdbool.h>
#include <stdio.h>				// printf

#include "sl_list.h"

/*************************************************************
 * Functions presented in lectures.
 *************************************************************/

/* Return a pointer to a new intnode_t (a node in a singly-linked list).

   Parameter value: the integer to be stored in the node.
   Parameter next: a pointer to the node that the new node should point to.
   This pointer should be NULL if the new node is the last node in the 
   linked list.
   Terminate (via assert) if memory for the node cannot be allocated.
 */
intnode_t * intnode_construct(int value, intnode_t * next)
{
	intnode_t * p = malloc(sizeof(intnode_t));
	assert(p != NULL);
	p->value = value;
	p->next = next;
	return p;
}
/* Parameter head points to the first node in a linked list, or is NULL
   if the linked list is empty. Insert a node containing the specified 
   integer value at the front of the linked list, and return a pointer to 
   the first node in the modified list.
 */
intnode_t * push(intnode_t * head, int value)
{
	return intnode_construct(value, head);
}

/* Parameter head points to the first node in the list.
   Return the length of a linked list (0 if the linked list is empty). 
 */
int length(intnode_t * head)
{
	int count = 0;
	for (intnode_t * current = head; current != NULL; current = current->next) {
		count += 1;
	}
	return count;
}

/* Parameter head points to the first node in a linked list.
   Print the linked list, using the format:
   value1 -> value2 -> value3 -> ... -> last_value
 */
void print_list(intnode_t * head)
{
	if (head == NULL) {
		printf("empty list");
		return;
	}

	intnode_t * current;

	/* Print every node in the linked list except the last one.

	   Notice that the loop condition is:
	   current->next != NULL
	   and not:
	   current != NULL

	   During the last iteration, the value in the second-last node is
	   printed, then current is updated to point to the last node. The
	   condition current->next != NULL now evaluates to false, so the 
	   loop exits, with current pointing to the last node (which has  
	   not yet been printed.) 
	 */
	for (current = head; current->next != NULL; current = current->next) {
		printf("%d -> ", current->value);
	}

	/* Print the last node. */
	printf("%d", current->value);
}

/*****************************************************************
 * Solutions to Lab 11
 *****************************************************************/

// Exercise 1

intnode_t * add(intnode_t * head, int elem, int index)
{
	intnode_t * temp = head;
	intnode_t * new = head;
	if (head == NULL) {
		if (index == 0) {
			head = intnode_construct(elem, NULL);
			return head;
		}
		assert(head != NULL);

	}

	else if (head != NULL) {
		if (index == 0) {
			temp = intnode_construct(elem, NULL);
			temp->next = head;
			return temp;
		} else if (index > 0 && index < length(head)) {
			temp = intnode_construct(elem, NULL);
			for (int i = 0; i < index - 1; i++) {
				new = new->next;
			}
			temp->next = new->next;
			new->next = temp;
			return head;
		}

		else if (index == length(head)) {
			while (temp != NULL) {
				temp = temp->next;
			}
			for (int i = 0; i < index - 1; i++) {
				new = new->next;
			}

			temp = intnode_construct(elem, NULL);
			new->next = temp;
			return head;

		} else {
			assert(head != NULL);
		}

	}

	return head;
}

// Exercise 2

void every_other(intnode_t * head)
{
	intnode_t * temp = head;
	intnode_t * del = head;
	int len = length(head);
	for (int i = 1; i < len; i = i + 2) {
		del = temp->next;
		temp->next = del->next;
		free(del);
		temp = temp->next;
	}

}
