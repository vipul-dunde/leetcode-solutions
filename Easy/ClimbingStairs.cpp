#include <bits/stdc++.h>
#define lint long int
#define vectint vector<int>
#define fors(a, b) for (int a = 0; a < b; a++)
#define forloop(i, m, n) for (int i = m; i < n; i++)
#define endl "\n"
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
    if(n==0){
        return 0;
    }

    // steps with 1
    lint totalsteps = n;

    // steps with 2 and 1
    lint prevstep1=1,prevstep2=1, currstep;
    forloop(i, 1, n){
        currstep = prevstep1 + prevstep2;
        prevstep2 = prevstep1;
        prevstep1=currstep;
    }

    return prevstep1;
        
        
    }
};