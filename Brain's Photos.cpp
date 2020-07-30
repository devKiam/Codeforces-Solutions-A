#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector< vector<string> > v;
    int n,m; cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        vector<string> vRow;
        for(int j=0; j<m; j++)
        {
            string s; cin>>s;
            vRow.push_back(s);
        }

        v.push_back(vRow);
    }

    bool flag = true;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]=="C" || v[i][j]=="M" || v[i][j]=="Y")
            {
                flag = false;
                cout<<"#Color"<<endl;
                break;
            }
        }

        if(flag==false) break;
    }

    if(flag != false) cout<<"#Black&White"<<endl;
}
