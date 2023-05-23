# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Solution is that you just have to find the best place for val and just return the (position-1) as the position in 1 indexed and the value you are returning is 0 indexed

# Approach
<!-- Describe your approach to solving the problem. -->
approach is simple just sort the array desending and go from back get the postion greater or equal to val and return (position+1) that says that every element after (position+1) is always lower than val.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n) for every add operation

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)

# Code
```
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

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
```

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Here I want to get the lower bound of the val that says that after this position every item is less that val, that is lower_bound() in c++

# Approach
<!-- Describe your approach to solving the problem. -->
just find the lower_bound() where val can fit if I get the number equal to val then it will return the index of that and if array dont have the number then it will return the index greater than that in this case lower than that as I am using greater<int>() function

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(log(n)) for every add operation

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)

# Code
```
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

    int add(int val) {
        int add(int val) {      
        nums.insert(nums.begin()+(lower_bound(nums.begin(),nums.end(),val,greater<int>())-nums.begin()),val);
       return nums[k-1];
     }
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
```