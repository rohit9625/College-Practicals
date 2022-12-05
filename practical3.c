// WAP to print addition of two matrices
#include<stdio.h>
#include<conio.h>

void main(){
    int A[2][2], B[2][2], C[2][2]; // Matrices
    int i, j;
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
    //Output matrix A
    printf("\nMatrix A :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //Output matrix B
    printf("\nMatrix B :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Calculating Addition of A & B
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
    //Output of matrix C
    printf("\nAddtion of A & B :-\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    getch();
}