# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
It's a dynamic programming problem where you see every time we have to perform only one operation that is select the question or rejeact the question

# Approach
<!-- Describe your approach to solving the problem. -->
Firstly I thought this is some kind of Greedy problem where I need to maximize the output and for that I need to select hight points question in some pattern but then I realise this is Dynamic programming problem where I have do you task recursively that is select it or reject it.

This part is when I select the question I add the points and increment the pointer that is go to next question after skipping some question according to problem
``` 
questions[i][0]+MostPoints(i+questions[i][1]+1, questions, dp) 
```
This part is when I reject the question where I dont add anything as I am not selecting the question but rejecting it and moving pointer by one that is going to next question
```
MostPoints(i+1, questions, dp)
```

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
    O(nlog(n))

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
    O(n)

# Code
```
class Solution {
public:

    long long MostPoints(int i, vector<vector<int>> &questions, unordered_map<int,long long> &dp)
    {
        if(i>=questions.size()) return 0;
        if(dp[i]) return dp[i];

        return dp[i]=max(questions[i][0]+MostPoints(i+questions[i][1]+1, questions, dp),MostPoints(i+1, questions, dp));
    }
    long long mostPoints(vector<vector<int>>& questions) {
        unordered_map<int,long long> dp;
        return MostPoints(0, questions ,dp);
    }
};
```