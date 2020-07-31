#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    
    while(cin>>x)
    {
        vector<int> v;
        int sum = 0;
        
        for(int i=0; i<x; i++)
        {
            int n; cin>>n; sum+=n;
            v.push_back(n);
        }
        
        sort(v.begin(), v.end());
        
        int sum2 = 0, count = 0;
        
        for(int i=v.size()-1; i>=0; i--)
        {
            if(sum2<=sum)
            {
                sum2+=v[i];
                count++;
                sum-=v[i];
            }
            else{
                break;
            }
        }
        
        cout<<count<<endl;
        
    }
}
