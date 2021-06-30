#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string s)
{
  int charnum=0,word=0,sentence=0,d;
  float a,b,x,c;
  for(int i=0;i<strlen(s);i++)
  {
    if(isalnum(s[i])) 
    {
      charnum++;      
     }           
     if(s[i]==' ') 
         {
           word++;
          }
       if(s[i]=='.'||s[i]=='?'||s[i]=='!') 
              {
                sentence++;
              }
  }       
  a=(double)charnum/word;        
  b=(double)word/sentence;       
  x=4.71*a;
  c=(0.5*b)-21.43;
  d=ceil(x+c);
  switch (d) 
  {
    case 1: return "Kindergarten"; 
    case 2: return "First/Second grade";
    case 3: return "Third Grade";
    case 4: return "Fourth Grade";
    case 5: return "Fifth Grade";
    case 6: return "Sixth Grade";
    case 7: return "Seventh Grade";
    case 8: return "Eighth Grade";
    case 9: return "Ninth Grade";
    case 10: return "Tenth Grade";
    case 11: return "Eleventh Grade";
    case 12: return "Twelfth Grade";
    case 13: return "College student";
    case 14: return "Professor";
    default: return printf(" Error");
   }
}
