#include<stdio.h>
int main()
{
	int a,n,i,r=0,sum=0;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++){
		r=10*r+a;
		sum=sum+r;}
	printf("%d\n",sum);
	return 0;
}