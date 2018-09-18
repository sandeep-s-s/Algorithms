#include<stdio.h>
int main()
{
	int n,i,j;
	int a[10];
	printf("Enter size of an array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	printf("Array elements are : ");
	for (int i = 0; i < n; ++i) {
		printf("%d ",a[i]);
	}
	printf("\nArray elements after sorting : ");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		printf("%d ",a[i]);
	}

	return 0;
}