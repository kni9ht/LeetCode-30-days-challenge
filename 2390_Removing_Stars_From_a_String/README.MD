# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We can just use stack data-structure to remove the left char or start and start itself and then I have to convert from stack to again string and reverse it :) 

# Approach
<!-- Describe your approach to solving the problem. -->
I start iterating the string from start and start pushing char in star but whenever I hit * i just pop the last char i have pushed. Then after completing this operation I have to Insert char back to fresh string from stack and then reverse it to make it the string that I have to output. 

# Complexity
- Time complexity: worst case O(3n)=O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: worst case O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        s.erase();
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
```