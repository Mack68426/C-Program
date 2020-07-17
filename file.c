#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 
	FILE *fp1,*fp2;
	char a[80],c;
	int count=0;

	fp1=fopen("556.txt","r");
	fp2=fopen("dest.txt","w");

	printf("檔案拷貝中......\n");

	if(fp1!=NULL){

		while((fscanf(fp1,"%s ",a))!=EOF){
			
			fprintf(fp2,a);
			printf(" %s",a);
			count++;
		}
		printf("\n");			
		printf("檔案拷貝完成\n");
	}
	else
		printf("檔案拷貝或開啟失敗");
	fclose(fp1);
	fclose(fp2);
}
