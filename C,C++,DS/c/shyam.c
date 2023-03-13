#include<stdio.h>
int main()
{
 int a=1000,b=200,c=30;
 (a>b && a>c) ? printf("a(%d)is largest",a) : b>c ? printf("b(%d)is largest",b) : printf("c(%d)is largest",c);
 return 0;
}