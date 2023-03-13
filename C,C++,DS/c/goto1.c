#include<stdio.h>
int main()
{
 int a=1,b;
 lable1:
	if(a<=5)
	{
	 b=1;
	 lable2:
		if(b<=a)
		{
		 printf(" %d ",b);
		 b++;
		 goto lable2;
		}
		printf("\n");
		a++;
		goto lable1;
	}
	return 0;
} 