#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, sum=0; cin>>n;

    for(int i=0; i<n; i++)
    {
        string s; cin>>s;

        if(s=="Tetrahedron") sum+=4;
        else if(s=="Cube") sum+=6;
        else if(s=="Octahedron") sum+=8;
        else if(s=="Dodecahedron") sum+=12;
        else sum+=20;
    }

    cout<<sum<<endl;
}
