#include<stdio.h>
int main(void)
{
	int m,n,i,j;
	int a[100][100],b[100][100];
	scanf("%d %d\n",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			b[j][i]=a[i][j];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m-1;j++)
			printf("%d ",b[i][j]);
	printf("%d\n",b[i][m-1]);
}
	return 0;
}
