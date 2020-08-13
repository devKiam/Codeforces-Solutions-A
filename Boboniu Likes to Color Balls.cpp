#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
   
    int t; cin>>t;
    while(t--)
    {
        ull r,g,b,w; cin>>r>>g>>b>>w;
 
        if(r==0 || g==0 || b==0)
        {
            if((r%2 + g%2 + b%2 + w%2) <= 1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else if((r%2 + g%2 + b%2 + w%2) == 2) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
 
}
