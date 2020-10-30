#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char **exchange(char *arr[68],int len,int index);
int main(){
    int i,j=1,cnt,lenth;
    char *articl[69],*dest[69];
    scanf("%d",&cnt);
    for(i=0;i<cnt;i++)
        while(scanf("%s",articl[i])&&j<=strlen(articl[i])){
            lenth=strlen(articl[i]);
            dest[i]=exchange(articl[i],lenth,i);
        }
    for(i=0;i<strlen(dest[i]);i++)
        printf("%s",dest[i]);
}
char **exchange(char *arr[68],int len,int index){
    int i,j;
    
    for(i=0;i<len;i++){
        if(*arr[i]!=EOF){
            if(*arr[i]<95&&*arr[i]>31)                //大寫轉小寫
                arr[i]+=32;
            else if(*arr[i]>95&&*arr[i]<255)          //小寫轉大寫
                arr[i]-=32;
        }
    }
    return arr;
}