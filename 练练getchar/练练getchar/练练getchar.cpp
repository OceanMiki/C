#include<stdio.h>
#include<windows.h>
int main()
{
	int ch;
	while((ch=getchar())!='!'){
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){  
	      if(ch=='z')
			  ch='a';
	      else if(ch=='Z')
			  ch='A';
		  else
			  ch=ch+1;}
		  printf("%c\n",ch);
	}
	printf ("×Ö·û´®½áÊø\n");
	system("pause");
	return 0;
	}