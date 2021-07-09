#include <stdio.h>
int main(int argc, char const *argv[])
{
	int count,i,j,key;
	int a[10];

	printf("Enter size of an array : ");
	scanf("%d",&count);

	printf("Enter array elements : ");
	for (int i = 0; i < count; i++) {
		scanf("%d",&a[i]);
	}

	printf("Array elements are : ");
	for (int i = 0; i < count; ++i) {
		printf("%d ",a[i]);
	}


	for (int j = 1; j < count; j++) { // Insertion sort begins here
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){  
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}

	printf("\nAfter sorting : ");
	for (int i = 0; i < count; ++i) {
		printf("%d ",a[i]);
	}

	return 0;
}
