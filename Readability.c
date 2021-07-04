#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

// Function prototypes
int countLetters(string input);
int countWords(string input);
int countSent(string input);
int ColemanLiau_I(string text);

int main(void)
{
   string input;
   input =get_string("Input the text\n");
   printf("Letters = %i\n", countLetters(input));
   printf("Words = %i\n", countWords(input));
   printf("Sentences =  %i\n", countSent(input));
   printf("Coleman-Liau index = %i\n", ColemanLiau_I(input) );
   int n= ColemanLiau_I(input);
   if (n<1)
   {
      printf("Before Grade 1");
   }
   else if (n>16)
   {
      printf("Grade 16+");
   }
   else  
   {
      printf("Meant for reading level %i", n);
   }
   
}

int countLetters(string text)
{
   int lcount =0;
   for (int i=0, n=strlen(text);i<n;i++)
   {
      if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
      {
         lcount=lcount+1;
      }
      
   }
   return lcount;
   
   
}

int countWords(string text)
{
   int wcount =0;
   for (int i=0, n=strlen(text);i<n;i++)
   {
      if ( ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))&&( (text[i+1] ==' ')||(text[i+1]=='.')||(text[i+1] ==',')||(text[i+1] =='!')||(text[i+1] =='?')||(text[i+1] =='!')||(text[i+1] ==';') )  )
      {wcount++;}
      
   }
   return wcount;
   
   
}
int countSent(string text)
{
   int sCount =0;
   for (int i=0, n=strlen(text);i<n;i++)
   {
      if ( (text[i+1]=='.')||(text[i+1]=='!')||(text[i+1]=='?')  )
      {sCount++;}
      
   }
   return sCount;
   
   
}

int ColemanLiau_I(string text)
{
    double index = 0.0588 * (((float)countLetters(text) / countWords(text)) * 100) - 0.296 * (((float)countSent(text) / 
                   countWords(text)) * 100) - 15.8;

    // Return index rounded off
    return round(index);
}
