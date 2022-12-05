// WAP to print multiplication of matrices A & B
#include<stdio.h>
#include<conio.h>

void main(){
    int A[2][2], B[2][2], C[2][2]; // Matrices A, B & C
    int i, j; // Iterators
    //Input matrix A
    printf(">>Enter elements of matrix A : ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    //Input matrix B
    printf(">>Enter elements of matrix B : ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d",&B[i][j]);
        }
    }
    //Ouput matrix A
    printf("Matrix A :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //Ouput matrix B
    printf("Matrix B :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Calculating multiplication of A & B
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            C[i][j] = A[i][j]*B[i][j];
        }
    }
    // Output matrix C
    printf("Multiplication of A & B :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}