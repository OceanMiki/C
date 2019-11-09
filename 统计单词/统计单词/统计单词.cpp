#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,n,m=0;
	gets(a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '&&a[i+1]==' ')
			m++;}
		if(a[n-1]!=' ')
			m++;
	printf("%d\n",m);
	return 0;
}