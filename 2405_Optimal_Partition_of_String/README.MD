# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem is pretty much stardard problem like "number of unique character" or "frequency of character" and it's a standard data structure problem, if you know the data structure then your question is solved it take me just 3 minutes to think and write the code as well.

# Approach
<!-- Describe your approach to solving the problem. -->
lets take a unordered_set which have time complexity of O(1) for find and O(1) for insertion, and whenever I find that the character is repeated I am just clearing the set and incrementing my counter which have the count for unique number of strings

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(n)

# Code
```
class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> st;
        int ct=0;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end())
            {
                st.clear();
                ct++;
            }
            st.insert(s[i]);
        }
        return ct+1;
    }
};
```