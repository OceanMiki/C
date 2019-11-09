#include<stdio.h>
#include<string.h>
	int in(char *p, char c);
int compare(char *p1, char *p2);
int main() {
char a1[100], a2[100];
     int r,p,q;
     gets(a1);
     gets(a2);
	 p=strlen(a1);
	 q=strlen(a2);
     r=compare(a1,a2);
     if(r&&p==q)
     printf("Yes.\n");
     else
     printf("No.\n");
}
int in(char *p, char c){
int i;
for(i=0; p[i]; i++)
if(*(p+i)==c)
return 1;
return 0;
}
int compare(char *p1, char *p2){ 
int i;
char c;
for(i=0; c=p1[i]; i++)
if(in(p2,c)==0)
return 0;
return 1;
} 