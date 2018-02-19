#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int b,c=0,i;
    scanf("%s",&a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if((a[i]=='1')||(a[i]=='0'))
        {
            c++;
        }
    }
    if(c==b)
    printf("binary");
    else
    printf("no");
    return 0;
    
}
