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
  int x;
  double a;
  double b;
  for(int i=0;i<strlen(s);i++)
  {
    if(isalnum(s[i])==1) 
    {
      charnum++;      
    }             
    else if(s[i]==' ') 
         {
           word++;
         }
         else if((s[i]=='.'||s[i]=='?')||s[i]=='!') 
              {
                sentence++;
              }
    
  }       
  a=(double)charnum/word;        
  b=(double)word/sentence;       
  x=ceil(((4.71*a)+(0.5*b))-21.43);      
  if(x==1) return "Kindergarten";
  if(x==2) return "First/Second grade";
  if(x==3) return "Third Grade";
  if(x==4) return "Fourth Grade";
  if(x==5) return "Fifth Grade";
  if(x==6) return "Sixth Grade";
  if(x==7) return "Seventh Grade";
  if(x==8) return "Eighth Grade";
  if(x==9) return "Ninth Grade";
  if(x==10) return "Tenth Grade";
  if(x==11) return "Eleventh Grade";
  if(x==12) return "Twelfth Grade";
  if(x==13) return "College student";
  if(x==14) return "Professor";
}
