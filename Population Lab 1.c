#include <cs50.h>
#include <stdio.h>

int main(void)
{ int n,b,d;
    // TODO: Prompt for start size

   do
   {n = get_int("initial size?") ;
   
   }
    while (n<9);
    
// TODO: Prompt for end size
int m; 

 do
   {m=get_int("greater than %i or equal to %i please", n, n);
  
   }
   while (m<n);

 // TODO: Calculate number of years until we reach threshold

 int y;

 for (y=0; m>n; y++)
 {
     n=n+n/12;
     
 }

    // TODO: Print number of years
 
 printf("%i",y);


}
