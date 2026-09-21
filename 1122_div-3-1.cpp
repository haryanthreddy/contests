#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> arr(3);
    for(int i =0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int min = arr[0];
     cout<< (n - min)<<"\n";
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