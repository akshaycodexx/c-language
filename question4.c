// write a program to input and print array element using pointer
#include<stdio.h>
#include<conio.h>
int main(){ 

int *arr;
int n;



printf("Enter the size of the array \n");
scanf("%d",&n);


printf(" ENTER THE NUMBERS \n");
for(int i=0;i<n;i++){
    scanf("%d",arr+i);
}



printf("\n printing all element of an array \n");
    for(int i=0;i<n;i++){
        printf("%d\t ",*(arr+i));
    }



}