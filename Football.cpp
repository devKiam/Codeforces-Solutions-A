#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<string, int> m;
    string winner;
    int max = 0;

    int n; cin>>n;

    for(int i=0; i<n; i++)
    {
        string s; cin>>s;
        m[s]++;

        if(m[s]>max)
        {
            max=m[s];
            winner = s;
        }

    }

    cout<<winner<<endl;
}
