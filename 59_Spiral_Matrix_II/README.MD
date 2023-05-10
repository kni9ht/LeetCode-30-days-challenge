# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This is basic problem of 2 pointer like approach where you need to set pointers and increment them or decrement them as needed

# Approach
<!-- Describe your approach to solving the problem. -->
Just used 2 pointers h and v which are horixontal and vertical, horizontal is set to size-1 and vertical to 0 and incremented and decremented accordingly to acive sperical pattern

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n*n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(0)

# Code
```
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int ct=0,h=n-1,v=0,nm=1;
        vector<vector<int>> mat(n,vector<int>(n,0));
        while(true)
        {
            for(int i=ct;i<=h;i++)
            {
                mat[v][i]=nm;
                nm++;
            }
            v++;
            for(int i=v;i<=h;i++)
            {
                mat[i][h]=nm;
                nm++;
            }
            h--;
            for(int i=h;i>=ct;i--)
            {
                mat[(mat.size()-1)-ct][i]=nm;
                nm++;
            }
            for(int i=h;i>=v;i--)
            {
                mat[i][ct]=nm;
                nm++;
            }
            if(nm>n*n)
            {
                break;
            }
            ct++;
        }
        return mat;
    }
};
```