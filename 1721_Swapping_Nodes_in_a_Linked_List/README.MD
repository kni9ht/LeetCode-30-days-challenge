# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Two pointer solution already solved the middle of link list problem so referance to that problem I got the intuition that the solution of this problem lies in fast-slow pointer

# Approach
<!-- Describe your approach to solving the problem. -->
I have took one itterator that is "i" I itterate throught the link list also took 2 pointer one it to store the address of kth element from start and second is to store the address of kth element from last. I have used to pointers "x" and "y". if i==j then I have to fill "x" pointer with the address of the current node and for "y" I have to fill address of every node upto the the list end but I will start filling the pointer "y" when i>=k

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp=head;
        ListNode* tmp1=head;
        ListNode* x=nullptr;
        ListNode* y=nullptr;
        int i=1;
        while(tmp)
        {
            if(i==k)
            {
                x=tmp;
            }
            if(i>=k)
            {
                y=tmp1;
                tmp1=tmp1->next;
            }
            i++;
            tmp=tmp->next;

        }
        swap(x->val,y->val);
        return head;
    }
};
```