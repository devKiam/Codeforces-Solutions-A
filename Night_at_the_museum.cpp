#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;

    while(cin>>s)
    {
        int minRotation=0, pointing=0;

        for(int i=0; i<s.size(); i++)
        {
            int distance1 = abs(pointing-(s[i]-97)), distance2 = 26-distance1 ;

            distance1 < distance2 ? minRotation+=distance1 : minRotation+=distance2;

            pointing = s[i]-97;
        }

        cout<<minRotation<<endl;
    }
}
