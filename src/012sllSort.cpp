/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
}*t1,*t2;

void sll_012_sort(struct node *head){
	int temp;
	t1 = head;
	for (; t1->next != NULL; t1 = t1->next)
	{
		for (t2 = t1->next; t2 != NULL; t2 = t2->next)
		{
			if (t1->data > t2->data)
			{
				temp = t1->data;
				t1->data = t2->data;
				t2->data = temp;
			}
		}
	}
}