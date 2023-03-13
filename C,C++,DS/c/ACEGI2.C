#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  clrscr();
  for(a=0;a<=20;a++)
  {
	if(a%4==0)
	{
		printf("\n%c",a+65);
	}
	else
	{
		printf("\n%c",a+35+65);
	}
	a++;
  }
  getch();
}