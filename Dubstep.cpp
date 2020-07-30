#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int idx = 0;
    string s; cin>>s; s.push_back('x'); s.push_back('x');

    for(int i=0; i<s.size()-2; )
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(idx!=0 && i+2<=s.size()-2) cout<<" ";

            i+=3;
        }
        else
        {
            cout<<s[i];
            i++;
            idx++;
        }

    }

}
