#include<stdio.h>
int main()
{
	double x,a,y,b,z;
	scanf("%lf %lf %lf %lf",&x,&a,&y,&b);
	z=(b*y-a*x)/(b-a);
	printf("%.2f\n",z);
	return 0;
}

