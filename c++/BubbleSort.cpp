#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){   

    for(int i=0 ; i<n-1 ; i++){
       for(int j=0 ;j<n-i-1;j++){
           if(a[j]>a[j+1]){
               int temp = a[j+1];  
               a[j+1] = a[j]; 
               a[j] = temp;
           }

       }
    }   
}
int main() {
   int a[] = {7,4,6,2,0};
   bubbleSort(a,5);
   for(int i=0;i<5;i++){
       cout<<a[i]<<"  ";
   }
   return 0;
}