#include <stdio.h>

void print_space(int r){
    for(int i =0;i<=6-r;i++)
    printf(" ");
}  

void print_star(int r){
   for(int i=0;i<r;i++)
   printf("*");
   printf("\n");
}

void print_top(){
    for(int i =3;i<9;i+=2){
        for(int j=1;j<=i;j++){
          print_space(j);
            print_star(j*2-1);  
        }
        
        //printf("12\n");
    }
    
}

void print_truck(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf(" ");
        }
        printf("*\n");
    }
}

int main(){
   
   print_top();
   print_truck();
}
