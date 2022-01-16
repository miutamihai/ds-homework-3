#include <iostream>
#include <cstring>

using namespace std;

char expr[200], p[200];
int i , ls, lp;

void transformExpression()
{
	transformTerm();
	while (i < ls && expr[i] == '+')
	{
		i++;
		transformFactor();
		p[lp++] = '+';
	}
}
void transformFactor()
{
	if (expr[i] == '(')
	{
		i++;
		transformExpression();
		i++;
	}
	else
		p[lp++] = expr[i++];
}
void transformTerm()
{
	transformFactor();
	while (i < ls && expr[i] == '*')
	{
		i++;
		transformFactor();
		p[lp++] = '*';
	}
}
