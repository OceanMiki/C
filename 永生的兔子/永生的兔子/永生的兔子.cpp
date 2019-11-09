#include<stdio.h>
int main(void)
{
	long int f,f1,f2,i,n;
	scanf("%ld",&n);
	if(n<=2){
		printf("%ld\n",1);}
	if(n>2){
	for(f1=1,f2=1,i=3;i<=n;i++){
		f=f1+f2;
		f2=f1;
		f1=f;
	}
	printf("%ld\n",f);
	}
	return 0;
}