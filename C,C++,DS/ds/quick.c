#include<stdio.h>
#include<stdlib.h>
int n,cnt=0;
void print(int a[])
{
    int i;
    printf("\n %d-->",++cnt);
    for(int i=0;i<n;i++)
        printf("%d",a[i]);
}
void quicksort(int a[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        printf("\ninside quick :");
        print(a);
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[i]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int i,a[25],min=20,max=101;
    printf("how many element :");
    scanf("%d",&n);
    printf("enter %d element :",n);
    for(i=0;i<n;i++)
        a[i]=(rand()%(max-min+1))+min;
    print(a);
    quicksort(a,0,n-1);
    printf("\norder of sorted elements :");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    return 0;
}