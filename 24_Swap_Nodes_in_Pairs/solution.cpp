#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode {
  int val;
  ListNode *next=nullptr;
}ListNode;

void printList(ListNode* head)
{
  ListNode* tmp=head;
  while (tmp)
  {
    std::cout << tmp->val << " ";
    tmp=tmp->next;
  }
  std::cout << std::endl;
}

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

int main (int argc, char *argv[])
{
  vector<int> vc={1,2,3,4,5,6,7};
   ListNode* head=new ListNode;
   ListNode* start=head;
   head->val=vc[0];
   for(int i=1;i<vc.size();i++)
   {
     ListNode* current=new ListNode;
     current->val=vc[i];
     head->next=current;
     head=current;
   }
   head=start;
   printList(head);
   head=swapPairs(head);
   printList(head);
  return 0;
}
