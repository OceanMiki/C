#include<stdio.h>  
#include<math.h>  
int isprime(int n)  
{  
    int i, k, m;  
    k=0;m=sqrt(n*1.0);  
    {  
        for (i = 1;i <= m;i++)  
        {  
            if (n%i == 0)  
                k = k + i + n/ i;  
        }  
        k = k - n;  
    }  
    return(k == n);  
}  
void printyinzi(int n)  
{  
    int i;  
    if(n==1)  
        printf("%d \n",1);  
    else{  
        for(i=1;i<=n-1;i++){  
            if(n%i==0)  
                printf("%d ",i);  
              
        }  
        printf("\n");  
    }  
}  
int main(void)  
{  
    int m,n,i;  
    scanf("%d %d",&m,&n);  
    for(i=m;i<=n;i++){  
        if(isprime(i)==1){  
            printf("%d: ",i);  
            printyinzi(i);  
        }  
    }  
    return 0;  
}  