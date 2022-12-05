// WAP to print one dimensional array entered by user
#include<stdio.h>
#include<conio.h>

void main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]); // contains size of array
    printf(">>Enter elements of array(size 5) : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array = [ ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");

    getch();
}