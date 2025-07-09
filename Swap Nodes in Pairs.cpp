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
    ListNode *swapPairs(ListNode *head)
    {
        vector<int> result;
        vector<bool> flag;
        while (head)
        {
            result.push_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < result.size(); i++)
        {
            flag.push_back(true);
        }

        for (int i = 0; i < result.size(); i++)
        {
            for (int j = i + 1; j < result.size(); j++)
            {
                if (flag[i] != false && flag[j] != false)
                {
                    int temp = result[i];
                    result[i] = result[j];
                    result[j] = temp;
                    flag[i] = false;
                    flag[j] = false;
                }
            }
        }
        

        ListNode *temp = new ListNode(result[0]);
        ListNode *current = temp;
        for(int i = 1;  i < result.size(); i++)
        {
            current->next = new ListNode(result[i]);
            current = current->next;
        }
        
        return temp;
    }

};

void print(ListNode *head)
{
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}
int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);

    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    Solution s;
    s.swapPairs(l1);
    print(s.swapPairs(l1));
    return 0;
}