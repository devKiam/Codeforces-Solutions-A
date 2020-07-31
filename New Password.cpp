#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s = "abcdefghijklmnopqrstuvwxyz";
    int a,b;

    while(cin>>a>>b)
    {
        for(int i=0; i<b; i++)
        {
            cout<<s[i];
        }
        
        int diff = a-b;
        
        for(int i=0; i<b && diff>0; i++, diff--)
        {
            cout<<s[i];
            if(diff-1 != 0 && i+1 == b) i=-1;
        }
        
        cout<<endl;
        
    }
}
