#include<stdio.h>

char *names[]={" ","X","O","?","H"};

int chess[10][10]={

/*0*/        {4,4,4,4,4,4,4,4,4,4},
/*1*/        {4,0,0,0,0,0,0,0,0,4},
/*2*/        {4,0,0,0,2,0,0,2,0,4},
/*3*/        {4,0,0,0,1,2,1,0,0,4},
/*4*/        {4,0,0,0,1,1,2,0,0,4},
/*5*/        {4,0,0,1,1,0,2,2,0,4},
/*6*/        {4,0,0,1,0,0,0,0,2,4},
/*7*/        {4,0,0,0,0,0,0,0,0,4},
/*8*/        {4,0,0,0,0,0,0,0,0,4},
/*9*/        {4,4,4,4,4,4,4,4,4,4}
};

int offset[][2]={
    {-1,0},
    {-1,1},
    {0,1},
    {1,1},
    {1,0},
    {1,-1},
    {0,-1},
    {-1,-1}
};
int check_line(int xx,int yy,int dir,int stone)
{
    int nn=0;
    int t_xx = xx+dir;
    int t_yy = yy+dir;
    while(chess[t_yy][t_xx]==3-stone){
        nn++;
        t_xx+=offset[dir];
        t_yy+=offset[dir];
    }
    if(chess[t_yy][t_xx]==stone){
        return nn;
    }
    else {
        return 0;
    }
}
int eat_line(int xx,int yy,int dir,int stone){

    int nn=0;
    int t_xx = xx+dir;
    int t_yy = yy+dir;
    while(chess[t_yy][t_xx]=3-stone) {
        chess[t_yy][t_xx]=stone;
        nn++;
        t_xx+=offset[dir];
        t_yy+=offset[dir];
    }
    return nn;

}
int eat(int xx,int yy,int stone){
    int dir,sum=0;
    for(dir=0;dir<8;dir++){
        if(check_line(xx,yy,dir,stone)>0){
            sum=+eat_line(xx,yy,dir,stone);
        }
    }
    return sum;
}
void print_board(){
    int ii,jj;
    printf(" 12345678\n");
    for(ii=1;ii<8;ii++){
        printf("%d",ii);
            for(jj=1;jj<=8;jj++){
                printf("%s",names[ii][jj]);
            }
            printf("\n");
    }
}
void read_board(){

    int ii,jj;
    for(ii=1;ii<=8;ii++){
        for(jj=1;jj<=8;jj++){
            scanf("%d",chess[ii][jj]);
        }
    }
}
int main(){

    int xx,yy,stone;
    for(xx=0;xx<10;xx++){ 
        for(yy=0;yy<10;yy++){
            chess[0][xx]=4;
            chess[9][xx]=4;
            chess[xx][0]=4;
            chess[xx][9]=4;
        }
    }
    read_board();
    print_board();
    scanf("%d %d %d",&xx,&yy,&stone);
    if(chess[yy][xx]==0 && eat(xx,yy,stone)>0){
        chess[yy][xx]=stone;
        printf("put a %s on (%d, %d)\n",names[stone],xx,yy);
        print_board();
    }
    else{
        printf("Oh no!! You cannot put a %s in (%d %d)\n",names[stone],xx,yy);
    }
    return 0;
}
