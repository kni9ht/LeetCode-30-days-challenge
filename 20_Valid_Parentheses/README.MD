# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This is standard problem for stack data-structure and it falls under category of pure data-structure problem

# Approach
<!-- Describe your approach to solving the problem. -->
when I get the open bracket I just push it in and when I get close bracket I just pop that open bracket and thats all I have to do. Here the issue is how to know which open bracket correspond to which close bracket and for that I have created MAP you can do with asci as well.

# Complexity
- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(3)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
private:
    unordered_map<char,char> mp={{')','('},{']','['},{'}','{'}};
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()>0)
            {
                if(st.top()==mp[s[i]])
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        if(st.size()>0)
        {
            return false;
        }
        else{
            return true;
        }
    }
};
```