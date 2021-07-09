#include<stdio.h>
void binarySearch(int a[],int low,int high,int key);
int main()
{
	int i=0,n,key;
	int a[10];
	int low,high;
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("Enter arry in sorted order : ");
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched : ");
	scanf("%d",&key);
	low=0;
	high=n;
	binarySearch(a,low,high,key);
	return 0;
}

/* Recursive function for comparison */
void binarySearch(int a[],int low,int high,int key) 
{
	int mid=(high+low)/2;
	if(a[mid]==key) { 
		printf("Found at postion : %d",mid+1);
		return ;
	}

	if(key>a[mid]){
		low=mid+1;
	} else {
		high=mid-1;
	}

	if(low > high){
		printf("Element not found");
		return ;
	}
	binarySearch(a,low,high,key);
}
