#include<stdio.h>
void shyam(int n)
{
    printf("\nHELLO");
    if(n<3)
    {
        shyam(n+1);
    }
    printf("\n2222");
}
int main()
{
    shyam(1);
}