#include <stdio.h>
int main()
{
	int i;
	int n;
	int array[10];
	printf("Enter array limit : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for (int i = 0; i < n; ++i){
		scanf("%d",&array[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d Visited \n", array[i]);
	}
	return 0;
}