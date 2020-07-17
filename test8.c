#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,m,i,j;
    while(scanf("%d %d",&n,&m)){
        int arr[n][m];
//        printf("\n");
//        fflush(stdout);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&arr[i][j]);
        
        puts("\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
                printf("%d ",arr[i][j]);
            printf("\n");
        }
        puts("\n");
    }
}