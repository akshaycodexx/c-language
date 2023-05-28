// sum_of_two_number_using pointer
#include<stdio.h>
#include<conio.h>
int main(){
    int a=20;
    int b=45;
    int *p,*q;


    p=&a;q=&b;
printf(" the value of a = %d \t\t the value of b = %d",a,b);

    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
printf("\n the value of a = %d \t\t the value of b = %d",*p,*q);

   

}