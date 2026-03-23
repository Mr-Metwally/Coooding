#include <bits/stdc++.h>
using namespace std;
#define ll long long

// you wanna know how many steps up should be added to make each element is equal or grater that the previous one
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int mx=0; ll ans=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        mx=max(x, mx);
        ans+=mx-x;
    }
    cout<<ans;

    return 0;
}
