# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
some kind of greedy solution where I will to try to fit the heavy person and light person in same boat, this is where I will get greedy :)

# Approach
<!-- Describe your approach to solving the problem. -->
First I have thought like it might be a DP solution but then I have sorted the array and I thought of using two pointer method where I will keep two pointers one is on the lightest person and one is one the heavest person.

# Complexity
- Time complexity: O(nlog(n)) for sorting and O(n) for find the pairs
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i=0, j=people.size()-1, res=0;
        while(i<j)
        {
            if(people[j]+people[i]<=limit)
            {
                res++;
                j--;
                i++;
            }
            else if(people[j]+people[i]>limit)
            {
                res++;
                j--;
            }
            if(i==j)
            {
                res++;
            }
        }
        return res;
    }
};
```