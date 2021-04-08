#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

static int idxs[2] = {-1,-1};

void findSubstrIdx(char *s1, char *s2, int n) {
    int i,j,flag=1,k=0;
    for(i=0,j=0;i<n;i++) {
        if(s1[i] == s2[j] && flag) {
            idxs[k++] = i+1;
            flag = 0;
            j++;
        }else if(s1[i] == s2[j])
            idxs[k] = i+1;j++;
    }
}

int main(void) {
    char s1[MAX],s2[MAX];
    int k,n1,n2,flag=0;
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%d",&k);
    n1 = strlen(s1);
    n2 = strlen(s2);
    findSubstrIdx(s1,s2,n1);
    if(strcmp(s1,s2) == 0)
        flag = 1;
    else if(idxs[0] == -1 || idxs[1] == -1) {
        if(k >= n1+n2) {
            k-=n1+n2;
            flag = (k >= 0)? 1 : 0;
        }
    }else{
        k -= (n1-idxs[1])+(n2-idxs[1]);
        if(k > 0) {
            flag = (k%2==0)? 1 : 0;
        }else if(k == 0)
            flag = 1;
    }
    (flag)?printf("Yes\n") : printf("No\n");
    return 0;
}
