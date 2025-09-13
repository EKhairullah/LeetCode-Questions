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

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *pre = dummy;
        ListNode *cur;
        dummy->next = head;
        for (int i = 0; i < left - 1; i++)
        {
            pre = pre->next;
        }
        cur = pre->next;
        for (int i = 0; i < right - left; i++)
        {
            ListNode *temp = pre->next;
            pre->next = cur->next;
            cur->next = cur->next->next;
            pre->next->next = temp;
        }
        return dummy->next;
    }
};


ListNode *createLinkedList(const vector<int> numbers)
{
    ListNode *temp = new ListNode(numbers[0]);
    ListNode *head = temp;
    for (int i = 1; i < numbers.size(); i++)
    {
        temp->next = new ListNode(numbers[i]);
        temp = temp->next;
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
    cout << "nullptr\n";
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    ListNode *list = createLinkedList(numbers);
    print(list);

    Solution s;
    print(s.reverseBetween(list, 2, 4));
    return 0;
}