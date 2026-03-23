#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    ll s=1;
    for(int i=0;i<n;i++)
    {
        s=2*s%((int)1e9+7);
    }
    cout<<s<<'\n';

    return 0;
}
