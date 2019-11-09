#include<stdio.h>
int main()
{
	int n,i,a;
	long int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=i*i;
		sum=sum+a;
	}
	printf("%ld\n",sum);
	return 0;
}
		

