#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;

    while(cin>>tc)
    {
        int poles, prev = 0, counter = 0;

        for(int i=0; i<tc; i++)
        {
            cin>>poles;

            if(poles!=prev) counter++;

            prev = poles;
        }

        cout<<counter<<endl;
    }

    return 0;
}
