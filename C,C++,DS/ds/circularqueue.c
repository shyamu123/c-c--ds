#include<stdio.h>
#define size 5
int q[size];
int front=0,rear=0,element;
void enqueue()
{
    printf("Enter the number :");
    scanf("%d",&element);
    if((rear+1)%size==front)
    {
        printf("Queue Is Full");
    }
    else
    {
        rear=(rear+1)%size;
        q[rear]=element;
    }
    printf("\n front :%d\t rear:%d",front,rear);
}
void delete()
{
    if(rear==front)
    {
        printf("Queue is empty");
        rear=front=0;
    }
    else
    {
        front=(front+1)%size;
        
    }
}
void display()
{
    printf("\n");
    if(rear==front)
    {
        printf("Queue is empty");
    }
    else
    {
    int i=front+1;
    do
    {
        printf("\t%d",q[i]);
        i=(i+1)%size;
    }
    while(i!=(rear+1)%size);
    printf("\n front :%d\t rear:%d",front,rear);
}
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n 1.INSERT");
        printf("\n 2.DELETE");
        printf("\n 3.DISPLAY");
        printf("\n 0.EXIT");
        printf("\nEnter the choice :");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
               
                enqueue();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 0:
                return 0;
                break;
            default:
                printf("invalide option");
        }
    }
}