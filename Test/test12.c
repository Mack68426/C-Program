#include<stdio.h>
#include<stdlib.h>
int main(){
    int score;
    printf("Input 1~3: ");
    fflush(stdout);
    scanf("%d",&score);
    switch (score){
    case 90 ... 100:
        printf("Excellent!");
        break;
    case 70 ... 89:
        printf("Good");
        break;
    case 60 ... 69:
        printf("Great Try");
        break;
    default:
        break;
    }
}