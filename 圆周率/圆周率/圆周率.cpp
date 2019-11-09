#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a;
	double sum=0,PI;
	scanf("%d",&n);
    for(i=1;(2*i-1)<=n;i++)
	{
		a=pow(double(-1),i+1);
		sum=sum+a*(1/(double)(2*i-1));
	}
	PI=4*sum;
	printf("%.8f\n",PI);
	return 0;
}
