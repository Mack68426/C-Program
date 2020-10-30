#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char *camelCase(char sentence[]);
int main(){
	char *name,*ch;
	name=(char *)malloc(sizeof(char)*20);
	gets(name);
	ch=camelCase(name);
	puts(ch);
	free(name);
	return 0;
}
char *camelCase(char sentence[]){
	int i=0;
	while(sentence[i]!='\0'){
		sentence[i]=tolower(sentence[i]);
		if(sentence[i]=='_'){
			i++;
			sentence[i]=toupper(sentence[i]);
		}
		i++;
	}
	return sentence;
}
