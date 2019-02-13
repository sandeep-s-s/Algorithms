#include <stdio.h>
int main()
{
	int i,n,key,flag=0,j=0;
	int array[10],position[5];
	printf("Enter the array limit : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for (int i = 0; i < n; ++i) {
		scanf("%d",&array[i]);
	}
	printf("Enter key to be searched : ");
	scanf("%d",&key);
	for (i = 0; i < n; ++i) { /* loop for comparison */
		if (array[i]==key){
			position[j]=i+1;
			j++;
			flag=1;
		}
	}

	if(flag==1){
		printf("Element found at positions : ");
		for (int i = 0; i < j; ++i){
			printf("%d ",position[i]);
		}
	} else {
		printf("Not found");
	}
}