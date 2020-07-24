#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase; cin>>testCase;

    for(int t=0; t<testCase; t++)
    {
        int x; cin>>x;
        vector<int> v;

        for(int i=0; i<x; i++)
        {
            int a; cin>>a;
            v.push_back(a);
        }

        //string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        string s(51, 'a');
        cout<<s<<endl;

        for(int i=0; i<v.size(); i++)
        {
            if(s[v[i]]=='a') s[v[i]]='b';
            else s[v[i]]='a';

            cout<<s<<endl;
            
        }
    }

}
