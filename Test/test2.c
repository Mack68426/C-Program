#include <stdlib.h>
#include<stdio.h>
#include <stddef.h>
int **newarr;
int matrix_addition(size_t n, int matrix_a[n][n],int matrix_b[n][n]);
void show(size_t n, int arr[n][n]);
int main(){
    int **ptr;
    size_t n;
    scanf("%d",&n);
    ptr=matrix_addition;
    show(n,ptr);
}
int matrix_addition(size_t n, int matrix_a[n][n], int matrix_b[n][n]) {
    // assign memory to array
    newarr = (int **)malloc(n*sizeof(int*));
    for(size_t i=0;i<n;i++)
        newarr[i] = (int*)malloc(n*sizeof(int));
    for(size_t i=0;i<n;i++) {
       for(size_t j=0;j<n;j++)
            newarr[i][j] = matrix_a[i][j] + matrix_b[i][j];
    }
    return newarr;
}
void show(size_t n, int arr[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
