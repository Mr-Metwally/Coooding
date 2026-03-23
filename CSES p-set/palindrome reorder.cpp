#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int c[26]={0} // count occurences of each letter.
    int c1=0;  // how many letters appear in an odd number.

    for(char d:s) ++c[d-'A']; // loop through each letter, convert the letter into a nubmer and increase the count of that letter.

    for(int i=0;i<26;i++) c1+=c[i]&1;  // count how many letter have odd frequency.

    if(c1>1) cout<<"NO SOLUTION\n";  // if there is more than one number in an odd frequency. NO SOLUTION.
    else
    {
        string ans;
        for(int i=0;i<26;i++) ans+=string(c[i]/2,'A'+i); // add half of each letter to answer.
      
        string rev=ans;                // this will be the second half reversed.
        reverse(rev.begin(),rev.end());
      
        for(int i=0;i<26;i++) if(c[i]&1) ans+=char('A'+i);
        ans+=rev;                    // add the two halfs together and you created a palindrome.
      
        cout<<ans<<"\n";
    }
    

    return 0;
}
