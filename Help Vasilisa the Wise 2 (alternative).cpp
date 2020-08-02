#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    int r1,r2,c1,c2,d1,d2; cin>>r1>>r2>>c1>>c2>>d1>>d2;
    bool flag = false;
    for(int a=1; a<=9; a++)
    {
        for(int b=1; b<=9; b++)
        {
            for(int c=1; c<=9; c++)
            {
                for(int d=1; d<=9; d++)
                {
                    set<int> s;
                    s.insert(a); s.insert(b); s.insert(c); s.insert(d);
                    if(r1==a+b && r2==c+d && c1==a+c && c2==b+d && d1==a+d && d2==b+c && s.size()==4)
                    {
                        cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<"\n";
                        flag = true;
                        break;
                    }
                }
                if(flag==true) break;
            }
            if(flag==true) break;
        }
        if(flag==true) break;
    }
    if(flag==false) cout<<-1<<"\n";
}
