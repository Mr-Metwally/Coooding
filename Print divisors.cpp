#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<ll>divisors(ll n)
{
    vector<ll>ret;
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0) ret.push_back(i);
    }
    return ret;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll>v = divisors(16);
    for(auto it:v) cout<<it<<' ';
    return 0;
}

                                        // More saver to the time complixty.

#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<ll>divisors(ll n)
{
    vector<ll>ret;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i == 0) 
        {
            ret.push_back(i);
            if(i*i!=n) ret.push_back(n/i);
        }
    }
    return ret;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll>v = divisors(16);
    for(auto it:v) cout<<it<<' ';
    return 0;
}




