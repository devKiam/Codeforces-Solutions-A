#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, temp; cin>>n;

    bool flag = false;
    bool flagmaybe = true;

    for(int i=0; i<n; i++)
    {
        int a,b; cin>>a>>b;

        if(i==0) temp=a;

        if(temp<a)
        {
            flagmaybe = false;
        }

        temp = a;

        if(a!=b)
        {
            flag = true;
        }


    }

    if(flag==false)
    {
        if(flagmaybe==true) cout<<"maybe"<<endl;
        else cout<<"unrated"<<endl;
    }
    else
    {
        cout<<"rated"<<endl;
    }
}
