#include<stdio.h>
int main(void)
{
	int n,i,j,k,m,a[11];
	scanf("%d",&n);
	for(i=0;i<=10;i++){
		a[i]=0;}
	for(k=1,j=1,m=2;k<=n;k++,m++){
		a[j]=1;
		j=j+m;
		if(j>10){
			j=j%10;}
	}
	for(i=1;i<=10;i++){
		if(a[i]==0){
			printf("%d ",i);}
	}
	printf("\n");
	return 0;
}

