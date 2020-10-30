#include<stdio.h>
#include<string.h>
int duplicateCount(char [],int );
int main(){
    char str[50];
    scanf("%s",str);
    int lenth=strlen(str);
    printf("%d",duplicateCount(str,lenth));
}
int duplicateCount(char arr[],int lenth){
    int i=0,start=0,end=strlen(arr),count=0;
    while(end>=start){
        int middle=(end-start)/2;
        if(arr[i]==arr[middle])
            count++;
        else if(lenth-i>middle+i){
            start=middle+1;
        }
        else{
            end=middle-1;
        }
        i++;
    }
}