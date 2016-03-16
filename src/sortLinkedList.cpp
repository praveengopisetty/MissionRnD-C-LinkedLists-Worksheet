/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*p1, *p2;

struct node * sortLinkedList(struct node *head) {
	int temp;
	if (head == NULL)
	{
		return NULL;
	}
	for (p1 = head; p1->next != NULL; p1 = p1->next)
	{
		for (p2 = p1->next; p2 != NULL; p2 = p2->next)
		{
			if (p1->num > p2->num)
			{
				temp = p1->num;
				p1->num = p2->num;
				p2->num = temp;
			}
		}
	}
	return head;
}