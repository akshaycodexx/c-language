
//write a program to reverse an array using pointers
#include<stdio.h>

int main(){ 
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(*arr);
int *s=arr;
int *e=arr+size-1;

printf(" Your Enter data is \n");

for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);

}
printf("\n");
while(s<e){
    int temp=*s;
    *s=*e;
    *e=temp;
    s++;
    e--;
}

printf(" Your Reversed data is \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);

}


    return 0;
}