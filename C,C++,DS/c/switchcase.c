#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter the number A:");
    scanf("%d",&a);
    printf("Enter the number B:");
    scanf("%d",&b);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n1 adition");
    printf("\n2 subtraction");
    printf("\n3 multiplication");
    printf("\n4 division");
    printf("\n Enter the choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
                printf("a+b = %d",a+b);
                break;
        case 2 :
                printf("a-b = %d",a-b);
                break;
        case 3 :
                printf("a*b = %d",a*b);
                break;
        case 4 :
                printf("a/b = %d",a/b);
                break;
        default :
                printf("wrong ! choice...");
                break;
    }
}
