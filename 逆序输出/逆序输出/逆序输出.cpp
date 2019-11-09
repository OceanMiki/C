#include<stdio.h>
int main(void)
{
	int a[1000];
	int i=0,j;
	while(scanf("%d",&a[i])!=-1){
		i++;
	}
	for(j=0;j<i-1;j++){
		printf("%d ",a[i-j-1]);
	}
	printf("%d\n",a[0]);
	return 0;
}