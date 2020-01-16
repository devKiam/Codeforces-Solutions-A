#include <bits/stdc++.h>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

main()
{
    int n, k;
    cin >> n >> k;

    list <int> screen;

    for(int i=0; i < n; i++)
    {
        int x, flag = 0;
        cin >> x;

        for(auto itr = screen.begin(); itr != screen.end(); ++itr)
        {
            if( x == *itr)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            screen.push_front(x);

            if(screen.size() > k)
                screen.pop_back();
        }
    }

    cout << screen.size() <<endl;

    for(auto i = screen.begin(); i!=screen.end(); i++)
    {
        cout<<*i<<" ";
    }
}
