#include<stdio.h>
#include<string.h>
void del_ch(char*s1,char ch){
	int i=0,j=0;
	char tmp[100];
	while(s1[i]!='\0'){
		if(s1[i++]!=ch)
			tmp[j++]=s1[i-1];
	}
	tmp[j]=0;
	strcpy(s1,tmp);
}
int main(void)
{
	int i=0;
	char s1[100],ch;
		while((s1[i]=getchar())!='\n')
		{
			i++;
		}
		s1[i]='\0';
		ch=getchar();
		del_ch(s1,ch);
		printf("%s\n",s1);
		return 0;
}