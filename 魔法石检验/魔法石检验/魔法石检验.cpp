#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d %d\n",n/100,((n-(n/100)*100)/10),(n-(n/100)*100-((n-(n/100)*100)/10)*10));
	return 0;
}