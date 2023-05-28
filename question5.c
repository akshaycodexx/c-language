#include<stdio.h>

int main(){


    int arr1[100],arr2[100];
int n;
int (*p)[100],(*q)[100];


printf(" Enter the size of the array :\n");
scanf("%d",&n);

//Entring the value from usser into the primary array
 printf("Enter the elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}

 //assign pointer to the arrays
 p=&arr1;
 q=&arr2;

 //copy arr1 to arr2 using pointers 
 for(int i=0;i<n;i++){
    (*q)[i]=(*p)[i];
 }

 //printing the primary array
 printf("pramiry array ....\n");
 for(int i=0;i<n;i++){
    printf("%d\t",(*p)[i]);
 }

 //printing the copy array 

 printf("\n copy array ....\n");
 for(int i=0;i<n;i++){
    printf("%d\t",(*q)[i]);
 }
 return 0;


}