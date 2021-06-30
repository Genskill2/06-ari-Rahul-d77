#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>


string ari(string s)
{
  int charnum=0;
  int word=0;
  int sentence=0;
  double x;
  double a;
  double b;
  int c;
  for(int i=0;i<strlen(s);i++)
  {
    if(isalnum(s[i])==1) 
    {
      charnum++;                 
      else if(s[i]==' ') 
         {
           word++;
           else if((s[i]=='.'||s[i]=='?')||s[i]=='!') 
              {
                sentence++;
              }
          }
     }
    
  }       
  a=(double)charnum/word;        
  b=(double)word/sentence;       
  x=(double)((4.71*a)+(0.5*b))-21.43;  
  c=ceil(x);
  switch (c) 
  {
    case 1: return "Kindergarten"; 
            break;
    case 2: return "First/Second grade";
            break;
    case 3: return "Third Grade";
            break;
    case 4: return "Fourth Grade";
            break;
    case 5: return "Fifth Grade";
            break;
    case 6: return "Sixth Grade";
            break;
    case 7: return "Seventh Grade";
            break;
    case 8: return "Eighth Grade";
            break;
    case 9: return "Ninth Grade";
            break;
    case 10: return "Tenth Grade";
             break;
    case 11: return "Eleventh Grade";
             break;
    case 12: return "Twelfth Grade";
             break;
    case 13: return "College student";
             break;
    case 14: return "Professor";
             break;
   }
}
