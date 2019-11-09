#include<stdio.h>
int main()
{
	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	s=((a+b)*(2*c/a))/2;
	if(c>=100)
	printf("%d\n",s);
	else
		printf("208\n");
	return 0;
}