#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*void */char *Mumbling(char *word, int lenth);
int main(void){
	char *str=(char *)calloc(50,sizeof(char));
	scanf("%s",str);
	int lenth=strlen(str)-1;
	char *mumble=Mumbling(str,lenth);
	puts(mumble);
	free(str);
	return 0;
}
/*void */char *Mumbling(char *word, int lenth){
	int i=0,j;
	char *word=(char *)calloc(50,sizeof(char));		//設置一個記憶體空間並清空
	char temp[lenth];
	for(i=0;i<lenth && word[i]>=97&&word[i]<=122;i++)
		temp[i]=word[i]-32;
	i=0;
	while(i<lenth){
		word=(char *)realloc(word,sizeof(char)*(lenth+i+1));
		lenth=strlen(word)-1;
		strcat(word,temp+j);		//把大寫化過後的字母從dest[0]放進去
		for(j=0;j<i;j++)
			strcat(word,word+j+1);
		if(j%i)
			word[i+1]='-';
		if(i<lenth)
			word[lenth]='\0';
		i++;
	}
	return word;
}
