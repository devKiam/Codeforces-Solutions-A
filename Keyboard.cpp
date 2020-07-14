#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    qwertyuiop
//    asdfghjkl;
//    zxcvbnm,./
    map<char,char> mR,mL;
    
    mL['q'] = 'w'; mL['w'] = 'e'; mL['e'] = 'r'; mL['r'] = 't'; mL['t'] = 'y'; mL['y'] = 'u'; mL['u'] = 'i'; mL['i'] = 'o'; mL['o'] = 'p';
    mL['a'] = 's'; mL['s'] = 'd'; mL['d'] = 'f'; mL['f'] = 'g'; mL['g'] = 'h'; mL['h'] = 'j'; mL['j'] = 'k'; mL['k'] = 'l'; mL['l'] = ';';
    mL['z'] = 'x'; mL['x'] = 'c'; mL['c'] = 'v'; mL['v'] = 'b'; mL['b'] = 'n'; mL['n'] = 'm'; mL['m'] = ','; mL[','] = '.'; mL['.'] = '/';
    
    mR['w'] = 'q'; mR['e'] = 'w'; mR['r'] = 'e'; mR['t'] = 'r'; mR['y'] = 't'; mR['u'] = 'y'; mR['i'] = 'u'; mR['o'] = 'i'; mR['p'] = 'o';
    mR['s'] = 'a'; mR['d'] = 's'; mR['f'] = 'd'; mR['g'] = 'f'; mR['h'] = 'g'; mR['j'] = 'h'; mR['k'] = 'j'; mR['l'] = 'k'; mR[';'] = 'l';
    mR['x'] = 'z'; mR['c'] = 'x'; mR['v'] = 'c'; mR['b'] = 'v'; mR['n'] = 'b'; mR['m'] = 'n'; mR[','] = 'm'; mR['.'] = ','; mR['/'] = '.';
    
    char ch;
    
    while(cin>>ch)
    {
        string s; cin>>s;
        
        if(ch=='R')
            for(int i=0; i<s.size(); i++) cout<<mR[s[i]];

        else
            for(int i=0; i<s.size(); i++) cout<<mL[s[i]];
        
        cout<<endl;
    }
}
