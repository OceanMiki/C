#include <stdio.h>
int main(void)
{
	char a[3][80];
	int i,j,Eng=0,eng=0,num=0,spa=0,other=0;
	for(i=0;i<3;i++)
		gets(a[i]);
	for(i=0;i<3;i++){
		for(j=0;j<80;j++){
			if(a[i][j]>='a'&&a[i][j]<='z')
				eng++;
			if(a[i][j]>='A'&&a[i][j]<='Z')
				Eng++;
			if(a[i][j]==' ')
				spa++;
			if(a[i][j]>='0'&&a[i][j]<='9')
				num++;
		}
	}
		other=240-Eng-eng-num-spa;
		printf("%d\n",Eng);
		printf("%d\n",eng);
		printf("%d\n",num);
		printf("%d\n",spa);
		printf("%d\n",other);
		return 0;
}