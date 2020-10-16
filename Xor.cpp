#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //memset(dp, -1, sizeof(dp));
 
    ull a,b,q; cin>>a>>b>>q;
 
    if(q%3 == 0)
        cout<<(a^b)<<endl;
 
    else if(q%3 == 2)
        cout<<b<<endl;
    else
        cout<<a<<endl;
 
}
