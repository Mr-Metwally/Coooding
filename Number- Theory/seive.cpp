#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1001;
vector<bool>isprime(N,1);
void seive()
{
    isprime[1]=isprime[0]=0;
    for(int i=2;i<N;i++)
    {
        if(isprime[i]) 
        {
            for(int j=i+i;j<N;j+=i)
            {
                isprime[j]=0;
            }
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    seive();
    for(int i=1;i<=100;i++) if(isprime[i]) cout<<i<<'\n';

    return 0;
}
