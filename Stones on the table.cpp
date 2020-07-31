#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;

    while(cin>>n)
    {
        char left;
        char right;
        int count=0;

        cin>>left;

        for(int i=0; i<n-1; i++)
        {
            cin>>right;

            if(left==right) count++;

            left = right;
        }

        cout<<count<<endl;
    }
}
