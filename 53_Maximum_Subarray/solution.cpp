#include "../stdc++.h"
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum=0,maxx=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        maxx=max(maxx,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxx;
}

int main(int argc, char const *argv[])
{
    vector<int> vc={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(vc);
    return 0;
}
