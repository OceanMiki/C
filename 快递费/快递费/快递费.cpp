#include<stdio.h>
int main()
{
	double p,w,s;
	double f;
	int a;
	scanf("%lf %lf %lf",&p,&w,&s);
	if(s<250){
		a=1;}
	else{
		if(s>=250&&s<500)
		   a=2;
		else{
			if(s>=500&&s<1000)
				a=3;
			else{
				if(s>=1000&&s<2000)
					a=4;
				else{
					if(s>=2000&&s<3000)
						a=5;
					else{
						a=6;}
				}
			}
		}
	}
	switch(a){
	case 1:printf("%.2f\n",f=p*w*s);break;
	case 2:printf("%.2f\n",f=p*w*s*(1-0.02));break;
	case 3:printf("%.2f\n",f=p*w*s*(1-0.05));break;
    case 4:printf("%.2f\n",f=p*w*s*(1-0.08));break;
	case 5:printf("%.2f\n",f=p*w*s*(1-0.1));break;
	case 6:printf("%.2f\n",f=p*w*s*(1-0.15));break;
	default:break;
	}
}
	
