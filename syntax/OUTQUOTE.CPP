#include<iostream.h>
#include<conio.h>
#include<string.h>
const int size=100;
void output (char str []);
void main ()
{
clrscr();
char str[size];
cin.get (str, size, '/');
if( strstr (str, "out:"))
output (str);
getch();
}

void output (char str [])
{
char str1[size];
for (int i=6, j=0; i<size, j<size; i++, j++)
{
str1[j]=str[i];
if (str[i]=='\"')
break;
}
str1[j]='\0';
cout<<str1;
}


