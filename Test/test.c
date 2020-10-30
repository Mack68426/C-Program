#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int main(){
    FILE *fp1;
    char cc[MAX];
    int lenth;
    fp1=fopen("dest2.txt","r");
//    fp2=fopen("dest2.txt","a");
    if(fp1){
		printf("檔案開啟成功!\n");
		while(!feof(fp1)){
			lenth=fread(cc,sizeof(char),MAX,fp1);
			if(lenth<MAX)
				cc[lenth]='\0';
			printf("%s\n",cc);
		}
    	printf("檔案附加完成!\n");
		fclose(fp1);
//        fclose(fp2);
    }
	else{
		printf("檔案開啟失敗");
	}
	
}
