#include<stdio.h>
int main()
{
	long a, b, c;
	scanf("%ld %ld %ld",&a, &b, &c);
	printf("%ld\n",a*a*a+b*b*b+c*c*c);
	return 0;
}