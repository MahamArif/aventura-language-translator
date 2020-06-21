#include<iostream.h>
#include<conio.h>
#include<string.h>
void main ()
{
clrscr();
const int size=20;
char *res;
char str1[size]="Teamaventura";
char str2[size]="aventura";
res=strstr(str1,str2);
cout<<res;
getch();
}
