#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
 {
  clrscr(); int len,len1;
  char floatstr[100]={"float "};
  char fpstr[100];
  char temp[100];
  cin.get(fpstr,100,'/');
  len=strlen(fpstr);
  if(strstr(fpstr,"fp"))
   {
    for(int a=0,b=3;a<len;a++,b++)
     {
      temp[a]=fpstr[b];
     }
     temp[a]='\0';
     }
     strcat(floatstr,temp);
     cout<<"\n"<<floatstr<<";";
  getch();
 }