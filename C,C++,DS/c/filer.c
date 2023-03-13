#include<stdio.h>
int main()
{
 FILE*fp;
 char buff[128];

 fp=fopen("skill.txt","r");
 while(fscanf(fp,"%s",buff)!=EOF)

 {
  printf("%s",buff);
 }
 fclose(fp);
}