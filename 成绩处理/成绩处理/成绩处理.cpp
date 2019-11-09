#include<stdio.h>
int main(void)
{
	int n,i=0,j,max,min;
	double average,total=0;
	scanf("%d\n",&n);
	int a[1000];
	while(scanf("%d",&a[i])!=-1){
		i++;
	}
	for(j=0;j<i;j++){
		total=total+a[j];}
	average=total/n;
	max=a[0];
	min=a[0];
	for(j=1;j<i;j++){
		if(max<a[j])
			max=a[j];}
	for(j=1;j<i;j++){
		if(min>a[j])
			min=a[j];
	}
	printf("%d %d %.2f\n",max,min,average);
	return 0;
}
		