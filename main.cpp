#include "common.h"
#include "stack.h"
#include <cstring>


bool ParenthesisMatch(const char *);


int main()
{
	char szInput[2*STACK_MAX + 1];
	cin.getline(szInput, 2*STACK_MAX + 1);
	
	if (ParenthesisMatch(szInput))
		cout << "match" << endl;
	else
		cout << "mismatch" << endl;
	
	return 0;
}


bool ParenthesisMatch(const char * szParam)
{
	Stack strStack;
	int szLen = strlen(szParam);
	char ch;
	
	for (int i = 0; i < strlen(szParam); i++)
	{
		switch(szParam[i])
		{
		case '(': case '{': case '[':
			strStack.push(szParam[i]);
			break;
			
		case ')':
			if (strStack.pop() != '(')
				return false;
			break;
			
		case '}':
			if (strStack.pop() != '{')
				return false;
			break;
			
		case ']':
			if (strStack.pop() != '[')
				return false;
			break;
		}
	}
	
	return strStack.empty();
}
