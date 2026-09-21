#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int>>min_heap;
    for(int i=0;i<3;i++)
    {
        min_heap.push(a[i]);
    }
    cout<<min_heap.top()<<"\n";
    for(int i=3;i<n;i++)
    {
        if(a[i]>min_heap.top())
        {
            min_heap.pop();
            min_heap.push(a[i]);
        }
        cout<<min_heap.top()<<"\n";
    }
    return 0;
}
