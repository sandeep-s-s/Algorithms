#include<stdio.h>
int fibonacci(int n) //recursive function for computing nth fibonacci number
{
	if(n<=1)
		return(n);
	return (fibonacci(n-1)+fibonacci(n-2));
}

int isPositiveNumber(int n)
{
	return n>0;
}

int main()
{
	int n;
	printf("Input number : ");
	scanf("%d",&n);
	if(isPositiveNumber(n))
		printf("%d th fibonacci number : %d \n",n,fibonacci(n));
	else
		printf("Expected number is be Postive\n");
	return 0;
}
