#include<stdio.h>
int memo[50]; //For Memoization
int result;
int fibonacci(int memo[],int n) //recursive function for computing nth fibonacci number
{
	
	if(memo[n]!=-1){
		return memo[n];
	}
	if(n<=1)
		result = n;
	else
		result=fibonacci(memo,n-1)+fibonacci(memo,n-2);
	memo[n]=result;
	return result;
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
	if(isPositiveNumber(n)){
		for (int i = 0; i <=n+1; ++i){
			memo[i]=-1;
		}
		printf("%d th fibonacci number : %d \n",n,fibonacci(memo,n));
	}
	else
		printf("Expected number is be Postive\n");
	return 0;
}
