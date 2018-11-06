#include "common.h"
#include "stack.h"
#include <cstring>


bool ParenthesisMatch(const char *);


int main()
{
	
	
	return 0;
}


bool ParenthesisMatch(const char * szParam)
{
	Stack strStack;
	int szLen = strlen(szParam);
	char ch;
	
	for (int i = 0; i < strlen; i++)
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
