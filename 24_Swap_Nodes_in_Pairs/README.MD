# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Mostly Linklist problems are solved by fast and slow pointer method.

# Approach
<!-- Describe your approach to solving the problem. -->
Fast and slow pointers solve this problem, the logic behind is you have to keep itterator what is "i" if i%2!=0 that means my mast pointer is at odd number and my slow pointer is at even number and hence I have to swap it. The slow pointer starts when i>=1 that is 1 behind my fast pointer.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(0)

# Code
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* tmp=head;
        ListNode* tmp1=head;
        int i=0;
        while (tmp)
        {
            if(i%2!=0)
            {
            swap(tmp->val,tmp1->val);
            }
            if(i>=1){
            tmp1=tmp1->next;
            }
            i++;
            tmp=tmp->next;
        } 
        return head;
    }
};
```
