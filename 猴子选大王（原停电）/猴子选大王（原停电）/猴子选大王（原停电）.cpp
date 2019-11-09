#include<stdio.h>
int main(void)
{
	int n,m,i,k,s=0;
	scanf("%d %d",&n,&k);
	for(m=1;;m++){
	for(i=1;i<=n;i++){
		s=(s+m)%i;}
	if(s+1==k)break;
	    s=0;
	}
	printf("%d\n",m);
	return 0;
}
