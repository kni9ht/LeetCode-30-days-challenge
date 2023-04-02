# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Normaly I have thought of n^2 solution that everyone can think of, then I thought to apply some mathematics which will help me in reduction of 2nd for loop iteration, then I have think of Binary search to completely bypass second for loop 

# Approach
<!-- Describe your approach to solving the problem. -->
The n^2 approach is the bruteforce approach that we can think of, now the simple optimisation which we can think is that lets sort the potions array and if I get any spell and potion combination greater or equal to success then all the potions after that are also make pair. This is based on math i.e if 3*4>=10 then all the numbers greater than 4 when kept in this (3*x>=10) expression will always satisfy. Then we can think of how to get to that index from where I can claim that all the number after this index can satisfy, so here we need Binary search because we want to search for something and binary search is good in searching the things :) so then I applied Binary search but again if I get the index then I have to make sure that index-1 is not satisfying the condition because if it it also satisfying the condition then the index we are looking for is not the index we are currently at.

# Complexity
- Time complexity: n*Log(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:O(1) If we neglect the vector used to store the result
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:

    int BinarySearch(long long spell, vector<int>& potions, long long success, int st, int ed)
    {
        int mid=(st+ed)/2;
        if(mid!=0)
        {
            if((long long)potions[mid]*spell>=success && (long long)potions[mid-1]*spell<success)
            {
                return mid;
            }
        }
        else if((long long)potions[mid]*spell>=success)
        {
            return mid;
        }
        if(potions.size()>1)
        {
            if((long long)potions[ed]*spell>=success && (long long)potions[ed-1]*spell<success)
            {
                return ed;
            }
        }
        else if((long long)potions[ed]*spell>=success)
        {
            return ed;
        }
        if(mid==st || mid==ed)
        {
            return -1;
        }
        return potions[mid-1]*spell<success?BinarySearch(spell, potions, success, mid, ed):BinarySearch(spell, potions, success, st, mid);
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans(spells.size(),0);
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            if((long long)spells[i]*(long long)potions[potions.size()-1]>=success)
            {
                ans[i]=potions.size()-BinarySearch((long long)spells[i], potions, success, 0, potions.size()-1);
            }
        }
        return ans;
    }
};
```