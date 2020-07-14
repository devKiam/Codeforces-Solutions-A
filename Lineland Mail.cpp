#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    while(cin>>n)
    {
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        
        int leftMin,rightMin, leftMax,rightMax;
      
        cout<<abs(v[0]-v[1])<<" "<<abs(v[0]-v[v.size()-1])<<endl;
        
        for(int i=1; i<n-1; i++)
        {
            leftMin = abs(v[i-1]-v[i]); rightMin = abs(v[i]-v[i+1]); leftMax = abs(v[0]-v[i]); rightMax = abs(v[i]-v[v.size()-1]);
            
            leftMin < rightMin ? cout<<leftMin<<" " : cout<<rightMin<<" ";
            leftMax > rightMax ? cout<<leftMax<<endl : cout<<rightMax<<endl;
        }
        
        cout<<abs(v[v.size()-1]-v[v.size()-2])<<" "<<abs(v[v.size()-1]-v[0])<<endl;
    }
}
