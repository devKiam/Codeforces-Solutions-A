#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    while(cin>>a>>b)
    {

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-32;
            }

            if(b[i]>='a' && b[i]<='z')
            {
                b[i]=b[i]-32;
            }
        }

        if(a.compare(b)==0) cout<<0<<endl;
        else if(a.compare(b)<0) cout<<-1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
