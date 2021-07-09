#include<stdio.h>
#include<string.h>
char stack[50];
char str[50];
int top =-1;

void push(char operator)
{
	stack[++top] = operator;
}

int isEmpty() 
{ 
	return top < 0;
}

char pop()
{
	if(!isEmpty())
		return stack[top--];
}

//String Reversal Using Stack
int main(int argc, char const *argv[])
{
	printf("Enter string : ");
	scanf("%s",str);
	for (int i = 0; str[i]!='\0' ; ++i){
		push(str[i]);
	}

	printf("Reversed string is : ");
	int i=0;
	while(!isEmpty()){
		str[i]=pop();
		i++;
	}
	puts(str);
	return 0;
}