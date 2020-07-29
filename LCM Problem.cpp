#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testCase; cin>>testCase;
 
    for(int t=0; t<testCase; t++)
    {
        int l,r; cin>>l>>r;
 
        if(l*2 <= r) cout<<l<<" "<<l*2<<endl;
        else cout<<"-1 -1"<<endl;
    }
 
}
