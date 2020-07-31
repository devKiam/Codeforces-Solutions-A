#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("examinput.txt", "r", stdin);
    //freopen("examoutput.txt", "w", stdout);
    int count = 0;
    int n,k; cin>>n>>k;

    while(n--)
    {
        string s; cin>>s;
        set<char> st;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]-48 <= k)
            st.insert(s[i]);
        }

        if(st.size() == k+1) count++;
    }

    cout<<count<<endl;
    
}
