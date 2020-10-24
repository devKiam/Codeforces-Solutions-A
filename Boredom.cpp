#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll dp [100010];
int maxInput = 0;

ll rec(vector<ll> &v, int i)
{
    if(dp[i] != -1) return dp[i];
    if(i > maxInput)
    {
        return dp[i] = 0;
    }
    return dp[i] = max ( (i * v[i]) + rec(v, i+2), rec(v, i+1));
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));

    int n; cin>>n;
    vector<ll> v(100010, 0);

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v[x] += 1;
        maxInput = max(maxInput, x);
    }

    cout<<rec(v, 1)<<endl;

}
