#include <stdio.h>
#include <stdlib.h>
#include "queue_to_stack.h"



static list_queue * buy_node()

{
	list_queue *tmp=(list_queue *)malloc(sizeof(list_queue )*1);
	if (tmp==NULL )
	{
		return false;
	}

	return tmp;

}


bool init_list_queue(node *q)
{
	if (q==NULL)
	{
		return false;
	}

	list_queue *p=buy_node();
	if (p==NULL)
	{
		return false;
	}

	q->head=NULL;
	q->tail=NULL;
	return true;

}



bool push_list_queue(node *q,ELEMTYPE val)
{
	if (q==NULL)
	{
		return false;
	}

	list_queue *p=buy_node();
	if (p==NULL)
	{
		return false;
	}

	if (is_empty(q))
	{
		q->head=p;
		q->tail=p;
		p->elem=val;
		return true;
	}
	else
	{
		q->tail->next=p;
		q->tail=p;
		p->elem=val;
		return true;

	}

	return true;

}


bool pop_list_queue(node *q,ELEMTYPE *e)
{
	if (q==NULL)
	{
		return false;
	}
	if (is_empty(q))
	{
		return false;
	}

	list_queue *p=q->head;
	*e=p->elem;
	q->head=q->head->next;
	free(p);
	return true;

}






bool is_empty(node  *q)
{
	if (q==NULL)
	{
		return false;
	}
	if (q->head==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

	return true;
}




bool destroy(node *q)
{
	if (q==NULL)
	{
		return false;
	}
	q->head=NULL;
	q->tail=NULL;
	free(q);

	return true;
}



int my_get_length(node *q)
{
	int count=0;
	if (q==NULL)
	{
		return false;
	}
	while(q->tail->next!=NULL)
	{
		count++;
	}
	return count;
}



bool clear(node *q)
{
	if (q==NULL)

	{
		return false;
	}
	q->head=NULL;
	q->tail=NULL;
	return true;


}
