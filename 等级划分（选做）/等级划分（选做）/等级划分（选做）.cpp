#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
	 case 65:printf("Very good!\n");break;
	 case 66:printf("Good!\n");break;
     case 67:printf("OK!\n");break;
	 case 68:printf("Bad!\n");break;
	 case 69:printf("Too bad!\n");break;
	 default:break;
	}
}
