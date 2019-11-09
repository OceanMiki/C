#include<stdio.h>    
  
int main(void)   
{  
    long int m,k,t=0;  
    scanf("%ld %ld",&m,&k);  
        for(long int i=2;i<= m; i++){  
            t=(t+k)%i; 
	}
    printf("%ld\n",t+1);  
    return 0;  
}  
	