/* Sort N Rectangles */
#include<stdio.h>
#define MAX 100

typedef struct rectangle
{
    int length;
    int breadth;
    int area;
} rectangle;


void swap(rectangle *a,rectangle *b)
{
    int temp = a->length;
    a->length = b->length;
    b->length = temp;
    temp = a->breadth;
    a->breadth = b->breadth;
    b->breadth = temp;
    temp = a->area;
    a->area = b->area;
    b->area = temp;
}

void bsort(rectangle *arr,int n)
{
    int swapped,i;
    do
    {
        swapped = 1;
        for(i=0;i<n-1;i++)
        {
            if(arr[i].area > arr[i+1].area)
            {
                swap(&arr[i],&arr[i+1]);
                swapped = 0;
            }
            else if(arr[i].area == arr[i+1].area)
            {
                if(arr[i].length > arr[i+1].length)
                {
                    swap(&arr[i],&arr[i+1]);
                    swapped = 0;
                }
            }
        }
    }while(swapped == 0);
}

int main(void)
{
    int n,i;
    rectangle arr[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i].length,&arr[i].breadth);
        arr[i].area = arr[i].length * arr[i].breadth;
    }
    bsort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d %d %d\n",arr[i].length, arr[i].breadth, arr[i].area);
    }
    return 0;
}
