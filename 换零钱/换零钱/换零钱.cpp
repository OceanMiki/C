#include<stdio.h>
int main(void)
{
	long int n,i=0;
	long int ten,five,one;
	scanf("%ld",&n);
	for(ten=1;ten<=n/10;ten++){
		for(five=1;five<=(n-ten*10)/5;five++){
			one=n-five*5-ten*10;
			if(one+five*5+ten*10==n&&one>=1){
				i++;}
		}
		}
	printf("%ld\n",i);
	return 0;
}
