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
    int ch;
    while(1)
    {
        printf("\n1.Lisearch..");
        printf("\n2.Biseaech..");
        printf("\n9.Print..");
        printf("\n0.Exit..");    
        printf("\nEnter the choise :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                input();
                break;
            }
            case 9:
            {
                c = lisearch();
                if (c < 0)
                {
                    printf("not found");
                }
                else
                {
                    printf("position : %d ", c);
                }
                break;
            }
            case 0:
            {
                
                return 0;
                break;
            }
            default:
                printf( "wrong choice...");
                break;
        }
    }
}