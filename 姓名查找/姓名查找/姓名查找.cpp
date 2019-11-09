#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,i,len1,len2,j,k=-1,q=0;
	scanf("%d",&n);
	char s[50][50];
	for(i=0;i<n+1;i++){
		scanf("%s",s[i]);}
	len1=strlen(s[n]);
	for(i=0;i<n;i++){
		len2=strlen(s[i]);
	if(len1==len2){
		for(j=0;j<len1;j++){
			if(s[i][j]!=s[n][j]){
				q=1;}
		}
			if(q==0){
				k=i+1;}
			q=0;
	}
	}
	printf("%d\n",k);
	return 0;
}
