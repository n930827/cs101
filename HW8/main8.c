#include <stdio.h>
void print_space(int r){
    for(int i =0;i<=3-r;i++)
    printf(" ");
}  

void print_star(int r){
   for(int i=0;i<r;i++)
   printf("*");
   printf("\n");
}

void print_ins_space(int r){
    for(int i =0;i<=3-r;i++)
    printf(" ");
}  

void print_ins_star(int r){
   for(int i=0;i<r;i++)
   printf("*");
   printf("\n");
}

int main(){
    for(int i=4;i>=2;i--){
      print_ins_space(i);
      print_ins_star(i*2-1);  
     
    }
    for(int i=1;i<=4;i++){
      print_space(i);
      print_star(i*2-1);  
     
    }
}
