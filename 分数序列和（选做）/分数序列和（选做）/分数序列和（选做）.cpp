#include<stdio.h>
int main(void)
{
	int i,n;  
    double temp,sum,a,b;  
    scanf("%d",&n);  
    for(sum=0,a=2,b=1,i=0;i<n;i++){  
        sum=sum+a/b;  
        temp=a;  
        a=a+b;  
        b=temp;  
    }  
    printf("%.6f\n",sum);  
  
    return 0;  
}  