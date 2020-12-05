#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,ele,x;
	int array[10]={6,7,8,9,10};
	n=5;

	printf("Initial array elements ");
	
	for (int i = 0; i < n; ++i){
		printf("%d ", array[i]); /* Array elements are :*/
	}

	printf("\nEnter position of element to update : ");
	scanf("%d",&x);

	if(x>n){
		printf("Array index out of bound \n");
		exit(0);
	}

	printf("Enter value :" );
	scanf("%d",&ele);
	
	array[x-1] = ele;
	
	printf("Final array : ");
	for(int i=0; i<n;i++){
	    printf("%d ", array[i]); 
	}
	printf("\n");
	return 0;
}
