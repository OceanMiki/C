#include<stdio.h>
#include<windows.h>
#include<string.h>
int main(void)
{
	int n=0;
	char ch[20];
    gets(ch);
	n=strlen(ch);
	printf("%d\n",n);
	puts(ch);
	system("pause");
}