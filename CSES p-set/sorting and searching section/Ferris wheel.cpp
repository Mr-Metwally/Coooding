#include <bits/stdc++.h>
using namespace std;
#define ll long long

// sort all the weights of boys and go two pointers on them-----> to try to maximize the number of possible pairs then subtract it from n.
int a[1000005];
int b[1000005];
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx;
    cin>>n>>mx;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int ans=0;
    for(int i=0, j=n-1;i<j;)
    {
        while(i<j && a[i]+a[j]>mx) j--;
        if(i>=j) break;
        ans++;
        i++, j--;
    }
    cout<<n-ans<<'\n';
    return 0;
}
