//write a program to add two 2 X 2 matrix using pointer

#include<stdio.h>

void displaymat(int (*mat)[2]){
 for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++){
            
         printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
int main(){
    int MatrixA[2][2]={{1,2},{3,4}};
    int matrixB[2][2] = {{5, 6}, {7, 8}};
    int ans[2][2];
printf("\n Sum of the matrix: \n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        ans[i][j]=MatrixA[i][j]+matrixB[i][j];
    }
    
}


   displaymat(ans);
    

}