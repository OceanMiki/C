#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2;
	scanf("%lf %lf %lf\n",&a, &b, &c);
	if(a==0){
		printf("0\n");
	}
	else{ 
		if((b*b-4*a*c)<0)
		printf("-1\n");
	    else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.2f\n",x1);
		printf("x2=%.2f\n",x2);}
	}
		return 0;
	}