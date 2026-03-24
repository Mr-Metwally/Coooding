#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* In this problem: we are given an 8*8 chessboard where--> '.' is empty place and '*' isn't empty. our goal is to find how
   many ways can we place queens while:
   1. No two queens can attack each others.
   2. No two queens are on the '*' place
*/

// ------------------->>>>>>>  {this code assumes that each row has exactly one queen and each coloumb as well}, so it generates all permutations for coloumbs.

// ----------------------->>               p[i]=coloumb of queen in row i;

string s[8];
bool b[20]; // this is an array to mark diagonals. each index represents a diagonal.
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=0;i<8;i++) cin>>s[i]; // reads the board. this is an array of 8 strings and each one represents one row.

    int p[8], ans =0;
    iota(p, p+8, 0);  // initial permutation----> {0,1,2,3,4,5,6,7}---> as this function used to fill a range with sequencial values.
    do {
        bool ok = 1;
        for(int i=0;i<8;i++) 
            ok&=s[i][p[i]]=='.';  // this checks if the queen in the row i and coloumb p[i] is on a free place or not?

        memset(b,0,15);  // this resets the array {b} to make all its elements are equal to zero.
        // why size of 15-------> this is because diagonals come from i+p[i]=7+7=14 as a maximum.
        for(int i=0;i<8;i++)
        {
            if(b[i+p[i]]) ok=false; // i+p[i]--> this represents the main diagonal, this ensures that no two queen on the same diagonal.
            // if statement checks if the diagonal is already occupied.
            b[i+p[i]]=1; // if not mark it as occupied and continue.
        }

        memset(b,0,15); // this part breaks down the case of anti-diagonal check.
        for(int i=0;i<8;i++)
        {
            if(b[i+7-p[i]]) ok=false; // while i+p[i]--> the main diagonal. then i-p[i]--> the anti-diagonal. to prevent the negative signs, we are adding seven to i-p[i].

            b[i+7-p[i]]=1; // the same wroks here if they are on the same anti-diagonal----> conflict.
        }
        ans+=ok;
    } while(next_permutation(p, p+8)); // this tries all ways for queens to be placed on a chessboard
    // this permutation makes sure that there is no two queens are on the same coloumb
    cout<<ans<<'\n';

    return 0;
}
