#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;

    while(cin>>n)
    {
        int count=0, police=0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            if((police + x) < 0)
            {
                count++;
            }

            police+=x;
            if(police<0) police=0;
        }

        cout<<count<<endl;
    }
}
