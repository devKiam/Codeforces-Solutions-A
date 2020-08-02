#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin>>s;

    if( 9-(s[0]-48) < (s[0]-48) && 9-(s[0]-48) != 0 ) cout<<9-(s[0]-48);
    else cout<<s[0];

    for(int i=1; i<s.size(); i++)
    {
        if( 9-(s[i]-48) < (s[i]-48) ) cout<<9-(s[i]-48);
        else cout<<s[i];
    }
    cout<<"\n";
}
