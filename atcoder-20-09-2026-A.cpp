#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    if(s[s.length()-1]=='e')
    {
        s += 'r';
    }
    else
    {
        s += "er";
    }
    cout<<s<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();
     return 0;
}