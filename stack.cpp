#include "common.h"
#include "stack.h"


Stack::Stack() : top(-1)
{
}


bool Stack::push(char c)
{
	if (top >= STACK_MAX - 1)
	{
#ifdef __DEBUG_MODE__
		cout << "push error : Stack is full" << endl;
#endif
		return false;
	}
	
	data_arr[++top] = c;
	return true;
}


char Stack::pop()
{
	if (this->empty())
	{
#ifdef __DEBUG_MODE__
		cout << "pop error : Stack is empty" << endl;
#endif
		return '\0';
	}
	
	return data_arr[top--];
}


bool Stack::empty()
{
	return (top < 0);
}


void Stack::clear()
{
	top = -1;
}
