#include<stdio.h>
int main()
{
    int i,n,j,tag;
    float h,u,d,f,start,afterday,climb,slide,fatig,afterclimb;
    while(scanf("%f %f %f %f",&h,&u,&d,&f)==4)
    {
        if(h==0)
        break;

    fatig=u*(f/100);
        // printf("fatig=%f slid=%f\n",fatig,d);
    afterday=0;
    climb=u;
    for(i=0;i>-1;i=i+1)
    {
        start=afterday;
        if(climb>0)
            climb=u-i*fatig;
        else
            climb=0;
        afterclimb=start+climb;
                //printf("start=%f climb=%f afterclimb=%f ",start,climb,afterclimb);

        if(afterclimb>h)
        {
            tag=1;
            break;
        }
        slide=d;
        afterday=afterclimb-slide;
                // printf("afterday=%f\n",afterday);
        if(afterday<0)
        {
            tag=0;
            break;
        }

    }
    if(tag==0)
        printf("failure on day %d\n",i+1);
    else
        printf("success on day %d\n",i+1);
    }
    return 0;
}
