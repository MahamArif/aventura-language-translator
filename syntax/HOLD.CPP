#include<conio.h>
#include<iostream.h>
#include<string.h>

void holdonscreen (void);

void main (void)
 {
  clrscr();
  const int size=100;
  char inputstr[size];
  cin.get(inputstr,size);
  if(strstr(inputstr,"hold"))
   {
     holdonscreen();
   }
  }


void holdonscreen (void)
 {
  getch();
 }
