#include <stdio.h>
#include <stdlib.h>
#include "stack_to_queue.h"




bool init_stack(dseq_stack *p)
{
	if (p==NULL)
	{
		return false;
	}
	p->elem=(ELEM_TYPE *)malloc(sizeof(ELEM_TYPE)*MAX_SIZE);
	if (p->elem==NULL)
	{
		return false;
	}
	p->top=0;
	p->total_size=MAX_SIZE;

	return true;
}






bool push_stack(dseq_stack *p,ELEM_TYPE value)
{
	if (p==NULL)
	{
		return false;
	}
	if (p->top >= p->total_size)
	{
		p->elem=(ELEM_TYPE *)realloc(p->elem,sizeof(ELEM_TYPE)*MAX_SIZE*2);
		if (p->elem==NULL)
		{
			return false;
		}
		p->total_size=p->total_size*2;
	}
	p->elem[p->top]=value;
	p->top++;
	return true;

}


bool   pop_stack (dseq_stack *p,ELEM_TYPE *e)
{
	if (p==NULL)
	{
		return false;
	}
	if (p->top<=0)
	{
		return false;
	}
	*e = p->elem[p->top -1];
	p->top--;
	return true;;
}



bool is_empty(dseq_stack *p)
{
	if (p==NULL)
	{
		return true;
	}
	if (p->top==0)
	{
		return true;
	} 
	else
	{
		return false;
	}
	return true;
}
