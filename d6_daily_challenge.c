#include<stdio.h>
#include<stdlib.h>


char* getStringOfABC(int N)
{
    char* str1 = malloc(N * sizeof(char));
    int count = 0;
    while(count<N)
    {
    for(char c='a';c<'d'&&count<N;c++)
        {
            str1[count] =c;
            count++;
        }
    }
    return str1;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    getStringOfABC(N);
    char *str = getStringOfABC(N);
    printf(str);
    free(str);
    return 0;
}