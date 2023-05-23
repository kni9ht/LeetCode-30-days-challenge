#include "../stdc++.h"
using namespace std;

class KthLargest {
public:
    int k;
    vector<int> nums;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        auto comp =[](int a,int b){
            return a>b;
        };
        sort(nums.begin(),nums.end(),comp);
        this->nums=nums;
    }
    
    void print()
    {
        for(auto i:nums)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    // int add(int val) {      
    //     nums.insert(nums.begin()+(lower_bound(nums.begin(),nums.end(),val,greater<int>())-nums.begin()),val);
    //     return nums[k-1];
    // }

    int add(int val) {
        if(nums.size()<=0)
        {
            nums.push_back(val);
            return nums[k-1];
        }
        if(nums[0]<val)
        {
            nums.insert(nums.begin(),val);
            return nums[k-1];
        }   
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>=val)
            {
                nums.insert(nums.begin()+(i+1),val);
                break;
            }
        }
        return nums[k-1];
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums={4,5,8,2}; //8 5 4 2
    // sort(nums.begin(),nums.end(),greater<int>());
    // cout<<(lower_bound(nums.begin(),nums.end(),9,greater<int>())-nums.begin())<<endl;
    KthLargest* obj = new KthLargest(3, nums);
    cout<<obj->add(3)<<" ";
    cout<<obj->add(5)<<" ";
    cout<<obj->add(10)<<" ";
    cout<<obj->add(9)<<" ";
    cout<<obj->add(4)<<" ";
    return 0;
}
