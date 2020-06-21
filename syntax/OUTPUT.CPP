#include<iostream.h>
#include<conio.h>
#include<string.h>
void output (char str []);
void main ()
{
clrscr();
const int size=80;
char str[size];
cin.get (str, 80, '/');
if( strstr (str, "out:"))
output (str);
getch();
}

void output (char str [])
{
cout<<str;
}


