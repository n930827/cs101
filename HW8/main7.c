#include <stdio.h>
#include <math.h>
int main(){
  int a =-999;
  int sum[3] = {0,0,0}, add=0,i=0,ans=0;
  while (a!=0){
    add = a%10;
    sum[i] = add;
    i++;
    a/= 10;
  }
  if (sum[0]<0){
      for(int i=0;i<3;i++){
          if(i==0){
          ans+=sum[i];}
          else{
              
          ans+=(-1*sum[i]);}
      }
          
      }else{
        for(int i=0;i<3;i++){
          ans+=sum[i];
      }
    
  }
  printf("%d",ans);
}
