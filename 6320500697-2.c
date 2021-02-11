#include <stdio.h>
int main()
{
    float time,proA=199.00,proB=299.00,pro;
    int time1,time2,time3,time4,time5,se,se1;
    char promotion;
    scanf("%c",&promotion);
    scanf("%f",&time);
    time1=time*100;
    time2=time1/100;
    time3=time1%100;
    ceil(time2);
    if(promotion=='A')
    {
        if(time2<=200)
        {
            pro=proA;
        }
        else
        {
            time4=time2-200;
            time5=time4*60;
            se=time5+time3;
            se1=(se*3)/60;
            pro=proA+se1;
        }
    }
    else
    {
        if(time2<=400)
        {
            pro=proB;
        }
        else
        {

            time4=time2-400;
            time5=time4*60;
            se=time5+time3;
            se1=(se*2)/60;
            pro=proB+se1;
        }
    }
    printf("%.2f",pro);
    return 0;
}
