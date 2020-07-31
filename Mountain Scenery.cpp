#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin>>n>>k;
    vector<int> v;

    for(int i=0; i<2*n+1; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }

    for(int i=1; i<2*n+1; i+=2)
    {
        if( (v[i] - v[i-1]) >= 2 && (v[i] - v[i+1]) >= 2 )
        {
            v[i]--;
            k--;
        }
        if(k==0) break;
    }
    for(int i=0; i<2*n+1; i++)
    {
        cout<<v[i]<<" ";
    }

}
