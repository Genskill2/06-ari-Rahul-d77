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
  float a,b,x,c,d,e;
  int f;
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
  c=(double)4.71*a;
  d=(double)0.5*b;
  e=(double)c+d;
  x=(double)e-21.43;
  f=ceil(x);
  switch (f) 
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
    default: return 0;
   }
}
