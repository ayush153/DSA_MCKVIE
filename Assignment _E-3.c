 #include<stdio.h>
#include<ctype.h>
#define MAXSIZE 10
int tos = -1;
char stck[MAXSIZE];
void push(char x)
{
	if (tos == MAXSIZE-1)
		printf("\n Stack OVERFLOW");
	else
		 {
		 	tos++;
		 	stck[tos] = x;
		 }
}
char pop()
{
	char y = '\0';
	if(tos == -1)
		printf("\n STACK UNDERFLOW");
	else
	{
		 y = stck[tos];
		 tos--;
	}
	return y;
}
int preced(char x)
{
	int v;
	if(x=='^')
		v=100;
	else if(x=='*' || x=='/')
		 v=99;
	else if(x=='+' || x=='-')
		 v=98;
	else
		 v=97;
	return v;	
}
int main()
{
	int i=0,j=0,u = 0;
	char q[100],p[100],x;
	printf("\nEnter your infix expression,appended ) at end-");
	gets(q);
	push('(');
	while(q[i]!='\0')
	{
		if(isalpha(q[i]))
		{
			p[j]=q[i];
			j++;
		}
		else
		{
			if(q[i]=='(')
			{
				push(q[i]);
			}
			else if(q[i]==')')
			{
				x=pop();
				while(x!='(')
				{
					p[j]=x;
					j++;
					x = pop();
				}
			}
			else
			{
				while(preced(stck[tos])>=preced(q[i]))
				{
					p[j]=pop();
					j++;
				}
				push(q[i]);
			}
		}
		i++;
	}
	p[j] = '\0';
	printf("\n POSTFIX EXPRESSION IS:%s",p);
	return 0;
}






