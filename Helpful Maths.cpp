#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while(cin>>s)
    {
        vector<int> v;

        for(int i=0; i<s.size(); i+=2)
        {
            v.push_back(s[i]-48);
        }

        sort(v.begin(), v.end());

        for(int i=0; i<v.size(); i++)
        {
            if(i!=v.size()-1) cout<<v[i]<<"+";
            else cout<<v[i]<<endl;
        }
    }
}
