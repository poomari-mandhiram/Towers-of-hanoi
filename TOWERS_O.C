#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int g1();
int g2();
int tower(int,char,char,char);
int  tow(int,char,char,char);
void d1(int,int,int,int,int);
void d2(int,int,int,int,int);
int n,i,gd=DETECT,gm,s,j,l,b,u,p,q,r,s,gd1=DETECT,gm1;
char ch;


int main()
{
clrscr();
textcolor(YELLOW);
printf("\n\n\n\n\n\n\n\n");
cprintf("`~~~~~~~~~~~~~~~ TOWERS  OF HANOI~~~~~~~~~~~~~~~~~~");
printf("\n\n");
textcolor(LIGHTGREEN );
cprintf(" \r\nENTER THE NUMBER OF DISCS:\r\n");
cscanf("%d",&n);              s=pow(2,n); printf("\n"); textcolor(LIGHTRED);
sleep(4);
system("cls");
printf("\n\n\n\n\n\n\n");
cprintf("the total number of moves is..........%d\n",s-1);
sleep(5);
system("cls");
printf("\n\n\n\n\n");
textcolor(1);
cprintf("\n\r                                       S");
textcolor(2);
cprintf("\n\r        W                               O" );
textcolor(4);
cprintf("\n\r         E                   T           L");
textcolor(7);
cprintf("\n\rH              G              H           U ");
textcolor(15);
cprintf("\n\r E              O              E           T");
textcolor(13);
cprintf("\n\r  R                    F                    I");
textcolor(14);
cprintf("\n\r    E                   O                    O");
textcolor(12);
cprintf("\n\r                         R                    N"); textcolor(LIGHTMAGENTA);
   printf("\n\n");
 sleep(5);
system("cls");
cprintf("\n \r         MOVES      \n\r");
tow(n,'A','B','C');
textcolor(LIGHTBLUE);
printf("\n\n");
sleep(5);
system("cls");
printf("\n\n\n\n");
cprintf("\r\n PRESS 1 TO VIEW THE SOLUTION GRAPHICALLY.............\r\n");
cscanf("%d",&ch);
 if(ch==1)
	{
	    g1();

		g2();

		return 0;
     }
	 return 0;
	 getch();
 }
int tow(int n,char s,char t,char d)
{
 int i;
if(n==0)
return;
else
{
tow(n-1,s,d,t);
textcolor(2);
//sleep(4);
cprintf("\r\n moving the disk number     %d      FROM peg   %c ->peg  %c\r\n",n,s,d);                            tow(n-1,t,s,d);
return ;
}
}


void d1(int n,int x1,int x2,int y1,int y2)
{

    int k ;
	setcolor(BLUE  );
    for(i=1,k=n,x1=5,x2=x1+190,y1=470,y2=y1-20 ; i<=n ; i++,x1+=10,x2-=10,y1-=20,y2-=20,k--)
    {
	setfillstyle(WIDE_DOT_FILL,1);
		setcolor(14) ;
	bar3d(x1+60,y1-42,x2+60,y2-42,5,5);

    }   tower(n,'A','B','C');
}
int tower(int n,char s,char t,char d)
{
 int i;
if(n==0)
return;
else
{
tower(n-1,s,d,t);
textcolor(2);
sleep(1);
system("cls");
printf("\n\n\n\n\n\n\n");

cprintf("\r\n moving the disk number     %d      FROM peg   %c ->peg  %c\r\n",n,s,d);
  tower(n-1,t,s,d);
return ;
}
}
int g1()
{
	int gd=DETECT,gm;
	textcolor(BLUE);


	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
	settextstyle(GOTHIC_FONT   ,HORIZ_DIR,4);
	setbkcolor(0         );
	setcolor(EGA_YELLOW);
	outtextxy( 50,30,"       TOWERS OF HANOI       ");
	settextstyle(GOTHIC_FONT,HORIZ_DIR ,2); setcolor(LIGHTGREEN);
	outtextxy(150,200,"INITIAL POSITION");
	settextstyle(1,HORIZ_DIR,2);
	setcolor(GREEN);
	outtextxy(60,430,"SOURCE PEG");    setcolor(1);
	outtextxy(240,430,"TEMPORARY PEG");    setcolor(LIGHTGREEN);
	outtextxy(470,430,"DESTINATION PEG");
	l=getmaxx()/4;
	b=getmaxy()-50;
	u=getmaxy()/3+100;
	for(j=1;j<=3;j++)
	{
	 setcolor(13);
	 setfillstyle(INTERLEAVE_FILL,13      );
	 bar3d(j*l,u,j*l+10,b,5,5);
}
d1(n,p,q,r,s);
getch();
closegraph();
return 0;
}
int g2()
{
	int gd=DETECT,gm;
	textcolor(BLUE);

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
	settextstyle(GOTHIC_FONT   ,HORIZ_DIR,4);
	setbkcolor(0         );
	setcolor(EGA_YELLOW);
	outtextxy( 50,30,"       TOWERS OF HANOI       ");
	settextstyle(GOTHIC_FONT,HORIZ_DIR ,2); setcolor(LIGHTGREEN);
	outtextxy(150,200,"FINAL POSITION");
	settextstyle(1,HORIZ_DIR,2);
		setcolor(GREEN);
	outtextxy(60,430,"SOURCE PEG");    setcolor(1);
	outtextxy(240,430,"TEMPORARY PEG");    setcolor(LIGHTGREEN);
	outtextxy(470,430,"DESTINATION PEG");
	l=getmaxx()/4;
	b=getmaxy()-50;
	u=getmaxy()/3+100;
	for(j=1;j<=3;j++)
	{
	 setcolor(13);
	 setfillstyle(INTERLEAVE_FILL,13      );
	 bar3d(j*l,u,j*l+10,b,5,5);
}
d2(n,p,q,r,s);
 getch();
closegraph();
}


void d2(int n,int x1,int x2,int y1,int y2)
{

    int k ;
	setcolor(BLUE  );
    for(i=1,k=n,x1=350,x2=x1+190,y1=470,y2=y1-20 ; i<=n ; i++,x1+=10,x2-=10,y1-=20,y2-=20,k--)
    {
	setfillstyle(WIDE_DOT_FILL,1);
		setcolor(14) ;
	bar3d(x1+60,y1-42,x2+60,y2-42,5,5);

    }
    }