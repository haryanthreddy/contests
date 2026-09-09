#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int>freq;
    int maxfreq=0;
    int odds=0;
    int evens4=0;
    int evens2=0;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        freq[x]++;
        if(freq[x]>maxfreq)
        {
            maxfreq=freq[x];
        }
        if(x%2 !=0)
        {
            odds++;
        }
        else if(x%4==0)
        {
            evens4++;
        } 
        else
        {
            evens2++;
        }
    }
    int ans =max({maxfreq,odds,evens4,evens2});
    cout<<ans<<"\n";
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