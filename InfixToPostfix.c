#include<stdio.h>
#include<string.h>
char infix[50];
char postfix[50];
char stack[50];
int top =-1;
int i=0,j=0;

int priorty(char operator)
{
	switch (operator){
		case '+' : 
		case '-' : return 1; break;
		case '*' :  
		case '/' : return 2; break;
		case '^' : return 3; break;
	}
	return -1;
} 

int isEmpty() 
{ 
	return top < 0;
}

int isOperand(char operand)
{
	return (operand >= 'a' && operand <= 'z') || (operand >= 'A' && operand <= 'Z');
}

char peek()
{
	return stack[top];
}


void push(char operator)
{
	stack[++top] = operator;
}

char pop()
{
	if(!isEmpty())
		return stack[top--];
}

void postfix_string(char value)
{
	postfix[j++]=value;
}


void infixToPostfix()
{
	char item;
	while(infix[i] != '\0'){
		item=infix[i];
		if(isOperand(item)){
			postfix_string(item);
		} else {

			switch (item){
				case '(': 			
						push(item);
						break;

				case ')': 
						while(!isEmpty() && peek()!= '('){
							postfix_string(pop());
						} 
						pop();
						break;
				case '+':
				case '-':
				case '*':
				case '/':
				case '^':
						while(!isEmpty() && (priorty(peek()) >= priorty(item))){
							postfix_string(pop());
						} 
						push(item);
						break;
			}
		}
		i++;
	}
	while(!isEmpty()){
		postfix_string(pop());
	}
	postfix_string('\0');
}


int main()
{
	printf("Enter the Infix Expression : ");
	scanf("%s",infix);
	infixToPostfix();
	printf("Required Postfix Expression : ");
	puts(postfix);
	return 0;
}