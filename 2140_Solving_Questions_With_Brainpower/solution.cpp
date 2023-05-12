#include "../stdc++.h"
using namespace std;

// long long mostPoints(vector<vector<int>> &questions, int i, long long maxx,unordered_map<int,int> &dp)
// {
//     // printf("%d\n", i);
//     if(dp[i])
//     {
//         return dp[i];
//     }
//     if (i >= questions.size())
//     {
//         return maxx;
//     }
//     if (i == questions.size()-1)
//     {
//         return maxx+questions[i][0];
//     }
//     dp[i]=max(mostPoints(questions, i + questions[i][1] + 1, maxx+questions[i][0],dp), mostPoints(questions, i + questions[i + 1][1] + 1, maxx,dp));
//     return dp[i];
// }

long long mostPoints(int i, vector<vector<int>> &questions, unordered_map<int,long long> &dp)
{
    if (i >= questions.size()) return 0;
    if(dp[i]) return dp[i]; 

    return dp[i]=max(questions[i][0] + mostPoints(i + questions[i][1] + 1, questions, dp),mostPoints(i+1, questions, dp));
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> vc = {{12,46},{78,19},{63,15},{79,62},{13,10}}; //{{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}}
    unordered_map<int,long long> dp;
    cout << mostPoints(0, vc, dp);                                      //{{3, 2}, {4, 3}, {4, 4}, {2, 5}}
    return 0;
}
