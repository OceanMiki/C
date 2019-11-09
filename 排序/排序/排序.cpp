#include<stdio.h>
int main(void)
{
	int a[100000],n,i,k,j,med;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++){
		k=i;
		for (j=i+1;j<n;j++)         if (a[j]<a[k] ) k=j;	     if( k!=i){            med=a[i];               a[i]=a[k];            a[k]=med;}}     for( i=0; i<n-1; i++){		 printf("%d ",a[i]);	 }	 printf("%d\n",a[n-1]);	 return 0;}