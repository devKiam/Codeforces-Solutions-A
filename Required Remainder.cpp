#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//ll dp[1000000];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    //freopen("examinput.txt", "r", stdin);
    //freopen("examoutput.txt", "w", stdout);
    //memset(dp, -1, sizeof(dp));
    int t; cin>>t;
    while(t--)
    {
        ll x,y,n; cin>>x>>y>>n;

        ll z = (n % x) - y;

        if(z>=0) cout<<n-z<<"\n";
        else cout<<n-z-x<<"\n";
    }
}
