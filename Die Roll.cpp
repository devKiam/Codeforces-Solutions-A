#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    while(cin>>a>>b)
    {
        int max, A, B=6;
        
        a > b ? max=a : max=b;
        
        A = 6-max+1;
        
        if(A!=0)
        {
            for(int i=2; i<=6; i++)
            {
                if(A%i==0 && B%i==0)
                {
                    A=A/i;
                    B=B/i;
                    i=1;
                }
            }
            cout<<A<<"/"<<B<<endl;
        }
        else{
            cout<<A<<"/"<<B<<endl;
        }
        
    }
}

