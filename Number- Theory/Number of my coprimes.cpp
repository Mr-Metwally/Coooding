#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll phi(ll n)
{
    ll ret=n;
    for(ll i=2;i*i<=n;i++)
    {
        while(n%i==0) {n/=i; ret-=ret/i;}
    }
    if(n>1) ret-=ret/n;
    return ret;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int c=0;
    for(int i=1;i<=n;i++) 
    {
        if(__gcd(n,i)==1) c++;
    }
    cout<<c<<' ';
    phi(n);
 
    return 0;
}

// --------------------------------using seive-----------------------------------

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+5;
ll phi[N];
void seive()
{
    for(int i=0;i<N;i++) phi[i]=i;
    for(int i=2;i<N;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<N;j+=i)
            {
                phi[j]-=phi[j]/i;
            }
        }
    }
}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    seive();
    cout<<phi[n];
 
    return 0;
}



