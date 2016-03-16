/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*present,*prev,*temp;

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K <= 0)
	{
		return NULL;
	}
	if (K == 1)
	{
		head = NULL;
		return head;
	}

	
	present = head;
	int count = 0, i = 0;

	while (present != NULL)
	{
		count++; 
		present = present->next;
	}

	if (count < K)
	{
		return head;
	}

	else
	{
		temp = head;
		prev = temp;

		for (i = 1; i <= count; i++){
			if (i%K == 0)
			{
				prev->next = temp->next;
			}

			prev = temp;
			temp = temp->next;
		} 

	} 
	return head;
}
