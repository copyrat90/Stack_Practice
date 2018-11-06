#ifndef __STACK_H__
#define __STACK_H__

#include "common.h"

class Stack
{
public:
	Stack();
	bool push(char);
	char pop();
	bool empty();
	void clear();
	
private:
	char data_arr[STACK_MAX];
	int top;  // ���� �� ���� �ε���, ������ ��������� -1
};

#endif  // __STACK_H__
