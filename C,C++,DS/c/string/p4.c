ṇ#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char s[100];
	printf("Enter your string :");
	gets(s);

	for (i = 0; i < strlen(s) / 2; i++)
	printf("%c%c", s[i], s[(strlen(s) - 1) - i]);
}
if (strlen(s) % 2 != 0)
{
	printf("%c", s[(strlen(s) / 2)]);
}