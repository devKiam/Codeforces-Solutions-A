#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        int x; cin>>x;
        int sum=0;
        int even=0;
        int odd=0;
        for(int i=0; i<x; i++)
        {
            int input; cin>>input;
            sum+=input;
            if(input%2==0) even++;
            else odd++;
        }

        if(sum%2==1 || (even>0 && odd>0)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
