#include <stdio.h>

void fibo(int,int,int);

int main()
{
	int a;
	printf("\n Enter the number of term: ");
	scanf("%d",&a);
	printf("\n Your Fibonacci series is : ");
	fibo(0,1,a);
	return 0;
}

void fibo(int a, int b,int n)
{
	if(n > 0)
	{
		printf("%d ",a);
		fibo(b,a+b,n-1);
	}
return 1;
}



 
