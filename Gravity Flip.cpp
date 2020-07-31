#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(cin>>n)
    {
        vector<int> box;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            box.push_back(x);
        }

        sort(box.begin(),box.end());

        for(int i=0; i<n; i++)
        {
            cout<<box[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
