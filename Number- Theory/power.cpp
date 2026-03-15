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

                // with large powers, but taking the modulus of them.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod=10e9+7;
ll powermod(ll a, ll b)
{
    if(b==0) return 1;
    else if(b==1) return a;

    ll half = powermod(a,b/2) % mod;

    if(!b&1) return (half*half) % mod;

    else return (a*half*half) % mod;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<powermod(5,1231324263456234532)<<'\n';
    cout<<pow(5,3);
    return 0;
}














