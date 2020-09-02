/* String Pattern Matching */
#include<stdio.h>
#include<string.h>
#define MAX 1000


static char tokens[MAX][MAX];
static char uniques[MAX];
static int unique_idx[MAX];

int get_uniques(char *s,int n)
{
    int chars[MAX]={0},i=0,j=0,k=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(chars[(int)s[i]] == 0)
        {
            chars[(int)s[i]] += 1;
            for(int l=0;l<k;l++)
            {
                if(strcmp(tokens[i],tokens[unique_idx[l]]) == 0)
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if(!flag)
            {
                uniques[j++] = s[i];
                unique_idx[k++] = i;
            }

        }
    }
    return j;
}

int tokenize(char *s)
{
    int i=0,k=0,j=0;
    while(s[i] != '\0')
    {
        if(s[i] != ' ')
        {
            tokens[j][k++] = s[i++];
        }else
        {
            tokens[j++][k++] = '\0';
            k = 0;
            i++;
        }
    }
    return j;
}

int main(void)
{
    int n1,k,j,i,l,ct=0;
    char s1[MAX], s2[MAX];
    scanf("%s%n",s1,&n1);
    scanf("\n");
    scanf("%[^\n]%*c",s2);
    l = tokenize(s2);
    if(n1-1 == l)
    {
        k = get_uniques(s1,n1);
        for(i=0;i<n1;i++)
        {
            for(j=0;j<k;j++)
            {
                if(s1[i] == uniques[j] && (strcmp(tokens[i],tokens[unique_idx[j]]) == 0)){
                    ct++;
                    break;
                }
            }
        }
    }
    (ct == n1)? printf("YES") : printf("NO");
    return 0;
}
