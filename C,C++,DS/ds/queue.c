#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1,item;
void rear()
{
    printf("Enter Element in queue :");
    scanf("%d", &item);
    if (r < 0)
    {
        f = 0;
        a[++r] = item;
    }
    else if (r + 1 == n)
    {
        printf("Queue is full");
    }
    else
    {
        a[++r] = item;
    }
}
void front()
{
    if (f == -1)
    {
        printf("Queue is empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        printf("Deleted %d", a[f]);
        f++;
    }
}
void show()
{
    int i;
    for (i = f; i <= r; i++)
    {
        if (i == -1)
        {
            printf("Queue is empty");
        }
        else
        {
            printf("%d   ",a[i]);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n 1.REAR INSERT");
        printf("\n 2.FRONT DELETE");
        printf("\n 3.FRONT INSERT");
        printf("\n 4.REAR DELETE");
        printf("\n 5.SHOW ");
        printf("\n 0.EXIT");
        printf("\nEnter the choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rear();
            break;
        case 2:
            front();
            break;
        case 5:
            show();
            break;
        case 0:
            return 0;
            break;
        default:
            printf("invalide option");
        }
    }
}