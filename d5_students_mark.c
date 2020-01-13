#include<stdio.h>
#include<stdlib.h>

int mark_sum(int n,int *marks,char gender)
{
    int sum=0;
    if(gender == 'b')
    {
        for(int i=0;i<n;i+=2)
        {
            sum+=marks[i];
            // printf("%d",marks[i]);
        }
    }
         else if(gender == 'g')
    {
        for(int i=1;i<n;i+=2)
        {
            sum+=marks[i];
        }
    }
    return sum;
}

int main(void)
{
    int n;
    char gender;
    scanf("%d",&n);
    scanf("%c",&gender);
    int *marks = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    scanf(" %c",&gender);
    int ans = mark_sum(n,marks,gender);
    printf("%d",ans);
    return 0;
}