#include <stdio.h>
#define n 10
int a[n], pos = -1, i, c;
void lastinsert(int b)
{
    if (pos > n)
    {
        printf("Arry is full");
    }
    else
    {
        a[++pos] = b;
    }
}
void lastdelet()
{
    if (pos < n)
    {
        printf(" Empty ");
    }
    else
    {
        c = a[--pos];
    }
}
void out()
{
    for (i = 0; i <= pos; i++)
    {
        printf("\na[%d]:%d", i, a[i]);
    }
}
int main()
{
    int ch, s;
    while (ch != 0)
    {
        printf("\n1.lastinsert");
        printf("\n2.last delete");
        printf("\n3.out");
        printf("\nEnter the choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the number :");
            scanf("%d", &s);
            lastinsert(s);

            break;
        }
        case 2:
        {
            lastdelet();

            break;
        }
        case 3:
        {
            out();

            break;
        }
        case 0:
        {
        
            break;
        }
        default:
        {
            printf("wrong choice...");
            break;
        }
        }
    }
    return 0;
}