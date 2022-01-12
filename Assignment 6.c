#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define MAXSIZE 10
int stck[MAXSIZE],tos=-1;
void push(int x)
{
  if(tos==MAXSIZE-1)
  {
    printf("\n Stack Overflow");
  }
  else
  {
    tos++;
    stck[tos]=x;
  }
}
int pop()
{
  int y=-1;
  if(tos==-1)
    printf("\n Stack empty");
  else
  {
    y=stck[tos];
    tos--;
  }
  return y;
}
int main()
{
  char p[100];
  int i=0,val,x,y,z;
  printf("\n Enter the postfix expression: ");
  gets(p);
  while(p[i]!='\0')
  {
    if(isalpha(p[i]))
    {
      printf("\n Enter the value for operand %c: ",p[i]);
      scanf("%d",&val);
      push(val);
    }
    else
    {
      x=pop();
      y=pop();
      switch(p[i])
      {
        case '+':
          z=y+x;
          break;
        case '-':
          z=y-x;
          break;
        case '*':
          z=y*x;
          break;
        case '/':
          z=y/x;
          break;
        case '%':
          z=y%x;
          break;
        case '^':
          z=pow(y,x);
          break;
      }
      push(z);
    }
    i++;
  }
  printf("\n The evaluated result of postfix expression = %d",stck[tos]);
  return 0;
}

