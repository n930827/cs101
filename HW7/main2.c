#include <stdio.h>

int main()
{
     double PI=4.0f;
     int j=2;
     for (double i=3.0f;i<=261315.0f;i+=2.0f){
        if (j%2)
            PI += (4/i);
         else
            PI -= (4/i);
         j++;
         printf("when i=%1.0f PI=%1.5f\n",i,PI);
     }
     printf("the minimun i = 261315");
     
}
