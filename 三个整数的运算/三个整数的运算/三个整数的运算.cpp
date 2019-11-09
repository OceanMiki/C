#include<stdio.h>
int main()
{
	int x, y, z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d+%d+%d=%d\n",x,y,z,x+y+z);
	printf("%d-%d-%d=%d\n",x,y,z,x-y-z);
	printf("%d*%d*%d=%d\n",x,y,z,x*y*z);
	printf("%d/%d/%d=%d\n",x,y,z,x/y/z);
	printf("%d%%%d%%%d=%d\n",x,y,z,x%y%z);
	return 0;
}