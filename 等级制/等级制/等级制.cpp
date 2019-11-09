#include<stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	if(a>=90){
		printf("A\n");
	}
	if((a>=80)&&(a<90)){
		printf("B\n");
	}
	if((a>=70)&&(a<80)){
		printf("C\n");
	}
	if((a>=60)&&(a<70)){
		printf("D\n");
	}
	if(a<60){
		printf("E\n");
	}
	return 0;
}