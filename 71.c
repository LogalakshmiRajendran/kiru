#include<stdio.h>
int main()
{
    char str[50];
    int i,count=0,c=0;
    printf("enter the string");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        count++;
    }
    for(i=0;str[i]!=0;i++)
    {
        for(j=count-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                c++;
                break;
            }
        }
    }
    if(count==0)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    return 0;
}
