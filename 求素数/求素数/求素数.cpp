#include<stdio.h>
int main(void)
{
	long int m,n,a,b,i,j,t;
	scanf("%ld %ld",&a,&b);
	if(a>b){
		m=a;
		n=b;}
	if(a<b){
		m=b;
		n=a;}
	if(a==b){
		m=a;
		n=a;
	}
		for(i=n;i<=m&&i>=n;i++){
			if(i==2){
				printf("%d\ ",i);}
			for(j=2;j<i;j++){
				if(i%j!=0){
					t=1;}
				if(i%j==0){
					t=0;break;}
			}
				if(t==1){
					printf("%ld\ ",i);
					}
		}
		printf("\n");
		
		return 0;
}