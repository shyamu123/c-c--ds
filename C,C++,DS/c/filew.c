#include<stdio.h>
int main()
{
 FILE*fp;
 fp=fopen("skill.txt","w+");
 fprintf(fp,"shyamu rabadiuya");
 fputs("rabadiya",fp);
 fclose(fp);
}