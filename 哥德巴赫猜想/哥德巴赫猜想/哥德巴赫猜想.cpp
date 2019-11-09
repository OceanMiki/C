#include<stdio.h>
int sushupanduan(int n)
{
	int i=1,shibushisushu;
	while(i<n){
		i++;
		if(n%i==0)
        break;
	}
	if(i<n)
		shibushisushu=0;
	else
		shibushisushu=1;
	return (shibushisushu);
}
int main(void)
{
	int gedebahe,i;
	while(scanf("%d",&gedebahe)!=-1){
		for(i=3;i<gedebahe/2;i++){
			if(sushupanduan(i)!=0&&sushupanduan(gedebahe-i)!=0)
            break;}
				printf("%d=%d+%d\n",gedebahe,i,gedebahe-i);	
	}
		return 0;
	}