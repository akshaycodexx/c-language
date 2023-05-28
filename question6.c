//swap a two array using pointers 
#include<stdio.h>

void swapArray(int *arr1,int *arr2,int n){
    for(int i=0;i<n;i++){
        int temp=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
    }
}



int main(){
int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10};
int size=sizeof(arr1)/sizeof(*arr1);

printf(" Before swiping the array \n");
printf(" first Array : \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr1[i]);

}
printf("\n Second Array : \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr2[i]);

}

swapArray(arr1,arr2,size);


printf("\n Aftar swiping the array \n");
printf("\n first Array : \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr1[i]);

}
printf("\n Second Array : \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr2[i]);

}



}