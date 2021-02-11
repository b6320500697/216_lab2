#include <math.h>
int main()
{
    float time,pro=0;
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
            pro=pro+199;
        }
        else
        {
            time4=time2-200;
            time5=time4*60;
            se=time5+time3;
            se1=(se*3)/60;
            pro=199+se1;
        }
    }
    else
    {
        if(time2<=400)
        {
            pro=pro+299;
        }
        else
        {

            time4=time2-400;
            time5=time4*60;
            se=time5+time3;
            se1=(se*2)/60;
            pro=299+se1;
        }
    }
    printf("%.2f",pro);
    return 0;
}
