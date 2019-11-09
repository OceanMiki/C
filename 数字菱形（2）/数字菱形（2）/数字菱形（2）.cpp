#include<stdio.h>
int main(void)
{
	int n,i,j,k,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   for(j=1;j<=(n-i);j++){
		   printf("\ ");}
		      for(k=i;k>=1;k--){
				  printf("%d",k);}
				   for(k=2;k<=i;k++){
					   printf("%d",k);}
			  printf("\n");}
	for(a=n+1;a<=2*n-1;a++){
		for(b=1;b<=a-n;b++){
			printf("\ ");}
		       for(c=2*n-a;c>=1;c--){
				   printf("%d",c);}
			          for(c=2;c<=(2*n-a);c++){
						  printf("%d",c);}
			   printf("\n");
	}
	return 0;
}