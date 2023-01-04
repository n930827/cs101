#include <stdio.h>

void get_binary(int i){
    int times=0;
    int sum[8] = {0,0,0,0,0,0,0,0};
    
    if(i<15){
        for(int j =i;j!=0;j/=2){
        if (j%2)
        sum[7-times] = 1;
        times+=1;
        }
        for(int j=0;j<4;j++)
            printf("%d",sum[4+j]);
    }else{
        for(int j =i;j!=0;j/=2){
        if (j%2)
        sum[7-times] = 1;
        times+=1;
        }
        for(int j=0;j<8;j++)
            printf("%d",sum[j]);
    }
}

int main(){
    int i = 3;
    get_binary(i);
   
}
