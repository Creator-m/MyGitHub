#ifndef STACK_TO_QUEUE_H
#define STACK_TO_QUEUE_H




#define  MAX_SIZE 10
typedef int ELEM_TYPE;

typedef struct _dseq_stack
{
	ELEM_TYPE *elem;
	int top;
	int total_size;

}dseq_stack;



bool init_stack(dseq_stack *s);

bool push_stack(dseq_stack *s, int value);

bool pop_stack(dseq_stack *s ,ELEM_TYPE *e);

bool is_empty(dseq_stack*s);
#endif
