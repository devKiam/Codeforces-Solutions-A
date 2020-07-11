#include<bits/stdc++.h>
using namespace std;

main()
{
    int a, b;

    while(cin>>a>>b)
    {
        int count, copyA = a;
        for(int i=1; i<=10; i++)
        {
            a = copyA*i;
            if(a%10 == 0 || a%10 == b)
            {
                count = i;
                break;
            }
        }

        cout<<count<<endl;
    }
}
