/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

	struct node * insertAtEveryKthNode(struct node *head, int K) {
		if (head == NULL)
			return NULL;

		struct node *i = head;
		int l = 0, s = 0;
		while (i != NULL)
		{
			i = i->next;
			l++;
		}
		if (K <= 0)
			return NULL;
		else if (K > l)
			return head;
		else
		{
			i = head;
			for (s = K; i != NULL; s--, i = i->next)
			{

				if (s == 1){
					struct node *n = (struct node*)malloc(sizeof(struct node));
					n->num = K;
					n->next = i->next;
					i->next = n;
					s = K + 2;

				}
			}
			return head;
		}

}
