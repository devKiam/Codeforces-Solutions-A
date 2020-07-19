#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
 
    for(int i=0; i<t; i++)
    {
        int a, b, c; cin>>a>>b>>c;
 
        if(a==b && a==c && b==c)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(a!=b && a!=c && b!=c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if( (a==b && c>a) || (a==c && b>a) || (b==c && a>b) )
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                vector<int> v;
                v.push_back(a);
                v.push_back(b);
                v.push_back(c);
                sort(v.begin(), v.end());
                if(v[0]>1)
                cout<<v[0]<<" "<<v[1]<<" "<<v[0]-1<<endl;
                else
                cout<<v[0]<<" "<<v[1]<<" "<<"1"<<endl;
            }
        }
    }
}
