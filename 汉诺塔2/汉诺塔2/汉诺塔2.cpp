#include<stdio.h>
#include<math.h>
int main(void)
{
	double n;
	int m;
	scanf("%lf",&n);
	m=pow(2,n);
	printf("%d\n",m-1);
	return 0;
}