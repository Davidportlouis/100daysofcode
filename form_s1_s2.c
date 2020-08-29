/* Form S1 from S2 */
#include<stdio.h>
#define MAX 1000
#define ASMAX 128

static int s1_freq[ASMAX] = {0};
static int s2_freq[ASMAX] = {0};
static char uniques[MAX];

void get_freq(char *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s2_freq[(int)s[i]] += 1;
    }
}

int get_uniques(char *s,int n)
{
    int i,k=0; 
    for(i=0;i<n;i++)
    {
        if(s1_freq[(int)s[i]] == 0)
        {
            uniques[k++] = s[i];
            s1_freq[(int)s[i]] += 1;
        }
        else
            s1_freq[(int)s[i]] += 1;
    }
    return k;
}

int main(void)
{
    int i,j,n1,n2,x,ct=0;
    char s1[MAX],s2[MAX];
    scanf("%s%n",s1,&n1);
    scanf("%s%n",s2,&n2);
    scanf("%d",&x);
    j = get_uniques(s1,n1);
    get_freq(s2,n2);
    for(i=0;i<j;i++)
    {
        if(s2_freq[(int)uniques[i]] >= x*s1_freq[(int)uniques[i]])
        {
            ct++;
        }
    }
    if(ct == j)
        printf("YES");
    else
        printf("NO");
    return 0;
}
    
