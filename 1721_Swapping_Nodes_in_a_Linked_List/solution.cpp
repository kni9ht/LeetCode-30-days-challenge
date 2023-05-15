#include "../stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node *nxt = nullptr;
};
typedef struct Node node;

node* printList(node *head)
{
    node* tmp=head;
    while (tmp)
    {
        cout << tmp->data << " ";
        tmp = tmp->nxt;
    }
    cout << endl;
    return head;
}

/** BruteForce Solution **/

// node* swapNodes(node *head,int k)
// {
//     node* tmp=head;
//     vector<int> vc;
//     while (head)
//     {
//         vc.push_back(head->data);
//         head = head->nxt;
//     }
//     swap(vc[k-1],vc[vc.size()-k]);
//     head=tmp;
//     int i=0;
//     while (head)
//     {
//         head->data=vc[i];
//         head = head->nxt;
//         i++;
//     }
//     return tmp;
// }

node* swapNodes(node *head,int k)
{
    node* tmp=head;
    node* tmp1=head;
    node* x=nullptr;
    node* y=nullptr;
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
            tmp1=tmp1->nxt;
        }
        i++;
        tmp=tmp->nxt;

    }
    swap(x->data,y->data);
    return head;
}

int main(int argc, char const *argv[])
{
    vector<int> vc = {1,2,3,4,5};
    int n = vc.size();
    node *head = new node;
    node *start = head;
    head->data = vc[0];
    for (int i = 1; i < n; i++)
    {
        node *current = new node;
        current->data = vc[i];
        head->nxt = current;
        head = current;
    }
    start=printList(start);
    start=swapNodes(start, 2);
    start=printList(start);
    return 0;
}
