#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,d;
    cin>>n>>k;
    d='a';
    while(n--)
    {
        cout<<char(d);
        d++;
        if(d=='a'+k)d='a';
    }
}
