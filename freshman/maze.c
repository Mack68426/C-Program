#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int main(){
    srand((unsigned int) time(NULL));
    char MAZE[10][10];
    while(!kbhit()){
        int i,j,a,b;        
        a=rand()%10;
        b=rand()%10;
        for(i=0;i<10;i++){            //隨機賦予迷宮值
            for(j=0;j<10;j++)
                MAZE[i][j]=rand()%2?'0':'1';
        }
        while(MAZE[a][b]!='0'||MAZE[a][b]=='*'){
            a=rand()%10;
            b=rand()%10;
        }
        MAZE[a][b]='*';
        for(i=0;i<10;i++){          //印出迷宮
            for(j=0;j<10;j++)
                printf("%c",MAZE[i][j]);
            printf("\n");
        }
        Sleep(1000);
        system("cls");
    }
}
