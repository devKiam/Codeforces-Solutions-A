#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    
    while(cin>>x)
    {
        vector<int> v;
        
        for(int i=0; i<x; i++)
        {
            int vectorInput; cin>>vectorInput;
            v.push_back(vectorInput);
        }
        
        int n; cin>>n;
        
        for(int i=0; i<n; i++)
        {
            int wireNo, birdShot; cin>>wireNo>>birdShot;
            
            if(wireNo>1 && wireNo<x)
            {
                v[wireNo-1-1] += (birdShot-1); //wire i-1
                v[wireNo] += v[wireNo-1]-birdShot; //wire i+1
                v[wireNo-1] = 0; //targeted wire i
            }
            else if(wireNo==1){
                v[wireNo] += v[wireNo-1]-birdShot; //wire i+1
                v[wireNo-1] = 0; //targeted wire i
            }
            else{
                v[wireNo-1-1] += (birdShot-1); //wire i-1
                v[wireNo-1] = 0; //targeted wire i
            }
        }
        
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
    }
    
}

