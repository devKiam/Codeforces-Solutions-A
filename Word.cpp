#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while(cin>>s)
    {
        int UcaseCount = 0, LcaseCount = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<97) UcaseCount++;
            else LcaseCount++;
        }

        if(UcaseCount > LcaseCount)
        {
            transform(s.begin(), s.end(), s.begin(), ::toupper);
            cout<<s<<endl;
        }
        else
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout<<s<<endl;
        }
    }
}
