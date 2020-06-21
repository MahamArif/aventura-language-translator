#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
 {
  clrscr(); int len,len1;
  char intstr[100]={"int "};
  char intestr[100];
  char temp[100];
  cin.get(intestr,100,'/');
  len=strlen(intestr);
  if(strstr(intestr,"inte"))
   {
    for(int a=0,b=5;a<len;a++,b++)
     {
      temp[a]=intestr[b];
     }
     temp[a]='\0';
     }
     strcat(intstr,temp);
     cout<<"\n"<<intstr<<";";
  getch();
 }