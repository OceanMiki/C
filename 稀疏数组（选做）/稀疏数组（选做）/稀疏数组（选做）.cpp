#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[50][50];
	int i,j,n,m,num=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			if(a[i][j]!=0){
				num++;
			}
	}
			printf("%d %d %d\n",n,m,num);
			for(i=0;i<n;i++){
		        for(j=0;j<m;j++)
			        if(a[i][j]!=0){
						printf("%d %d %d\n",i,j,a[i][j]);}
			}
			return 0;
}