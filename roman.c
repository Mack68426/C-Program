#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int romanParser(char *roman,int lenth){
    int i,num=0;
    for(i=0;i<lenth;i++){
        if(roman[i]=='I')
            num+=1;
        else if(roman[i]=='V'){
            num+=5;
            if(i-1>0&&roman[i-1]=='I')
                num-=1;
        }
        else if(roman[i]=='X')
            num+=10;
        else if(roman[i]=='L'){
            num+=50;
            if(i-1>0&&roman[i-1]=='X')
                num-=10;
        }
        else if(roman[i]=='C')
            num+=100;
        else if(roman[i]=='D'){
            num+=500;
            if(i-1>0&&roman[i-1]=='C')
                num-=100;
        }
        else if(roman[i]=='M')
            num+=1000;
    }
    return num;
}
int main(){
    char *str=calloc(100,sizeof(char));
    int value;
    scanf("%s",str);
    int len=strlen(str);
    value=romanParser(str,len);
    printf("%d",value);
}