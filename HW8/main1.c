#include <stdio.h>

void print_space(int r){
    for(int i =0;i<=18-r*2;i++)
    printf(" ");
}  

void print_star(int r){
   for(int i=0;i<r;i++)
   printf("* ");
   printf("\n");
}

int main()
{
    for(int i=1;i<=10;i++){
      
      print_space(i);
      print_star(i*2-1);  
     // printf("%d",i*2-1);
    }

    return 0;
}
