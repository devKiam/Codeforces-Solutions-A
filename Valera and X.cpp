#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(cin>>n)
    {
        vector< vector<char> > v;

        for(int i=0; i<n; i++)
        {
            vector<char> vRow;
            for(int j=0; j<n; j++)
            {
                char x; cin>>x;
                vRow.push_back(x);
            }
            v.push_back(vRow);
        }
        //main activity
        char diagonal = v[0][0];
        char nonDiagonal = v[0][1];
        bool flag = true;


        if(diagonal == nonDiagonal)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(diagonal != v[i][i] || diagonal != v[i][n-1-i])
                {
                    flag = false;
                    break;
                }
            }

            int d = n-1;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i!=j && j!=d)
                    {
                        if(v[i][j] != nonDiagonal)
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag == false) break;
                d--;
            }

            if(flag == true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

}
