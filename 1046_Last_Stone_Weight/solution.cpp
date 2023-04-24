#include "../stdc++.h"
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    while(stones.size()>1){
        sort(stones.begin(),stones.end());
        if(stones.size()-2>=0)
        {
            if(stones[stones.size()-1]==stones[stones.size()-2])
            {
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones[stones.size()-2]=stones[stones.size()-1]-stones[stones.size()-2];
                stones.pop_back();
            }
        }
    }
    if(stones.size()==1)
    {
        return stones[0];
    }
    return 0;
}

int main()
{
    vector<int> stones={2,2};
    cout<<lastStoneWeight(stones);
}