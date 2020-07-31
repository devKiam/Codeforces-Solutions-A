#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b;

    while(cin>>a>>b)
    {
        long long dis = 0, ic = b;

        for(long long i=0; i<a; i++)
        {
            char ch; cin>>ch;
            long long x; cin>>x;

            if(ch == '+') ic+=x;
            else{
                if(ic<x) dis++;
                else{
                    ic-=x;
                }
            }
        }

        cout<<ic<<" "<<dis<<endl;
        
    }
}
