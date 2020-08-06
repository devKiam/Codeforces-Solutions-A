#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int size = v.size();
        for(int i=0; i<v.size()-1; i++)
        {
            if(abs(v[i]-v[i+1]) <= 1 ) size--;
        }
 
        if(size==1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
