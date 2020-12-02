#include <stdio.h>
int main()
{
	int i,n;
	int array[10];
	printf("Enter array limit : "); 
	scanf("%d",&n); /* Read array limit */
	printf("Enter array elements : "); 
	for (int i = 0; i < n; ++i){
		scanf("%d",&array[i]); /* Read array elements */
	}

	for (int i = 0; i < n; ++i){
		printf("%d Visited \n", array[i]); /* Display array elements */
	}
	return 0;
}