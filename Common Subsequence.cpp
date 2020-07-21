#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
 
    for(int z=0; z<t; z++)
    {
        int a,b; cin>>a>>b;
        vector<int> v1, v2;
 
        for(int i=0; i<a; i++){
            int x; cin>>x;
            v1.push_back(x);
        }
        for(int i=0; i<b; i++){
            int x; cin>>x;
            v2.push_back(x);
        }
 
        bool flag = false;
        int r;
 
        for(int i=0; i<v2.size(); i++)
        {
            for(int j=0; j<v1.size(); j++)
            {
                if(v2[i]==v1[j])
                {
                    r = v2[i];
                    flag = true;
                    break;
                }
            }
            if(flag==true) break;
        }
 
        if(flag==true) cout<<"YES"<<endl<<"1 "<<r<<endl;
        else cout<<"NO"<<endl;
 
 
 
    }
 
}
