#include <stdio.h>
#define n 10
int a[n], b, c, d;
void input()
{
    for (c = 0; c < n; c++)
    {
        printf("Enter the arry a[%d]:", c);
        scanf("%d", &a[c]);
    }
}
int lisearch()
{
    printf("Enter the search number :");
    scanf("%d", &b);
    for (c = 0; c < n; c++)
        if (a[c] == b)
            return c + 1;
    return -1;
}
int main()
{

    input();
    c = lisearch();
    if (c < 0)
    {
        printf("not found");
    }
    else
    {
        printf("position %d :", c);
    }
}