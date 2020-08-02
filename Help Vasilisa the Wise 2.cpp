#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int r1,r2,c1,c2,d1,d2; cin>>r1>>r2>>c1>>c2>>d1>>d2;
    bool flag = false;
    int m00,  m01, m11, m10;

    for(int i=1; i<=9; i++)
    {
        set<int> s;
        m00 = i;
        m01 = abs(m00-r1);
        m11 = abs(m01-c2);
        m10 = abs(m00-c1);
        s.insert(m00);
        s.insert(m01);
        s.insert(m11);
        s.insert(m10);

        if(m01<10 && m01>0 && m11<10 && m11>0 && m10<10 && m10>0 && r2==m10+m11 && d1==m00+m11 && d2==m01+m10 && s.size()==4)
        {
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<m00<<" "<<m01<<"\n"<<m10<<" "<<m11<<"\n";
    else cout<<-1<<"\n";
}
