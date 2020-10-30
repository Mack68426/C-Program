#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void rnd(int arr[5][5],int value);
int main(){
    int count;
	while(!kbhit()){
		int arr[5][5],*output;
		
	}
}
void rnd(int arr[5][5],int value){
	srand((unsigned int) time(NULL));
	for(int i=0;i<5;i++){	
		int count=rand()%11;
		for(int j=0;j<5;j++)
			arr[i][j]=value;
	}
}