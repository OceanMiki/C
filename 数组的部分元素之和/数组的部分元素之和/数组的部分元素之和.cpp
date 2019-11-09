#include <stdio.h>  
void ex(int *p1,int *p2,double *p)  
{  
    int j;  
    double b=0;  
    for (j=*p1-1;j<*p2;j++) b=b+*(p+j);  
    printf ("%.6lf\n",b);  
}  
int main ()  
{  
    int m,n,i;   
    double a[100];  
    scanf ("%d",&i);  
    for (int j=0;j<i;j++) scanf ("%lf",&a[j]);  
    scanf ("%d,%d",&m,&n);  
    ex(&m,&n,&a[0]);  
    return 0;  
}  