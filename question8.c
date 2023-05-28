// write a program to surch an element in array using pointr
#include <stdio.h>


int main(){
    int arr[]={12,45,54,11,2,1};
    int size=sizeof(arr)/sizeof(*arr);
   int s=0;
   int e=size-1;
   int k=54;
   while(s<=e){
   int mid=s+(e-s)/2;
   if(*(arr+mid)==k){
    printf(" index : %d",mid);
   }
   if(*(arr+mid)<k){
    s=mid+1;
   }
   else{
    e=mid-1;
   }
   
    mid=s+(e-s)/2;
   }
return 0;
}