#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int count,i,j=0,lenth;
    char cc;
    scanf("%d",&count);
    for(i=0;i<count;i++){
        char *article=(char *)calloc(68,sizeof(char));
        while( (fgets(article,68,stdin)) && j<strlen(article)){
            lenth=strlen(article)-1;
            if(article[lenth-1]!='\r'&&article[lenth]!='\n'){
                if(article[j]<95&&article[j]>31)                //大寫轉小寫
                    article[j]+=32;
                else if(article[j]>95&&article[j]<255)          //小寫轉大寫
                    article[j]-=32;
            }
            j++;
        }
        printf("%s\n",article);
        free(article);
    }
}