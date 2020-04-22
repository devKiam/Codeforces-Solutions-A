#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int a, b;
    while(cin>>a>>b)
    {
        int counter = 0;
        while(a<=b)
        {
            a*=3;
            b*=2;
            counter++;
        }

        cout<<counter<<endl;
    }
    return 0;
}
