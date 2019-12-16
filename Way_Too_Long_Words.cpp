#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

main()
{
    int n;
    string s;

    cin>>n;
    getchar();

    for(int i=0; i<n; i++)
    {
        getline(cin,s);

        int length = s.size();
        if(length > 10)
        {
            cout<<s[0]<<length-2<<s[length-1]<<endl;
        }
        else{
            cout<<s<<endl;

        }
    }
}
