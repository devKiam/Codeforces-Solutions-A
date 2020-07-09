#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b,c,d;

    while(cin>>a>>b>>c>>d)
    {
        vector<int> v;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        string s;
        int sum=0;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            sum+=v[s[i]-48-1];
        }

        cout<<sum<<endl;
    }
}
