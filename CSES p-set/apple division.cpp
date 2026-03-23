#include <bits/stdc++.h>
using namespace std;
#define ll long long

// this code solve a classic meninum difference problem or partition problem.
int p[20];
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    ll s=0, ans=0;
    for(int i=0;i<n;i++) cin>>p[i], s+=p[i];  // store the largest sum of a subset >= s/2.
    
    for(int i=0;i<(1<<n);i++)   // for loop on all subsets in binary (this gives the total number of subsets).
    {
        ll sum=0;
        for(int j=0;j<n;j++) if(i>>j&1) sum+=p[j]; // if statment checks if j-th element is included in the subset

        if(sum<=s/2)   // we want the sum of the subset at closer as possible to the half sum. this minimizes the difference
        {
            ans=max(ans,sum);
        }
    }
    cout<<s-2*ans<<endl;    // if one subset has a sum of ans, then the other subset has a sum of s-ans. 
                            // when subtracting them----> (s-ans)-ans = s-2*ans.
    return 0;
}
