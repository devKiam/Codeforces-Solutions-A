#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    
    while(cin>>a>>b>>c)
    {
        int count=0, juHolding=0;
        
        for(int i=0; i<a; i++)
        {
            int x;
            cin>>x;
            
            if(x<=b)
            {
                juHolding+=x;
                
                if(juHolding>c)
                {
                    juHolding=0;
                    count++;
                }
            }
        }
        
        cout<<count<<endl;
    }
}

