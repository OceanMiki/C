#include<stdio.h>
#include<string.h>
int main(void){
	int i,j,k=0,lena,lenb;
	char a[100],b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0){
		k=1;
	}
	lena=strlen(a);
	lenb=strlen(b);
	for(i=lena-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n");
	for(i=lenb-1;i>=0;i--){
		printf("%c",b[i]);
	}
	printf("\n");
	printf("%d\n",k);
	printf("%d %d\n",lena,lenb);
	printf("%s\n",strcat(a,b));
	return 0;
}