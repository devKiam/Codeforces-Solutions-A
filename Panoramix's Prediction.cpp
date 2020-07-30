#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //Sieve Of Eratosthenes
    bool prime[500+1]; //prime[n+1]
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=500; p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*p; i<=500; i+=p) prime[i] = false;
        }
    }
    //Sieve Of Eratosthenes

    int a,b; cin>>a>>b;
    int nxtP;

    for(int i=a+1; i<=500; i++)
    {
        if(prime[i]==true)
        {
            nxtP = i;
            break;
        }
    }

    if(nxtP==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
