#include<stdio.h>
int main()
{
  float a,b=0.5,n;
  printf("Enter the number:");
  scanf("%f	",&n);
  for(a=0.5;a<=n;a++)
  {
	printf("\n%.2f",b);
	b+=a;
  }
  return 0;
}