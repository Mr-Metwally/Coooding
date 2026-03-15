#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b)
{
    if(b>a) swap(a,b);
    if(b==0) return a;
    return gcd(a%b, b);
}

ll lcm(ll a, ll b)
{
    return a*b/gcd(a,b);
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout<<gcd(45,10)<<'\n';
    cout<<__gcd(45, 10)<<'\n';


    cout<<lcm(3,6);
    lcm(3,6); // you can use it directly cout<<lcm(3,6); (built-in func)
    return 0;
}





