#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    
    while(cin>>x)
    {
        string s; cin>>s;
        set<char> st;
        
        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i])) s[i]+=32;
            st.insert(s[i]);
        }
        
        if(st.size()==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
