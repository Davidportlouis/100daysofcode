#include<stdio.h>

int  main(void)
{
    int scode,epcode;
    char sea,ep;
    scanf("%c%d%c%d",&sea,&scode,&ep,&epcode);
    if(sea == 'S' && ep == 'E')
        printf("Seasone %d, Episode %d",scode,epcode);
    return 0;
}