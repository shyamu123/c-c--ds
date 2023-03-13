#include <stdio.h>
#define n 10
int a[n], pos = -1, i, c, e;
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
void firstinsert(int d)
{
    for (i = pos; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    pos++;
    a[i + 1] = d;
}
void firstdelet()
{
    for (i = 0; i <= pos; i++)
    {
        a[i] = a[i + 1];
    }
    pos--;
}
void midel(int p, int g)
{
    for (i = pos; i > p; i--)
    {
        a[i + 1] = a[i];
    }
    pos++;
    a[i + 1] = g;
}
void mideldelet()
{
    for (i = pos; i <= 0; i--)
    {
        a[i] = a[i + 1];
    }
    pos--;
}
void out()
{
    for (i = 0; i <= pos; i++)
    {
        printf("\t%d", a[i]);
    }
}
int main()
{
    int ch, s, z, m, q;
    while (ch > 0)
    {
        printf("\n1.lastinsert");
        printf("\n2.last delete");
        printf("\n3.first insert");
        printf("\n4.first delete");
        printf("\n5.midel");
        printf("\n6.mideldelete");
        printf("\n7.out");
        printf("\n0.Exit");
        printf("\n\nEnter the choice :");
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
            printf("Enter the number :");
            scanf("%d", &z);
            firstinsert(z);
            break;
        }
        case 4:
        {
            firstdelet();
            break;
        }
        case 5:
        {
            printf("Enter the swich number :");
            scanf("%d", &m);
            printf("Enter the number :");
            scanf("%d", &q);
            midel(m, q);
        }
        case 6:
        {
            mideldelet();
            break;
        }
        case 7:
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