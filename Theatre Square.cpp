#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll m,n,a; cin>>m>>n>>a;

    ll x = m/a;
    ll y = n/a;

    if(m%a != 0) x++;
    if(n%a != 0) y++;

    cout<<x*y<<endl;

}
