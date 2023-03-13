#include <stdio.h>
#define n 10
int a[n], pos = -1, i;
void lastinsert(int b)
{
    if (pos > n)
    {
        printf(" Arry Is Full ");
    }
    else
    {
        a[++pos] = b;
    }
}
void out()
{
    for (i = 0; i < pos; i++)
    {
        printf("\na[%d]:%d", i, a[i]);
    }
}
int main()
{
    lastinsert(1);
    lastinsert(2);
    lastinsert(3);
    lastinsert(4);
    lastinsert(5);
    lastinsert(6);
    lastinsert(7);
    lastinsert(8);
    lastinsert(9);
    lastinsert(10);
    lastinsert(11);

    out();
}