#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;

    while(cin>>n)
    {
        string r;
        int Anton = 0, Danik = 0;
        cin>>r;

        for(int i=0; i<n; i++)
        {
            if(r[i]=='A') Anton++;
            else Danik++;
        }

        if(Anton>Danik) cout<<"Anton"<<endl;
        else if(Anton<Danik) cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
    }

    return 0;
}
