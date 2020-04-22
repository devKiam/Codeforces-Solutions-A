#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int result;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                result = abs(i+1-3) + abs(j+1-3);
            }
        }
    }
    cout<<result<<endl;

    return 0;
}
