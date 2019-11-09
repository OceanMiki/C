#include<stdio.h>
void sushupanduan(int n)
{
	int i=1,shibushisushu;
	while(i<n){
		i++;
		if(n%i==0)
        break;
	}
	if(i<n||n==1)
		shibushisushu=0;
	else
		shibushisushu=1;
	printf("%d\n",shibushisushu);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	sushupanduan(n);
	return 0;
	}