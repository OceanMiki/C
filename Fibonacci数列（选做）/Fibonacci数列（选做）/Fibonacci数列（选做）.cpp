#include<stdio.h>  
int main (void)  
{  
    long int m,n,a[92],i,c,b;  
    scanf("%ld %ld",&c,&b);  
    if(c>b){
		m=b;
		n=c;
	}
	if(c<b){
		m=c;
		n=b;
	}
    a[0]=1;a[1]=1;  
    for(i=2;i<n;i++)  
        a[i]=a[i-1]+a[i-2];  
    i--;  
    for(;i>=m;i--)  
        printf("%ld ",a[i]);  
        printf("%ld\n",a[m-1]);  
        return 0;  
}  