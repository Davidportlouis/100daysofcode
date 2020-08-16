#include<iostream>
#include<bits/stdc++.h>
#define PI 3.141592653589793
#define MAX 1000000007

using namespace std;


void flipbits(int i,vector<int> &arr1,int k,int x,int &t)
{
    if(i == k)
    {
        if(x == 0)
            t++;
        return;
    }
    flipbits(i+1,arr1,k,x+arr1[i],t);
    flipbits(i+1,arr1,k,x,t);
}

int main(void)
{
    int i,j=0,n,x=0,ct=0,t=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr)
    {
        cin >> i;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] > x)
            x = arr[i];
    }
    while(x)
    {
        ct++;
        x>>=1;
    }
    vector arr1(n,0);
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            if(arr[i]&1)
                arr1[i]++;
            arr[i]>>=1;
        }
    }
    for(i=0;i<n;i++)
    {
        arr1[j] = ct-2*arr1[i];
        if(arr1[j]==0)
            continue;
        else
            j++;
    }
    flipbits(0,arr1,j,0,t);
    t -= 1;
    t = t*(1+n-j)+(1<<(n-j))-1;
    vector bits(ct,0);
    i=0;
    while(t > 0)
    {
        bits[i] = t & 1;
        t >>= 1;
        i++;
    }
    for(j=ct-1;j>=0;j--)
        cout<<bits[j];
    return 0;
}