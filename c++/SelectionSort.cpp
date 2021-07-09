#include <iostream>
using namespace std;

void selectionSort(int a[],int n){
    for(int i=0 ; i<n-1 ; i++){
        int imin = i;
        for(int j=i; j<n; j++){
            if(a[j]<a[imin]){
                imin = j;
            }
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }

    
}
int main() {
   int a[] = {7,4,6,2,5};
   selectionSort(a,5);
   for(int i=0;i<5;i++){
       cout<<a[i]<<"  ";
   }
   return 0;
}