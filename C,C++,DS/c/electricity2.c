#include<stdio.h>
int main()
{
    int unit;
    float total;
    printf("Enter the unit : ");
    scanf("%d",&unit);

    if(unit<=200)
    {
        total=unit*0.9+100;
        printf("total bill 1:%f",total);
    } 
    else if(unit<=350)
    {
        total=(200*0.9)+((unit-200)*1)+100;
        printf("total bill 2:%f",total);
    }
    else if(unit>=350)
    {
        total=(200*0.9)+(150*1)+((unit-350)*1.25)+100;
        printf("total bill 3:%f",total);
    }
    if(total>=400)
    {
        total=total*15/100;
        printf("\n\n:%f",total);
    }

    return 0;
}