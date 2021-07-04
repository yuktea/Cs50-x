#include <stdio.h>
#include <cs50.h>

int main (void)
{
int n = get_int("height/width?");

for(int a=0; a<n; a++)
{
for (int b=0; b<=n-a; b++ )
{
    printf(".");
    
}
for (int c=0; c<a+1; c++)
{
    printf("#");
}
for (int k =0; k<=2; k++)
{
    printf("..");
}
for (int d=0; d<a+1; d++)
{
    printf("#");
}
printf("\n");
}





}
