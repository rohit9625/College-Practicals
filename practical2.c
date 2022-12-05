// WAP to print a matrix (2D array) entered by user
#include<stdio.h>
#include<conio.h>

void main(){
    int arr[3][3];
    int i,j; // Iterators
    printf(">>Enter elements of 3X3 matrix : ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nMatrix :-\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

}