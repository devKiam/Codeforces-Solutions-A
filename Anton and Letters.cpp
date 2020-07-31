#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while(getline(cin,s))
    {
        set<char> st;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                st.insert(s[i]);
            }
        }

        int count = 0;

        for(auto itr=st.begin(); itr!=st.end(); itr++)
        {
            count++;
        }

        cout<<count<<endl;
        
    }
}
