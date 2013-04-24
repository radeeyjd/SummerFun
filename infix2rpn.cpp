#include <iostream>
#include "Stack.h"
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

string infix2RPN(string);

int main()
{
	string s_expression;
	cout << "Enter an infix expression";
	cin >> s_expression;
	cout << infix2RPN(s_expression);
}

string infix2RPN(string s_exp)
{
	char token
	     ,toptoken;
	Stack ops;
	ostringstream s_RPN_exp;
	for(int iii = 0; iii < s_exp.length(); iii++)
	{
		token = s_exp[iii];
		switch(token)
		{
			case ' ': 
				break;

			case '(':
				ops.push(token);
				break;
			
			case ')':
				for( ; ;)
				{
					if(!ops.empty())
					{
						toptoken = ops.pop();
						if(toptoken == '(') break;
						s_RPN_exp << toptoken;
					}
				}
				break;
			
			case '*': case '/': case '+': case '-':
				for( ; ; )
				{
					if( ops.empty() || ops.top() == '(' || 
					  	(( token == '*' || token == '/') && 
							(ops.top() == '+' || ops.top() == '-')))
					{
						ops.push(token);
						break;
					}
					else
					{
						toptoken = ops.pop();
						s_RPN_exp << toptoken;
					}
				}
				break;

			default:
				s_RPN_exp << token;
		}
	}

	for( ; ;)
	{
		if( ops.empty() )
			break;
		
		toptoken = ops.pop();
		if( toptoken != '(')
			s_RPN_exp << toptoken;
		else
		{
			cerr << "Malformed expression";
			break;	
	}	}

return s_RPN_exp.str();
}


