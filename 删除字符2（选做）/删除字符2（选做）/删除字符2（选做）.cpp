#include<stdio.h>
#include<string.h>
void squeeze(char s1[],char s2[]){
	int i,j,k=0,m=0,l,n;
	char tmp[100];
	n=strlen(s1);
	k=strlen(s2);
		for(i=0,l=0;i<n;i++){
		for(j=0;j<k;j++){
			if(s1[i]==s2[j])
				m=1;}
		if(m==0)
			printf("%c",s1[i]);
		m=0;
		}	
}
int main(void){
	char s1[100],s2[100];
	printf("please input string1:\n");
	gets(s1);
	printf("please input string2:\n");
	gets(s2);
	squeeze(s1,s2);
	printf("\n");
}