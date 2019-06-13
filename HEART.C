#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
char name[15];
int r()
{
   char randomletter;
   randomize();
   randomletter = 65+random(27);
   return randomletter;
}
void l(int start, int stop, int y)
{
   int x;
   for(x=start;x<=stop;x++)
   {
     gotoxy(x,y);
     cprintf("%c",r());
   }
   delay(100);
}
void heart()
{
   int x;
   l(40,40,24);
   l(39,41,23);
   l(38,42,22);
   l(36,44,21);
   l(34,46,20);
   l(31,49,19);
   l(29,51,18);
   l(28,52,17);
   l(28,52,16);
   l(29,51,15);
   l(29,51,14);
   l(31,39,13);   l(41,49,13);
   l(33,37,12);   l(43,47,12);
}


void l2(int start, int stop, int y)
{
   int x;
   for(x=start;x<=stop;x++)
   {
     gotoxy(x,y);
     cprintf("%c",r());
   }
}
void beat()
{
   int x;
   textcolor(RED);
   l2(40,40,24);
   l2(39,41,23);
   l2(38,42,22);
   l2(36,44,21);
   l2(34,46,20);
   l2(31,49,19);
   l2(29,51,18);
   l2(28,52,17);
   l2(28,52,16);
   l2(29,51,15);
   l2(29,51,14);
   l2(31,39,13);   l2(41,49,13);
   l2(33,37,12);   l2(43,47,12);
   gotoxy(37,18);
   textcolor(GREEN);
   cprintf("%s",name);
}
void main()
{
   int i;
   clrscr();
   textcolor(RED);
   printf("Enter his/her name: ");
   scanf("%s",&name);
   heart();
   for(i=0; i<10; i++)
   {
      clrscr();
      delay(300);
      beat();
      delay(300);
   }
   getch();
}

