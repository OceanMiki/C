#include<stdio.h>
int main()
{
	int a,b,c,r,m,q,l,e,z;
	scanf("%d %d %d",&a,&b,&c);
	m=a%400;
	q=a%4;
	l=a%100;
	if(m==0&&q==0||q==0&&l>0){
		e=29;
	}
	else{
			e=28;
			z=1;
	}
	switch(b){
	case 1:r=c;break;
	case 2:r=31+c;break;
	case 3:r=31+e+c;break;
	case 4:r=62+e+c;break;
	case 5:r=92+c;break;
	case 6:r=123+e+c;break;	
	case 7:r=153+e+c;break;
	case 8:r=184+e+c;break;
	case 9:r=215+e+c;break;
	case 10:r=245+e+c;break;
	case 11:r=276+e+c;break;
	case 12:r=306+e+c;break;
	default:printf("data error!\n");break;
	}
	if(z==1&&b==2&&c==29||c>=32||((b==4||b==6||b==9||b==11)&&c>30))
		printf("data error!\n");
	else
	    printf("%d\n",r);
}