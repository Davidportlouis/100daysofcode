#include<stdio.h>
#define MAX 1000

static char tokens[MAX][MAX];
static char last[MAX];

void swap(char *s1,char *s2)
{
    char tmp[MAX];
    int i=0;
    while(s1[i] != '\0')
    {
        tmp[i] = s1[i];
        i++;
    }
    tmp[i] = '\0';
    i=0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    i=0;
    while(tmp[i] != '\0')
    {
        s2[i] = tmp[i];
        i++;
    }
    s2[i] = '\0';
}

void bsort(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(last[j] > last[j+1])
            {
               swap(tokens[j],tokens[j+1]);
               char tmp = last[j];
               last[j] = last[j+1];
               last[j+1] = tmp;
            }
        }
    }
}


int tokenize(char *s)
{
    int i=0,j=0,k=0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            last[j] = s[i-1];
            i++;
            j++;
            k=0;
        }
        else
        {
            tokens[j][k++] = s[i++];
        }
    }
    last[j] = s[i-1];
    return j;
}



int main(void)
{
    char s[MAX];
    int n,i;
    scanf("%[^\n]%*c",s);
    n = tokenize(s)+1;
    bsort(n);
    for(i=0;i<n;i++)
    {
        printf("%s ",tokens[i]);
    }
    return 0;
}
