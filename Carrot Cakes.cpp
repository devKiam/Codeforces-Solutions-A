#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;

    while(cin>>a>>b>>c>>d)
    {
        int x = ceil(a/c), totalTime = b*x; //x = number of turn

        if(d<totalTime)
        {
            int turnNeedForActivateNewOven = ceil(d/b);
            int cakesReady = turnNeedForActivateNewOven * c;
            int cakesLeft = a - cakesReady;

            if(cakesLeft>c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
