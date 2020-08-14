#include<stdio.h>
#define SCALE 60

int main(void)
{
    int ihr,imin,isec,ohr,omin,osec;
    int dhr,dmin,dsec;
    scanf("%d:%d:%d",&ihr,&imin,&isec);
    scanf("%d:%d:%d",&ohr,&omin,&osec);
    isec += (ihr * SCALE * SCALE) + (imin * SCALE);
    osec += (ohr * SCALE * SCALE) + (omin * SCALE);
    dsec = osec - isec;
    dhr = dsec/(SCALE * SCALE);
    dsec -= dhr * SCALE * SCALE;
    dmin = dsec/SCALE;
    dsec -= dmin  * SCALE;
    (dhr < 10)? printf("0%d:",dhr) : printf("%d:",dhr);
    (dmin < 10)? printf("0%d:",dmin) : printf("%d:",dmin);
    (dsec < 10)? printf("0%d:",dsec) : printf("%d:",dsec);
    return 0;
}