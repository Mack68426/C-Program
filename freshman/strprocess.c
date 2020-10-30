#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
char *Mumbling(char word[],int lenth);
int main(){

	int i,len;
	char *str;
	str=(char *)malloc(sizeof(char)*9);
	len=strlen(str);
	scanf("%s",str);
	char *dest=Mumbling(str,len);
	for(i=0; i<len && dest[i]!='\0'; i++)
		printf("%c",dest[i]);
}
char *Mumbling(char word[],int lenth){

	//word=(char *)malloc(lenth*sizeof(char));
	int i,j;
	char *temp=(char *)malloc(sizeof(char)*lenth);	
	for(i=0;i<lenth-1;i++){
		temp[i]=word[i]-32;			//將字母換成大寫
		for(j=0;j<i;j++){
			if(j%lenth>0){
				word[i]+=32;
				strcat(temp,word);	//把小寫加在後面
			}
		}
		strcat(temp,"-");	//加 - 號
	}
	return temp;
}
