#include <stdio.h>
#include<windows.h>
int main()
{
long int n,i=1;
scanf("%ld",&n);
while(i<=n)
{
if(n%i==0)printf("%ld ",i);
i++;
}
system("pause");
return 0;
} 