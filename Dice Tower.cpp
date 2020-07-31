#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("examinput.txt", "r", stdin);
    //freopen("examoutput.txt", "w", stdout);
    int n; cin>>n;
    int u; cin>>u;
    bool flag = true;
    while(n--)
    {
        int l,r; cin>>l>>r;
        if(l==u || l==7-u || r==u || r==7-u) flag = false;
    }
    if(flag == true) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
