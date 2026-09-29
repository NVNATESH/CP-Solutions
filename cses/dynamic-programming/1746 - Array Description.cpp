#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,k,mod = 1e9+7;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<ll>> dp(n,vector<ll> (k+2,0));
    if(v[0]==0){
        for(int i=1;i<=k;i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][v[0]] = 1;
    }
    for(int i=1;i<n;i++){
        if(v[i]!=0){
            dp[i][v[i]] = (dp[i-1][v[i]]+dp[i-1][v[i]-1]+dp[i-1][v[i]+1])%mod;
        }
        else{
            for(int j=1;j<=k;j++){
                dp[i][j] = (dp[i-1][j]+dp[i-1][j-1]+dp[i-1][j+1])%mod;
            }
        }
    }
    long long ans = 0;
    for(int i=1;i<=k;i++){
        ans = (ans+dp[n-1][i])%mod;
    }
    cout<<ans%mod<<endl;
}