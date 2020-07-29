#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll k,n,mid; cin>>k>>n;

    if(k%2==1) mid=k/2+1;
    else mid=k/2;

    if(n<=mid)
    {
        cout<<n*2-1<<endl;
    }
    else
    {
        cout<<(n-mid)*2<<endl;
    }
}
