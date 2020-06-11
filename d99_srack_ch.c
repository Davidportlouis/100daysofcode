// Finding Triplets
#include<stdio.h>

static int arr[100];
static int n;

int check_triplets(int a,int b)
{
    for(int i=0;i<n;i++)
    {
        if((arr[i] != a) && (arr[i] != b))
        {
            if((a*a)+(b*b) == (arr[i] * arr[i]))
                return 1;
        }
    }
    return 0;
}

int main(void)
{
    int x = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x += check_triplets(arr[i],arr[j]);
        }
    }
    if(x != 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}