#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v = {6,8,4,2};
    int n; cin>>n;

    if(n==0) cout<<1<<endl;
    else
    {
        cout<<v[(n%4)]<<endl;
    }

}
