#include<stdio.h>
int main(void)
{
	int n,a[100000],i,j,med;
	scanf("%d\n",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);}
	scanf("%d\n",&a[0]);
	if(a[1]<a[2]||a[2]<a[3]){
		for(j=1,i=0;j<n+1;j++,i++){
			if(a[i]>a[j]){
				med=a[j];
				a[j]=a[i];
				a[i]=med;}
		}
	}
		if(a[1]>a[2]||a[2]>a[3]){
			for(j=1,i=0;j<n+1;j++,i++){
				if(a[i]<a[j]){
					med=a[j];
					a[j]=a[i];
					a[i]=med;}
			}
		}
		for(i=0;i<n+1;i++){
			printf("%d ",a[i]);}
		printf("\n");
		return 0;
}



