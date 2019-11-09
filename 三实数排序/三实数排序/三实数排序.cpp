#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b)
	{
		int flag=a;
		a=b;
		b=flag;
	}
	if(a>c)
	{
		int flag=a;
		a=c;
		c=flag;
	}
	if(b>c)
	{
		int flag=b;
		b=c;
		c=flag;
	}

	printf("%d %d %d\n",(int)a,(int)b,int(c));
	return 0;
}

