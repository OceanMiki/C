#include<stdio.h>
int main()
{
	int m,n,s,i,q,l,p;
	scanf("%d %d %d",&m,&n,&s);
	for(l=0,p=0;l<s;m++,l=l+10-n){
		for(i=n,q=0;q<10-n&&p<s;i++,q++){
			printf("%d*%d=%d\n",m,i,m*i);
		        p++;
		}
}
	return 0;
}



