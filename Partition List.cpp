
#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode before(0);
        ListNode after(0);
        ListNode *before_cur = &before;
        ListNode *after_cur = &after;
        while(head)
        {
            if(head->val < x)
            {
                before_cur->next = head;
                before_cur = head;
            }
            else
            {
                after_cur ->next = head;
                after_cur = head;
            }
            head = head->next;
        }
        after_cur->next = nullptr;
        before_cur->next = after.next;
        return before.next;   
    }
};

ListNode *createLinkedList(const vector<int> &list)
{
    ListNode *temp = new ListNode(list[0]);
    ListNode *test = temp;
    for(int i = 1; i < list.size(); i++)
    {
        test->next = new ListNode(list[i]);
        test = test->next;
    }
    
    return temp;

}

void print(ListNode *head)
{
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"nullptr\n";
}


int main()
{
    vector <int> list = {1,2,4,3,5,2};
   ListNode *temp =  createLinkedList(list);
   Solution s;
   s.partition(temp, 3);
   print(temp);
}