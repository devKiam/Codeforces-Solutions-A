#include <bits/stdc++.h>
using namespace std;
 
main()
{
    int n;
    cin>>n;
 
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L') c1++;
        else c2++;
    }
 
    cout<<c1+c2+1<<endl;
}
