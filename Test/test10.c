#include<stdio.h>
#include<stdlib.h>
char *border(char **arr,int n,int m);
void show(char **arr,int n,int m);
int main(void){
    int cnt,n,m,i,j,k;
    scanf("%d",&cnt);
    for(k=1;k<=cnt;k++){
        scanf("%d %d",&n,&m);
        char array[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&array[i][j]);
                
        char **str=border(&array[i][j],n,m);
        show(&array[i][j],n,m);
    }
    return 0;
}
char *border(char **arr,int n,int m){
    int i,j;
    char str[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]=='0')
                str[i][j]='_';
            if(arr[i][j]=='1')
                str[i][j]='0';
        }
    }
    return str;
}
void show(char **arr,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%c",arr[i][j]);
        printf("\n");
    }
}