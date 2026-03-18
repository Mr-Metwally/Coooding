#include <bits/stdc++.h>
using namespace std;
#define ll long long

const mod=1e9+7;
ll powermod(ll a, ll b)
{
    if(b==0) return 1;
    else if(b==1) return a;

    ll half = powermod(a,b/2) % mod;

    if(!b&1) return (half*half) % mod;

    else return (a*half*half) % mod;
}
ll add(ll a, ll b)
{
    return ((a%mod)+(b%mod))%mod;
}
ll mul(ll a, ll b)
{
    return ((a%mod)*(b%mod))%mod;
}
ll sub(ll a, ll b)
{
    return ((((a%mod)-(b%mod))%mod)+mod)%mod;
}
ll divide(ll a, ll b)
{
    return a(*powermod(b,mod-2))%mod;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    
    return 0;
}




