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
        int n; cin>>n;
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            st.insert(x);
        }
 
        if(st.size()>1) cout<<1<<endl;
        else cout<<n<<endl;
 
    }
}
