/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head == NULL)
		return -1;
	else{
		int c = 0, l = 0;
		struct node *f;
		struct node *s;
		struct node *i = head;
		f = i;
		s = i;
		while (i != NULL)
		{
			l++;
			i = i->next;
		}
		if (l % 2 != 0)
		{
			while (s->next != NULL)
			{
				s = s->next->next;
				f = f->next;
			}
			return f->num;
		}
		else
		{
			while (s->next->next != NULL)
			{
				s = s->next->next;
				f = f->next;
			}
			return ((f->num + f->next->num) / 2);

		}

	}
}
