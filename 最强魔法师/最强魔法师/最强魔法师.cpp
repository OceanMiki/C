#include<stdio.h>
int main(void)
{
	int a[100][100],i,j,max,maxi=0,maxj=0,m,n;
	scanf("%d %d",&m,&n);
      for(i=0;i<m;i++){
          for(j=0;j<n;j++)
		     scanf("%d",&a[i][j]);}
      max=a[0][0];
      for(i=0;i<m;i++)
         for(j=0;j<n;j++)
           if(a[i][j]>max){
             max=a[i][j];
	         maxi=i;
	         maxj=j;
	  }
      printf("%d %d %d\n",max,maxi,maxj);
	  return 0;
}