#include "../stdc++.h"
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    vector<int> res;
    for(auto i : nums)
    {
        mp[i]++;
    }
    auto compare = [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>, decltype(compare)> pq(compare);
    for(auto i:mp)
    {
        pq.push(i);
    }
    while(k--)
    {
        res.push_back(pq.top().first);
        pq.pop();
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> nums={1,1,1,2,2,3};
    for(auto i:topKFrequent(nums,2))
    {
        cout<<i<<" ";
    }
    return 0;
}
