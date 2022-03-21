#include <stdio.h>

int main() 
{  

    int i,j,b=0;
    for(i=6;i>0;i--)
    {
          for(j=0;j<b;j++)
                 printf("  ");
         
          b++;
          for(j=1;j<=i;j++)   
                 printf (" * ");
          printf ("\n");
    }
}
