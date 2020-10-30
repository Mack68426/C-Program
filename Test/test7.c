#include<stdio.h>
#include<stdlib.h>
int fibto2(int n){
    if(n==0)
        return 1;
    else
        return fibto2(n-1)+fibto2(n/2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibto2(n));
    printf("\n");
}