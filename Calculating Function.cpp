#include<bits/stdc++.h>
#define ll long long int
#define odd n%2==1
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin>>n;

    if(odd)
    {
        cout<<"-"<<n/2+1<<endl;
    }
    else
        cout<<n/2<<endl;

}
