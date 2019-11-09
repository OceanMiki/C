#include<stdio.h>

int main(void)
{
	int i,n,j;
	long int m;
	double term,e=0;
	scanf("%d",&n);
	   for(i=0;i<=n;i++){
           for(j=1,m=1;j<=i;j++)
            {
               m*=j;}
                 e+=1.0/m;
                     }
               printf("%.8lf\n",e);

	       return 0;
}

		
