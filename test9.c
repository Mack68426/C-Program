#include<stdio.h>
int main(void){
    int h,m;
    scanf("%2d %2d",&h,&m);
    if(h<24&&m<60){
        if (h==23||h==00)
            printf("rat");
        else if (h==1||h==2)
            printf("ox");
        else if(h==3||h==4)
            printf("tiger");
        else if(h==5||h==6)
            printf("rabbit");
        else if(h==7||h==8)
            printf("dragon");
        else if(h==9||h==10)
            printf("snake");
        else if(h==11||h==12)
            printf("horse");
        else if(h==13||h==14)
            printf("goat");
        else if(h==15||h==16)
            printf("monkey");
        else if(h==17||h==18)
            printf("rooster");
        else if(h==19||h==20)
            printf("dog");
        else if(h==21||h==22)
            printf("pig");
    }
    else
        return 0;
}