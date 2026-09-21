#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s,t;
    cin>>n;
    cin>>s;
    cin>>t;
    for(int i=0;i<n;++i)
    {
        if(t[i]!='*'&& t[i]!=s[i])
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}