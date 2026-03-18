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
//---------------------------------------------Linear_seive----------------------------------

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+5;
vector<bool>isPrime (N,1); vector<int> primes;
void linear_seive()
{
    isPrime[0]=isPrime[1]=0;
    for(ll i=2;i<=N;i++)
    {
        if(isPrime[i]) primes.push_back(i);
        for(auto it:primes)
        {
            if(i*it>=N) break;
            isPrime[i*it]==0;

            if(i%it==0) break;
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    return 0;
}




