#include <iostream>
using namespace std;

main()
{
    int n;

    while(cin>>n){

        int a,b,c,counter=0;

        for(int i=0; i<n; i++)
        {
            cin>>a>>b>>c;

            if((a+b+c) > 1) counter++;
        }

        cout<<counter<<endl;
    }
}
