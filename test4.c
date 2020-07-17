#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp1;
	char arr[50];
	int i=0;
	fp1=fopen("dest.txt","a");
	if(fp1){
		while(scanf("%s",arr)){
			int len=fwrite(arr+i,sizeof(char),len,fp1);
			for(int j=0;j<len;j++)
				printf("%c",arr[j]);
			if(i<len)
				arr[len]='\0';
		}
		printf("檔案輸出成功!\n");
		fclose(fp1);
	}
	printf("檔案寫入完成!\n");
}
