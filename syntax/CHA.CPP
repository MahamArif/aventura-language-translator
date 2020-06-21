#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
 {
  clrscr(); int len,len1;
  char charstr[100]={"char "};
  char chastr[100];
  char temp[100];
  cin.get(chastr,100,'/');
  len=strlen(chastr);
  if(strstr(chastr,"cha"))
   {
    for(int a=0,b=4;a<len;a++,b++)
     {
      temp[a]=chastr[b];
     }
     temp[a]='\0';
     }
     strcat(charstr,temp);
     cout<<"\n"<<charstr<<";";
  getch();
 }