#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
    char s[] = "Hello World";
    char t[6];
    strncpy(t, s + 6, 5);
    t[5] = 0;
    printf("%s\n", t);
}