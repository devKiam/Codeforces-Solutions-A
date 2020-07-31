#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    int a,b; cin>>a>>b;

    int small = min(a,b);
    int big = max(a,b);
    ll count = 0;

    for(int i=1; i<=small; i++)
    {
        count += ( ( i + big ) / 5 ) - (i / 5);
    }

    cout<<count<<"\n";
}
