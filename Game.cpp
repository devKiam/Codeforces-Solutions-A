#include<bits/stdc++.h>
using namespace std;

main()
{
    int x;

    while(cin>>x)
    {
        map<int,int> mapHome, mapAway;
        int sum = 0;

        for(int i=0; i<x; i++)
        {
            int a,b; cin>>a>>b;

            mapHome[a]++; mapAway[b]++;
        }

        for(auto itr=mapAway.begin(); itr!=mapAway.end(); itr++)
        {
            int a = itr->first;
            int b = itr->second;
            sum+=(b * mapHome[a]);
        }

        cout<<sum<<endl;
    }
}
