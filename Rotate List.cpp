#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;

        int length = 1;
        ListNode* dummy = head;

        while (dummy->next) {
            dummy = dummy->next;
            length++;
        }

        int position = k % length;
        if (position == 0) return head;

        ListNode* current = head;
        for (int i = 0; i < length - position - 1; ++i) {
            current = current->next;
        }

        ListNode* newHead = current->next;
        current->next = nullptr;
        dummy->next = head;

        return newHead;        
    }
};
ListNode *createNodes(const vector<int> &list)
{
    if(list.empty()) return nullptr;
    ListNode *head = new ListNode(list[0]);

    ListNode *current = head;
    for(int i  = 1; i < list.size();i++)
    {
        current->next = new ListNode(list[i]);
        current = current->next;
    }
    return head;
}
void print(ListNode *head)
{
    while (head)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout<<"nullptr\n";

}
int main()
{
    vector <int> list = {1,3,4,5};
    createNodes(list);

    Solution s;
    s.rotateRight(createNodes(list),2);
    print(s.rotateRight(createNodes(list),2));
    cout<<"\n\n";
    //second test case
    Solution s1;
    vector<int> values = {1,2,3,4,5};
    createNodes(values);
    s1.rotateRight(createNodes(values),5);
    print(s1.rotateRight(createNodes(values),5));
    


    return 0;
}