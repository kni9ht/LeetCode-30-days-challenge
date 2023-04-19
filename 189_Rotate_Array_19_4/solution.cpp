#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int> temp(nums.size());
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
    }
    return temp;
}

int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    for(auto i : rotate(nums,k))
    {
        cout<<i<<" ";
    }
    return 0;
}