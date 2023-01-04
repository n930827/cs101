#include <stdio.h>

void print_space(int r){
    for(int i =0;i<=4-r;i++)
    printf(" ");
}  

void print_star(int r){
   for(int i=1;i<r-1;i++)
   printf("*");
   printf("\n");
}

void print_top(int n){
        for(int j=1;j<=n+1;j++){
          print_space(j);
          print_star(j*2-1);  
        }
    
}

void print_truck(int n){
    for(int i =1;i<n*2;i++)
        printf("*");
    printf("\n");
    for(int i=0;i<n;i++){
        printf("*");
        for(int j=0;j<n+1;j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i =1;i<n*2;i++)
        printf("*");
}

int main(){
   int n = 4;
   print_top(n);
   print_truck(n);
}
