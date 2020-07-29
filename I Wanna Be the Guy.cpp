#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<int,int> m;
    int n; cin>>n;

    int x; cin>>x;
    for(int i=0; i<x; i++)
    {
        int input; cin>>input;
        m[input]++;
    }

    cin>>x;
    for(int i=0; i<x; i++)
    {
        int input; cin>>input;
        m[input]++;
    }

    bool flag = true;

    for(int i=0; i<n; i++)
    {
        if(m[i+1]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"I become the guy."<<endl;
}
