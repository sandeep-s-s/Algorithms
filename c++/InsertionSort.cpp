#include <iostream>
using namespace std;

void InserionSort(int a[],int n){    
    for(int i=1 ; i<n ; i++){
        
        int j=i-1;
        int element = a[i];
        while(j>=0 && element < a[j]){ 
            a[j+1] = a[j];
            j--;
        } 
        a[j+1]=element;

    }
}
int main() {
   int a[] = {1,0,8,3,5};
   InserionSort(a,5);
   for(int i=0;i<5;i++){
       cout<<a[i]<<"  ";
    }
   return 0;
}



