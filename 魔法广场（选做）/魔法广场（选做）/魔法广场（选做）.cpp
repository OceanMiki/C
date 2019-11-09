#include<stdio.h>
int main(void)
{
	double n,s,p,i,PI=3.1415926;
	scanf("%lf",&n);
	for(s=0,i=1;s<=n;i++){
		p=i*i;
		s=PI*p;
	}
	printf("%.2f\n",s);
	return 0;
}