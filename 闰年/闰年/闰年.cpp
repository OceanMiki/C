#include<stdio.h>
int main()
{
	long int n,m,q,l;
	scanf("%ld",&n);
	m=n%400;
	q=n%4;
	l=n%100;
	if(m==0&&q==0||q==0&&l>0){
		printf("Y\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}
