#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c=15;

 for(a=1;a<=5;a++)
 {
	for(b=1;b<=c;b++)
	{
		printf(" ");
	}
	for(b=1;b<=a;b++)
	{
		printf("*");
	}
	c--;
	printf("\n");
 }
 
}