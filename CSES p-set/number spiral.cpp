#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;

        int z=max(x,y);
        int l=min(x,y);

        cout<<pow(z,2)-l+1<<'\n';
    }

    return 0;
}
