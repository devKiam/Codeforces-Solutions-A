#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    for(int j=0; j<n; j++) //test cases
    {
        int x; cin>>x;
        vector<int> v;

        for(int i=0; i<x; i++)
        {
            int vInput; cin>>vInput;
            v.push_back(vInput);
        }
//main operation
        int min=v[0], minPos=0, i1, i2, i3;
        bool flag = false;

        for(int i=1; i<v.size()-1; i++)
        {
            if(min<v[i])
            {
                for(int k=i+1; k<v.size(); k++)
                {
                    if(v[i]>v[k])
                    {
                        i1 = minPos+1;
                        i2 = i+1;
                        i3 = k+1;

                        flag = true;
                        break;
                    }
                }
            }
            else{
                min=v[i];
                minPos=i;
            }

            if(flag==true)
            {
                cout<<"YES"<<endl<<i1<<" "<<i2<<" "<<i3<<endl;
                break;
            }
        }

        if(flag==false) cout<<"NO"<<endl;
    }
    
}
