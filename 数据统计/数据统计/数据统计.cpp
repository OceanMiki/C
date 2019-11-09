#include<stdio.h>
int main(void)
{
	int a[100000],b[21],i=0,j,k;
	while(scanf("%d",&a[i])!=-1){
		i++;
	}
	for(k=0;k<=20;k++){
	for(j=0;j<i;j++){
		if(k==a[j])
			b[k]++;}
	}
	printf("%d\n",i);
	for(k=0;k<20;k++){
		printf("%d ",b[k]);}
	printf("%d\n",b[20]);
	return 0;
}