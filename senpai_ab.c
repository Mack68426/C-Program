#include <stdio.h>
#include <stdlib.h>
int main(){
	int x=0,y=0,i,j,k;
    	while(1){
        	int arr2[4]={4,8,0,1},arr[4]={0,0,0,0};
        	x=0,y=0;
        	scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
        	if (arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0)
        	{
			break;
        	}
		else
        	{
        		for(i=0;i<4;i++){
            			if(arr[i]==arr2[i]){
                			x++;
            			}	
            			for (j = 0; j < 4; j++){
                			if (arr2[i]==arr[j]&&i!=j){
                    				y++;
                			}	
            			}
        		}
        		printf("%dA%dB\n",x,y);
        	}	
 
    	}
}
