#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    
    for(int i=0; i<3; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    cout<<v[2]-v[0]<<endl;

}
