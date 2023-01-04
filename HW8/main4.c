#include <stdio.h>

void round_func(float f){
    int i = f*10;
    int j = i%10;
    if(j<5)
        printf("%d",i/10);
    else
        printf("%d",i/10+1);
}

int main(){
   
   round_func(2.34);
}
