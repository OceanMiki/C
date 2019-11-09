#include<stdio.h>  
int main(void)  
{  
    long int weishu=0,pingfang=0,youzhi=0,m,n,a,b,t=0,cishu=1;  
    scanf("%ld %ld",&a,&b);  
    if(a>b){  
        m=a;  
        n=b;  
    }  
    if(a<b){  
        m=b;  
        n=a;  
    }  
    for(long int i=n;i<=m;i++){
		weishu=0;
		youzhi=0;
		cishu=1;
		t=i;
		pingfang=i*i;
        while(t){
			t=t/10;
			weishu++;}
		while(weishu--){
			youzhi=youzhi+(pingfang%10)*cishu;
			pingfang=pingfang/10;
			cishu=cishu*10;}
		if(i==youzhi){
			printf("%ld ",i);}
	}
	printf("\n");
    return 0;  
}  