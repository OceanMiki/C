#include<stdio.h>  
#include<string.h>  
int main(void)  
{  
    int i,j;  
    char a[100],b[100];  
       
    gets(a);  
    gets(b);  
       
    for(i=0;a[i]!='\0';i++)  
    {  
        if ( a[i]==b[0] )  
        {  
            int k;  
            for(k=i+1,j=1;b[j]!='\0';j++,k++)  
            {  
                if ( a[k]!=b[j] )  
                    break;  
            }  
            if ( b[j]=='\0' )  
            {  
                printf("%d\n", i );  
                break;  
            }  
        }  
    }  
    if( a[i]=='\0' )  
        printf("-1\n");  
    return 0;  
}  