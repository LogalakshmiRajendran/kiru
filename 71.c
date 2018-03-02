#include<stdio.h>
int main()
{
    char string[50];
    int i,count=0,c=0;
    printf("enter the string");
    scanf("%s",string);
    for(i=0;string[i]!=0;i++)
    {
        count++;
    }
    for(i=0;string[i]!=0;i++)
    {
        for(j=count-1;j>=0;j--)
        {
            if(string[i]==string[j])
            {
                c++;
                break;
            }
        }
    }
    if(count==c)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    return 0;
}
