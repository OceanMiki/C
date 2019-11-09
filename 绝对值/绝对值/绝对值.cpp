#include<stdio.h>
int main()
{
	long int a;
	scanf("%ld",&a);
	if(a>=0)
		printf("%ld\n",a);
	else
		printf("%ld\n",-a);
	return 0;
}
