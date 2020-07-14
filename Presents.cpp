#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    
    while(cin>>x)
    {
        map<int,int> m;
        
        for(int i=1; i<=x; i++)
        {
            int n; cin>>n;
            m[n]=i;
        }
        
        for(int i=1; i<=x; i++) cout<<m[i]<<" ";
        
        cout<<endl;
    }
}
