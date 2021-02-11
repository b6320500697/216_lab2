#include<stdio.h>
int main()
{
    int date;
    char name,hand=92;
    scanf("%c" ,&name);
    scanf("%d" ,&date);
    if(date%10==5)
    {
        printf("%c" ,hand);
    }
    if(date%2==1)
    {
       if(name>=65&&name<=73)
       {
           printf("(^_^)");
       }
       else if(name>=74&&name<=82)
       {
           printf("(o)");
       }
       else if(name>=83&&name<=90)
       {
           printf("(TT)");
       }
    }
    else if(date%2==0)
    {
        if(name>=65&&name<=73)
        {
            printf("{@@}");
        }
        else if(name>=74&&name<=82)
        {
            printf("{v}");
        }
        else if(name>=83&&name<=90)
        {
            printf("{X_X}");
        }
    }
    if(date%10==5)
    {
        printf("/");
    }
    return 0;
}
