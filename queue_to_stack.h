#ifndef _LIST_QUEUE_H_
#define _LIST_QUEUE_H_



typedef int ELEMTYPE;


typedef struct _list_queue
{
	ELEMTYPE  elem;
	struct _list_queue *next;
}list_queue;



typedef struct _Listnode
{
	list_queue *head;
	list_queue *tail;
}node;



bool init_list_queue(node   *q);

bool is_empty(node  *q);

bool push_list_queue(node *q,ELEMTYPE e);

bool pop_list_queue(node *q,ELEMTYPE *e);

bool destroy(node *q);

bool get_head_queue(node *q,ELEMTYPE *e);

bool clear(node *q);

int my_get_length(node *q);



static list_queue * buy_node();

#endif
