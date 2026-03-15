#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll b)
{
    if(b==0) return 1;
    else if(b==1) return a;

    ll half = power(a,b/2);

    if(b%2==0)  return half*half;

    else    return a*half*half;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<power(5,3)<<'\n';
    cout<<pow(5,3);
    return 0;
}










