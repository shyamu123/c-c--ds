#include <stdio.h>
#define n 5
int a[n], b, c, mid, l = 0, h = n;
void input()
{
    for (c = 0; c < n; c++)
    {
        printf("Enter the arry a[%d]:", c);
        scanf("%d", &a[c]);
    }
}
int bisearch()
{
    printf("Enter the search number :");
    scanf("%d", &b);
    while (l<=h)
    {
        mid = (l + h) / 2;
        if (a[mid] == b)
            return mid + 1;
        else if (a[mid] < b)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}
int main()
{
    int c;
    input();
    c = bisearch();
    if(c<0)
    {
        printf("\n Element not found...");
    }
    else
    {
        printf("position : %d", c);
    }
}