QUESTION- https://atcoder.jp/contests/dp/tasks/dp_b
CODE-

#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int fun(int idx,int arr[],int n,int k)
{
    if(idx==n-1) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int ans=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        if(idx+i<=n-1) ans=min(ans,abs(arr[idx]-arr[idx+i])+fun(idx+i,arr,n,k));
    }
    return dp[idx]=ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<fun(0,arr,n,k);
}
