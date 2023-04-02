#include "../stdc++.h"
using namespace std;

int BinarySearch(int st, int ed, int val, vector<int>& nums)
{
    int mid=(st+ed)/2;
    if(nums[mid]==val)
    {
        return mid;
    }
    else if(nums[st]==val)
    {
        return st;
    }
    else if(nums[ed]==val)
    {
        return ed;
    }
    else if(mid==st)
    {
        return -1;
    }
    return val<nums[mid]?BinarySearch(st, mid, val, nums):BinarySearch(mid, ed, val, nums);
    // return -1;
}
int search(vector<int>& nums, int target) {
    return BinarySearch(0, nums.size()-1, target, nums);
}

int main()
{
    vector<int> nums={-1,0,3,5,9,12};
    int target=-2;
    cout<<search(nums, target)<<endl;
    return 0;
}