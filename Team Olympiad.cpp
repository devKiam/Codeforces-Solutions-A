#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    
    while(cin>>x)
    {
        vector< pair<int,int> > v1, v2, v3;
        
        for(int i=0; i<x; i++)
        {
            int n; cin>>n;
            
            if(n==1)
                v1.push_back(make_pair(n,i+1));
            else if(n==2)
                v2.push_back(make_pair(n,i+1));
            else
                v3.push_back(make_pair(n,i+1));
                
            
        }
        
        int minSize, size1 = v1.size(), size2 = v2.size(), size3 = v3.size();
        
        if(size1<=size2 && size1<=size3) minSize = size1;
        else if(size2<=size1 && size2<=size3) minSize = size2;
        else minSize = size3;
        
        cout<<minSize<<endl;
        
        for(int i=0; i<minSize; i++)
        {
            cout<<v1[i].second<<" "<<v2[i].second<<" "<<v3[i].second<<endl;
        }
    }
}

