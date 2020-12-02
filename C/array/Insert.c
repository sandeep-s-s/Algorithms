#include <stdio.h>
int main()
{
	int i,n,ele,x;
	int array[10]={6,7,8,9,10};
	n=5;
	int length = n;

	printf("Initial array elements ");
	
	for (int i = 0; i < n; ++i){
		printf("%d ", array[i]); /* Array elements are :*/
	}

	printf("\nEnter new element : ");
	scanf("%d",&ele);
	printf("\nEnter position of new element :");
	scanf("%d",&x);

	while(n >= x){               
	    array[n]=array[n-1];
	    n--;
	}

	array[--x] = ele;
	printf("Final array : ");
	for(int i=0; i<=length;i++){
	    printf("%d ", array[i]); 
	}
	printf("\n");
	return 0;
}
