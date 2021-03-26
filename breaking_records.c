#include<stdio.h>
#include<stdlib.h>

typedef struct Record {
    int score;
    int high;
    int low;
}Record;

int main(void) {
    int i,n,min,max,min_c,max_c;
    min = max = min_c = max_c;
    scanf("%d",&n);
    Record *t = (Record *)malloc(sizeof(Record) * n);
    for(i=0;i<n;i++) {
        scanf("%d",&t[i].score);
        if(i == 0) {
            t[i].high = t[i].low = t[i].score;
            min = max = t[i].score;
        }
        else {
            if(t[i].score > max) {
                t[i].low = min;
                t[i].high = max = t[i].score;
                max_c++;
            }else if(t[i].score < min) {
                t[i].low = min = t[i].score;
                t[i].high = max;
                min_c++;
            }
        }
    }
    printf("%d %d\n",max_c,min_c);
    return 0;
}
