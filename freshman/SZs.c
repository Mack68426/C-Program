#include <stdlib.h>
#include <stddef.h>
#include<stdio.h>
int **newarr;
int matrix_addition(size_t n, int matrix_a[n][n], int matrix_b[n][n]) {
    int *p;
    // assign memory to array
    newarr = (int**)malloc(n*sizeof(int*));
    for(size_t i=0;i<n;i++)
        newarr[i] = (int*)malloc(n*sizeof(int));
    for(size_t i=0;i<n;i++) {      
	    for(size_t j=0;j<n;j++){
            newarr[i][j] = matrix_a[i][j] + matrix_b[i][j];
	    p=*((newarr+j)+i);
	    }
    }
    return *p;
}
int main(){

	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	int sum=matrix_addition(n,a,b);
	printf("%d\t\n",sum);
}
