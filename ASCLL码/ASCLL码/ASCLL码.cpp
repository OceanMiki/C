#include<stdio.h>
int main()
{
	int a;
	while(1)
	{
		scanf("%d",&a);
		printf("%4d:%c\n",a,a);
		if(getchar()=='\n'){
			break;}
	}	
	return 0;
}

