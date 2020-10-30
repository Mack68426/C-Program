#include<stdio.h>
#include<stdlib.h>
int main(){
    signed int m,n;
    char o;
    while(scanf("%d %c %d",&m,&o,&n)){
        switch(o){
            case '+':   printf("%d\n",m+n); break;
            case '-':   printf("%d\n",m-n); break;
            case '*':   printf("%d\n",m*n); break;
            case '/':   printf("%d\n",m/n); break;
            case '%':   printf("%d\n",m%n); break;
        }
    }
    return 0;
}