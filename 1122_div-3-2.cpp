#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=b)
        {
            cout<<(a-b)+c<<"\n";
        }
        else{
            ll d = b-a;
            cout<<max(d,c-d)<<"\n";
        }
    }
    return 0;
}