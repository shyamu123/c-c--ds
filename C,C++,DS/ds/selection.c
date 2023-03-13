#include <stdio.h>
#include <stdlib.h>
#define size 5
int a[size], b, c, temp;
void enter()
{
    for (b = 0; b < size; + b++)
    {
        a[b] = rand() % 10;
    }
}
void ss()
{
    for (b = 0; b < size; b++)
    {
        for (c = b+1; c < size; c++)
        {
            if (a[b] < a[c])
            {
                temp = a[c];
                a[c] = a[b];
                a[b] = temp;
            }
        }
    }
}
void out()

{
    for (b = 0; b < size; b++)
    {
        printf("\n%d", a[b]);
    }
}
int main()\
{
    enter();
    out();
    printf("\n");
    ss();
    out();
}