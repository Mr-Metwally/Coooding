#include <bits/stdc++.h>
using namespace std;
#define ll long long

void primeFactors(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<' ';
            n/=i;
        }
    }
    if(n>1) cout<<n;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    primeFactors(2);
    
    return 0;
}





