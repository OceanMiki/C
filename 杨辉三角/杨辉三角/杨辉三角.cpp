#include<stdio.h>
int main(void)
{
	int n,i,j;
	int a[25][25];
	scanf("%d",&n);
		for(i=0;i<n;i++){
			a[i][0]=1;
			a[i][i]=1;
			for(j=1;j<i;j++){
				a[i][j]=a[i-1][j-1]+a[i-1][j];}
		}
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				printf("%d ",a[i][j]);}
			printf("%d\n",a[i][i]);
		}
		return 0;
	}

