#include<stdio.h>
int main()
{
	int a,b,c,d,e,m;
	scanf("%d %d",&a,&b);
	d=a;
	e=b;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;}
	m=(d*e)/a;
	printf("%d %d\n",a,m);
	return 0;
}

