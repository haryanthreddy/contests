#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> b(n);
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>> a;
        b[i]=a - (i +1);
    }
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    int maxi =0;
    int length =0;
    for(int i=0;i<b.size();i++)
    {
        if(i==0|| b[i]==b[i-1]+1)
        {
            length++;
        }
        else{
            length = 1;
        }
        maxi = max(maxi,length);
    }
    cout<<maxi<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}