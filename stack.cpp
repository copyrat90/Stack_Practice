#include "common.h"
#include "stack.h"


Stack::Stack() : top(-1)
{
}


bool Stack::push(char c)
{
	if (top >= 500)
	{
		// cout << "push error : Stack is full" << endl;
		return false;
	}
	
	data_arr[++top] = c;
	return true;
}


char Stack::pop()
{
	if (this->empty())
	{
		// cout << "pop error : Stack is empty" << endl;
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
