#include <stdio.h>


int main()
{
int i = 15,add =0;

for(int j=i;j!=0;j/=2){
    if(j%2)
    add+=1;
}
    printf("%d",add);
}
