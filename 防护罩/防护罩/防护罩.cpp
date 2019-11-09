#include<stdio.h>
int main(void)
{
	int x,y,sum;
	double r;
	scanf("%lf",&r);
	for(x=1,y=1,sum=0;x*x+y*y<=r*r;x++){
		while(x*x+y*y<=r*r){
			y++;
		    sum++;}
		    y=1;}
	printf("%d\n",sum*4);
}
		