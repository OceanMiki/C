#include<stdio.h>
int main(void)
{
	int n,i,j,k,a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   for(j=1;j<=(n-i);j++){
		   printf("\ ");}
		      for(k=1;k<=(2*i-1);k++){
				   printf("*");}
			  printf("\n");}
	for(a=n+1;a<=2*n-1;a++){
		for(b=1;b<=a-n;b++){
			printf("\ ");}
		       for(c=1;c<=4*n-2*a-1;c++){
				   printf("*");}
			   printf("\n");
	}
	return 0;
}
