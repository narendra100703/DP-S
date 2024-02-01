QUESTION LINK-  https://atcoder.jp/contests/dp/tasks/dp_a
CODE-

#include<bits/stdc++.h>
using namespace std;
int dp[100001];
int fun(int idx,int arr[],int n)
{
    if(idx==n-1) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int left=abs(arr[idx]-arr[idx+1])+fun(idx+1,arr,n);
    int right=INT_MAX;
    if(idx+2<=n-1)
    {
        right=abs(arr[idx]-arr[idx+2])+fun(idx+2,arr,n);
    }
    return dp[idx]=min(left,right);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<fun(0,arr,n);
}
