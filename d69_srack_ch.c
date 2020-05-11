#include<stdio.h>
#define LIMIT 100

int check_max(int arr[LIMIT][LIMIT],int row,int col)
{
    int max = 0,row_sum = 0,i,j;
    for(i=0;i<row;i++)
    {
        row_sum = 0;
        for(j=0;j<col;j++)
        {
            row_sum += arr[i][j];
        }
        if(row_sum > max)
            max = row_sum;
    }
    return max;
}

int main(void)
{
  int i,j,r,c,arr[LIMIT][LIMIT];
  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  printf("%d",check_max(arr,r,c));
  return 0;
}