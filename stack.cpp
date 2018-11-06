#include "common.h"
#include "stack.h"


Stack::Stack() : top(-1)
{
}


bool Stack::push(char c)
{
	if (top >= 500)
	{
		cout << "Stack is full" << endl;
		return false;
	}
	
	data_arr[++top] = c;
	return true;
}


char Stack::pop()
{
	if (this->empty())
	{
		cout << "Stack is empty" << endl;
		return '\0';
	}
	
	
}
