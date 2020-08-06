 #include<stdio.h>
 #define MAX 1000

 int search(int *arr,int n,int key)
 {
     for(int i=1;i<n;i++)
     {
         if(arr[i] == key)
            return 1;
     }
     return 0;
 }

 int main(void)
 {
     int m,n,ct=0,arr_1[MAX],arr_2[MAX],x=1,y=1;
     scanf("%d %d",&m,&n);
     for(int i=1;i<=m;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if((i+j)%5 == 0)
             {
                 if(!search(arr_1,x,j) && !search(arr_2,y,i))
                 {
                     ct++;
                     arr_1[x++] = j;
                     arr_2[y++] = i;
                 }
             }
         }
     }
     printf("%d",ct);
     return 0;
 }