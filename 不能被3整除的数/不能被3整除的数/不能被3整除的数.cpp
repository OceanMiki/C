#include<stdio.h>
int main(void)
{
	int a,b,m,n,i;
	scanf("%d %d",&a,&b);
	if(a>b){
		m=a;
		n=b;}
	if(a<b){
		m=b;
		n=a;}
	for(i=n;i<=m;i++){
		if(i%3==0)continue;
		printf("%d\ ",i);
	}
	printf("\n");
	return 0;
}