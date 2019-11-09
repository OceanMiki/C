#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2){
        n=n*3+1;
		printf("%d\ ",n);
		}
		else{
        n=n/2;
		printf("%d\ ",n);
		}
	}
	printf("1\n");
	return 0;
}