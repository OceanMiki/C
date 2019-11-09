#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%03d\n",n/100+((n-(n/100)*100)/10)*10+(n-(n/100)*100-((n-(n/100)*100)/10)*10)*100);
	return 0;
}




