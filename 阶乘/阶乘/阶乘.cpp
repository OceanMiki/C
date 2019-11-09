#include<stdio.h>
int main()
{ 
    long int i,n,a;
	n=1;
    scanf("%ld",&a);
    for(i=1;i<=a;i++)
	n=n*i;
    printf("%ld\n",n);
	return 0;
}