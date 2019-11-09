#include<stdio.h>
int main()
{
	char a,b,c,d,e,f,g,h,i,j;
	int n;
	scanf("%c %c %c %c %c\n%d",&a,&b,&c,&d,&e,&n);
	if((a>=65&&(a+n)<=90)||(a>=97&&(a+n)<=122)){
		j=a+n;}
	else
		j=a+n-26;
	if((b>=65&&(b+n)<=90)||(b>=97&&(b+n)<=122)){
		f=b+n;}
	else
		f=b+n-26;
	if((c>=65&&(c+n)<=90)||(c>=97&&(c+n)<=122)){
		g=c+n;}
	else
		g=c+n-26;
	if((d>=65&&(d+n)<=90)||(d>=97&&(d+n)<=122)){
		h=d+n;}
	else
		h=d+n-26;
	if((e>=65&&(e+n)<=90)||(e>=97&&(e+n)<=122)){
		i=e+n;}
	else
		i=e+n-26;
	printf("%c%c%c%c%c\n",j,f,g,h,i);
	return 0;
}

	

