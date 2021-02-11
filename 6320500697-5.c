#include<stdio.h>
int main()
{
    int n,m,mm,d;
    scanf("%d %d",&n,&m);
    switch(m){
        case 1: mm=31; break;
        case 2: mm=28; break;
        case 3: mm=31; break;
        case 4: mm=30; break;
        case 5: mm=31; break;
        case 6: mm=30; break;
        case 7: mm=31; break;
        case 8: mm=31; break;
        case 9: mm=30; break;
        case 10: mm=31; break;
        case 11: mm=30; break;
        case 12: mm=31; break;
    }
    d=(mm+n)%7;
    if(d==0)
    {
        printf("7");
    }
    else
    {
         printf("%d",d);
    }
    return 0;
}
