/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	if (head1==NULL)
			return head2;
	if (head2 == NULL)
			return head1;
	
		struct node *head = (struct node*)malloc(sizeof(struct node));
		head = NULL;
		struct node *i = head;
		while (head1 != NULL&&head2 != NULL)
		{
			if (head1->num <= head2->num)
			{
				struct node *n = (struct node*)malloc(sizeof(struct node));
				n->num = head1->num;
				n->next = NULL;
				head1= head1->next;
				if (head == NULL){
					head = n;
					i = n;
				}
				else{
					i->next = n;
					i = n;
				}
				
			}
			else if (head1->num >= head2->num)
			{
				struct node *n = (struct node*)malloc(sizeof(struct node));
				n->num = head2->num;
				n->next = NULL;
				head2 = head2->next;
				if (head == NULL){
					head = n;
					i = n;
				}

				else{
					i->next = n;
					i = n;
				}
			}
			

		}
		while (head1 != NULL)
		{
			struct node *n = (struct node*)malloc(sizeof(struct node));
			n->num = head1->num;
			n->next = NULL;
			head1 = head1->next;
			if (head == NULL)
			{
				head = n;
				i = n;
			}
			else{
				i->next = n;
				i = n;
			}
		}
		while (head2!=NULL)
		{
			struct node *n = (struct node*)malloc(sizeof(struct node));
			n->num = head2->num;
			n->next = NULL;
			head2 = head2->next;
			if (head == NULL)
			{
				head = n;
				i = n;
			}
			else{
				i->next = n;
				i = n;
			}
		}
		return head;
	
}
