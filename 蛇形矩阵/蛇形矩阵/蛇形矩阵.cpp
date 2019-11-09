#include<stdio.h>
int main()
{
 int n,x,i,j,max,b,bb,bian;
 scanf("%d",&n);
 int a[10][10];
     i=(n+1)/2; 
     a[i][i]=1;
     j=i;
     x=1;
     bian=0;
     max=n*n;
 while(x<=max)
 {
     bian++;
     b=bian; 
     bb=bian;
     while(b!=0)
   {
	   x++; 
       j++; 
       a[i][j]=x;
       b--;
   } 
   while(bb!=0){
	   x++; 
       i--; 
       a[i][j]=x;
       bb--;}
       bian++;
       b=bian; 
       bb=bian;
   while(b!=0){
	   x++;
       j--; 
       a[i][j]=x; 
       b--;
   }
   while(bb!=0){
	   x++;
       i++; 
       a[i][j]=x; 
       bb--;
   }
 }
 for(i=1;i<=n;i++)
 {
   for(j=1;j<n;j++){
	   printf("%d ",a[i][j]);}
   printf("%d\n",a[i][j]);
    }
   
    max=0;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        if((i==j)||(i+j==n+1))
			max+=a[i][j];
    printf("%d\n",max);
 return 0;
}




