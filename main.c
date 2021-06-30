#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string);


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}


string ari(string s)
{
  int charnum=0;
  int word=0;
  int sentence=0;
  float a,b,x,c,d;
  for(int i=0;i<strlen(s);i++)
  {
    if(isalnum(s[i])==1) 
    {
      charnum++;      
     }           
     if(s[i]==' ') 
         {
           word++;
          }
       if((s[i]=='.'||s[i]=='?'||s[i]=='!') 
              {
                sentence++;
              }
  }       
  a=(double)charnum/word;        
  b=(double)word/sentence;       
  c=(double)4.71*a;
  d=(double)0.5*b;
  x=(double)(c+d)-21.43;
  switch (ceil(x)) 
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
             
   }
}
