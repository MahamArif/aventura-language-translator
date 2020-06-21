#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<mouse.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<mathsavt.h>
void window (void);
#define LEFT 0
#define TOP 1
#define RIGHT 200
#define BOT 100
void mouse (void); // for mouse options
char *name;
void new_window (void);    // for input window
void getname (char *name);  // it takes input
void main (void)
{
  clrscr();

  window(LEFT, TOP, RIGHT, BOT);
  int driver = DETECT;
  int mode;
  initgraph(&driver, &mode, "c:\\tc:\\bgi"); //initializing graphics
  setbkcolor(YELLOW);
  showmouseptr();
  int left = 1, top = 1, right = 79, bot = 25, x, y, button_left, button_right;
  setcolor(BLUE);                     //for the outline color
  for (int i=0; i<8; i++)
  {
    rectangle(left,top,right,bot);       // for drawing eight rectangles in a row
    left = right;
    right+=79;
  }
  char str[8][40] = {"File", "Edit", "Search", "Run", "Compile", "Debug", "Options", "Help"};
  settextstyle(TRIPLEX_FONT,0,1);    // set the font size, direction and style
  setcolor(MAGENTA);
  outtextxy(17, 2, str[0]);     // for printing a given string on the given x y locations of the screen
  outtextxy(96, 2, str[1]);
  outtextxy(79*2+11, 2, str[2]);
  outtextxy(79*3+18, 2, str[3]);
  outtextxy(79*4+6, 2, str[4]);
  outtextxy(79*5+13, 2, str[5]);
  outtextxy(79*6+9, 2, str[6]);
  outtextxy(79*7+16, 2, str[7]);
  while(!kbhit())//||kbhit()) check for key strokes
  {
    getmousepos(&button_right, &button_left, &x, &y);
    if ((x>1 && x<79) && (y>1 && y<25))
    {
      if(button_left == 1)// || button_right == 1)
      {
    setcolor(BLUE);
    rectangle(1, 26, 79, 103);
    settextstyle(TRIPLEX_FONT,0,1);
    setcolor(MAGENTA);
    outtextxy(15, 29, "New");
    outtextxy(15,53,"Save");
    outtextxy(11, 78, "Save as");
    }
    }
    if ((x>1&&x<79) && (y>26&&y<51))
    {
      if(button_left==1)// || button_right == 1)
      {
	 new_window();


      }
    }
    if ((x>79 && x<158) && (y>1 && y<25))
    {
      if (button_left==1) //|| button_right == 1)
      {
       setcolor(BLUE);
       rectangle(79, 26, 158, 76);
       settextstyle(TRIPLEX_FONT, 0, 1);
       setcolor(MAGENTA);
       outtextxy(94, 29, "Copy");
       outtextxy(93, 53, "Paste");
      }
    }
    if ((x>474 && x<553) && (y>1 && y<25))
    {
      if (button_left == 1) //|| button_right == 1)
      {
	setcolor(BLUE);
	rectangle(474, 26, 600, 76);
	settextstyle(TRIPLEX_FONT, 0, 1);
	setcolor(MAGENTA);
	outtextxy(484, 29, "EXIT");
	outtextxy(484, 53, "Close window");
      }
    }
    if ((x>474 && x<600) && (y>26 && y<51))
    {
      if (button_left == 1)// || button_right == 1)
      {
	exit(0);
      }
    }

    if ((x>1 && x<635) && (y>100 && y<450))
    {
       if (button_left == 1)// || button_right == 1)
       {
	 setcolor(YELLOW);
	 rectangle(1, 26, 79, 103);
	 rectangle(79, 26, 158, 76);
	 rectangle(474, 26, 600, 76);
	 settextstyle(TRIPLEX_FONT, 0, 1);
	 setcolor(YELLOW);
	 outtextxy(15, 29, "New");
	 outtextxy(15,53,"Save");
	 outtextxy(11, 78, "Save as");
	 outtextxy(94, 29, "Copy");
	 outtextxy(93, 53, "Paste");
	 outtextxy(484, 29, "EXIT");
	 outtextxy(484, 53, "Close window");
       }
    }
  }
  getch();
  closegraph();
}
void new_window (void)
{
cleardevice();
setbkcolor(YELLOW);
  showmouseptr();
  int left = 1, top = 1, right = 79, bot = 25, x, y, button_left, button_right;
  setcolor(BLUE);
  for (int i=0; i<8; i++)
  {
    rectangle(left,top,right,bot);
    left = right;
    right+=79;
  }
  char str[8][40] = {"File", "Edit", "Search", "Run", "Compile", "Debug", "Options", "Help"};
  settextstyle(TRIPLEX_FONT,0,1);
  setcolor(MAGENTA);
  outtextxy(17, 2, str[0]);
  outtextxy(96, 2, str[1]);
  outtextxy(79*2+11, 2, str[2]);
  outtextxy(79*3+18, 2, str[3]);
  outtextxy(79*4+6, 2, str[4]);
  outtextxy(79*5+13, 2, str[5]);
  outtextxy(79*6+9, 2, str[6]);
  outtextxy(79*7+16, 2, str[7]);
  setcolor(BLUE);
  rectangle(1, 130, 635, 470);
  rectangle(2, 131, 634, 469);
  rectangle(5, 135, 630, 465);
  getname(name);
}
void mouse (void)
{  int x, y, button_left, button_right;
  while(!kbhit())//||kbhit())
  {
    getmousepos(&button_right, &button_left, &x, &y);
    if ((x>1 && x<79) && (y>1 && y<25))
    {
      if(button_left == 1)// || button_right == 1)
      {
    setcolor(BLUE);
    rectangle(1, 26, 79, 103);
    settextstyle(TRIPLEX_FONT,0,1);
    setcolor(MAGENTA);
    outtextxy(15, 29, "New");
    outtextxy(15,53,"Save");
    outtextxy(11, 78, "Save as");
       }
    }
    if ((x>1&&x<79) && (y>26&&y<51))
    {
      if(button_left==1)// || button_right == 1)
      {
	 new_window();
      }
    }
    if ((x>79 && x<158) && (y>1 && y<25))
    {
      if (button_left==1)// || button_right == 1)
      {
       setcolor(BLUE);
       rectangle(79, 26, 158, 76);
       settextstyle(TRIPLEX_FONT, 0, 1);
       setcolor(MAGENTA);
       outtextxy(94, 29, "Copy");
       outtextxy(93, 53, "Paste");
      }
    }
    if ((x>237 && x<316) && (y>1 && y<25)) // for run button
    {
      if (button_left == 1)// || button_right == 1)
      {
	closegraph();
	clrscr();
      }
    }
    if ((x>316 && x<395) && (y>1 && y<25))      // for compile button
    {
      if (button_left == 1)// || button_right == 1)
      {
	 FILE *fp=fopen("txt.avt","r");//it reads a file, r=read

 FILE *fp1=fopen("f2.cpp","w");//it writes on file, w=write

 char *b; 			//declares the buffer

 char *str;			 //getting input in str

 char *str_out; 		//passing output to str_out

 while(fgets(b,500,fp))	//loop for multiple lines;

 {				//fgets will read file

  str=b;		//It will copy the first line of buffer to string

 if(strstr(str,"inte"))    //check for inte

   {

    char *str_int={"int "};  //predefined string

    char *temp;		     //for temporay storage

    int s_len=strlen(str);   //calculates length of str

    temp=new char[s_len];    //for memory allocation

    int p_ini=5;             //initial index

    int p_fin=strstr(str,"/")-str;    //final index

    for(int a=0,b=p_ini;b<p_fin;a++,b++)

     {
      temp[a]=str[b];   //extracting the content of string
     }

    int len=a;   //extracting the last index

    temp[len]=';';

    temp[++len]='\0';

    str_out=strcat(str_int,temp);   //combining the two strings

    cout<<str_out;

    fputs(str_out,fp1);     //writes to file

    fputs("\n",fp1);

    delete[] temp;

    }

 else  if(strstr(str,"ch"))
   {

    char *str_char={"char "};

    char *temp;

    int s_len=strlen(str);

    temp=new char[s_len];

    int p_ini=3;

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=p_ini;b<p_fin;a++,b++)

     {
      temp[a]=str[b];
     }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=strcat(str_char,temp);

    cout<<str_char;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

    }

 else if(strstr(str,"fl"))

    {

    char *str_float={"float "};

    char *temp;

    int s_len=strlen(str);

    temp=new char[s_len];

    int p_ini=3;

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=p_ini;b<p_fin;a++,b++)

     {
      temp[a]=str[b];
     }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=strcat(str_float,temp);

    cout<<str_out;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if(strstr(str,"out:"))   //it checks for cout (to print as it is)

   {

   char *str_cout={"cout<<\""};

   char *temp;

   int s_len=strlen(str);

   temp = new char[s_len];

   int p_ini=strstr(str,"(")-str+1;

   int p_fin=strstr(str,")/")-str-1;

   for(int a=0,b=p_ini;b<=p_fin;a++,b++)

   {
    temp[a]=str[b];
   }
   int len=a;

   temp[len]='\"';

   temp[++len]=';';

   temp[++len]='\0';

   str_out=strcat(str_cout,temp);

   cout<<str_out;

   fputs(str_out,fp1);

   fputs("\n",fp1);

   delete[] temp;

   }

 else if(strstr(str, "value:"))  //it checks for cout (to print a value)

   {

    char *str_cout={"cout<<"};

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str-1;

    for(int a=0,b=6;b<=p_fin;a++,b++)

   {
    temp[a]=str[b];
   }
    int len=a;

    temp[a]=';';

    temp[++len]='\0';

    str_out=strcat(str_cout,temp);

    cout<<str_out;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if(strstr(str,"in:"))   // it checks for in

   {

    char *str_cin="cin>>";

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_ini=strstr(str,"(")-str;

    int p_fin=strstr(str,")/")-str;

    for(int a=0,b=p_ini+1; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }
    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=strcat(str_cin,temp);

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if(strstr(str,"hold")) //it checks for getch();

   {
     str_out="getch();}";

     fputs(str_out,fp1);

     fputs("\n",fp1);
   }

  if(strstr(str,"cls"))   //it checks for clrscr();

   {

    str_out="clrscr();";

    fputs(str_out,fp1);

    fputs("\n",fp1);

   }

 else if (strstr (str, "add"))   //to add two numbers

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else  if (strstr(str, "sub"))     //to subtract two numbers

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if (strstr (str, "mul"))   //to multiply two numbers

   {
    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if (strstr (str, "div"))  //to divide two numbers

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if (strstr(str, "sqr"))  //to calculate square root

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if (strstr(str, "cube"))  //to calculate cube root

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

    delete[] temp;

   }

 else if(strstr (str, "void"))   //to initialize main function

   {

    str_out=str;

    fputs(str_out,fp1);

    fputs("{",fp1);

    fputs("\n",fp1);

   }

 else if (strstr(str, "#"))     //it checks for header files

   {

    str_out=str;

    fputs(str_out,fp1);

    fputs("\n",fp1);

   }


 else if (strstr (str, "+")) // checks for addition operator

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

  }


 else if (strstr (str, "-")) // checks for subtraction operator

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

   }


 else if (strstr (str, "*")) // checks for multiplication operator

   {

    char *temp;

    int s_len=strlen(str);

    temp = new char[s_len];

    int p_fin=strstr(str,"/")-str;

    for(int a=0,b=0; b<p_fin; a++,b++)

    {
     temp[a]=str[b];
    }

    int len=a;

    temp[len]=';';

    temp[++len]='\0';

    str_out=temp;

    fputs(str_out,fp1);

    fputs("\n",fp1);

   }


}//while loop ends



fclose(fp);      //closes the input file

fclose(fp1);     //closes the output file


cleardevice();
window();
}
}
    if ((x>474 && x<553) && (y>1 && y<25))
    {
      if (button_left == 1) //|| button_right == 1)
      {
	setcolor(BLUE);
	rectangle(474, 26, 600, 76);
	settextstyle(TRIPLEX_FONT, 0, 1);
	setcolor(MAGENTA);
	outtextxy(484, 29, "Close all");
	outtextxy(484, 53, "Close window");
      }
    }
    if ((x>474 && x<600) && (y>26 && y<51)) // for exit
    {
      if (button_left == 1)// || button_right == 1)
      {
	exit(0);
      }
    }

    if ((x>1 && x<635) && (y>100 && y<450))
    {
       if (button_left == 1) //|| button_right == 1)   // check for clicking of mouse button
       {
	 setcolor(YELLOW);
	 rectangle(1, 26, 79, 103);
	 rectangle(79, 26, 158, 76);
	 rectangle(474, 26, 600, 76);
	 settextstyle(TRIPLEX_FONT, 0, 1);
	 setcolor(YELLOW);
	 outtextxy(15, 29, "New");
	 outtextxy(15,53,"Save");
	 outtextxy(11, 78, "Save as");
	 outtextxy(94, 29, "Copy");
	 outtextxy(93, 53, "Paste");
	 outtextxy(484, 29, "Close all");
	 outtextxy(484, 53, "Close window");
       }
    }

  }
}
void window (void)
{
  cleardevice();
setbkcolor(YELLOW);
  showmouseptr();
  int left = 1, top = 1, right = 79, bot = 25, x, y, button_left, button_right;
  setcolor(BLUE);
  for (int i=0; i<8; i++)
  {
    rectangle(left,top,right,bot);
    left = right;
    right+=79;
  }
  char str[8][40] = {"File", "Edit", "Search", "Run", "Compile", "Debug", "Options", "Help"};
  settextstyle(TRIPLEX_FONT,0,1);
  setcolor(MAGENTA);
  outtextxy(17, 2, str[0]);
  outtextxy(96, 2, str[1]);
  outtextxy(79*2+11, 2, str[2]);
  outtextxy(79*3+18, 2, str[3]);
  outtextxy(79*4+6, 2, str[4]);
  outtextxy(79*5+13, 2, str[5]);
  outtextxy(79*6+9, 2, str[6]);
  outtextxy(79*7+16, 2, str[7]);
  setcolor(RED);
  outtextxy(50, 130, "Now your file is ready to run. Click on the run button !");
  mouse();

}
void getname (char *name) // input function
{ FILE * fptr;
  int y=140;     // initializes Y location on the screen
  char ch;
  fptr = fopen("txt.avt", "w");
  char *name1;
  int i=0;//x1=0;
  while(1)
  {
   ch=getch();
   fputc(ch,fptr);
   /*x1++;
   if(x1%100==0)
   {
   y+=10;
   i=0;
   } */
   if (ch==27)//press esc to close
   {
   exit(0);
   }
   if (ch=='\r')
   { fputs("\n",fptr);
   *(name+0)='\0';
    y+=10;
    i=0;
    //a++;
   }

   if (ch=='\b')
   {

   //
  // char *temp;
   // temp = new char[i];
   // strncpy(temp,name,i-1);
  //  outtextxy(10,y+10, temp);
    *(name+i-1)='\0';
  //  outtextxy(10,y+20,name);
    //outtextxy(10,y,remove);
  //  setcolor(RED);
  //  rectangle(10,100,50,50);
  //  i--;
      /////////////
 //   break;
   }
   *(name+i+1)='\0';
   *(name+i)=ch;
   settextstyle(SMALL_FONT, 0, 5);
   setcolor(GREEN);
   outtextxy(10, y, name);
   i++;
   if (ch=='\t')    // for enabling mouse and closing file
   {
     fclose(fptr);
     mouse();
   }
  }
}