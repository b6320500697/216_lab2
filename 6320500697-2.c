#include <stdio.h>
int main ()
{
    int t1,t2;
    char pro;
    float time,i=0;
    scanf ("%c",&pro);
    scanf ("%f",&time);
    t1 = time;
    t2 = time*100;
    t2 = t2%100;
    if (pro == 'A')
    {
         i = i+199;
         if (z>200)
        {
        t1 = t1-200;
        i += t1*3;
        i += t2*3/60.0;
        }
    }
    else if(pro =='B')
    {
         y = y+299;
         if(z>400)
         {
            t1 = t1-400;
            i += t1*2;
            i += t2*2/60.0;
         }
    }
    printf("%.2f",i);
    return 0;
}
