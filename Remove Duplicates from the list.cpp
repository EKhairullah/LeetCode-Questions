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
    ListNode* deleteDuplicates(ListNode* head) {
 
        vector <int> result;
        vector <bool> flag;
        while(head)
        {
            result.push_back(head->val);
            flag.push_back(true);
            head = head->next;
        }

        vector <int> last;
        for(int i = 0; i < result.size(); i++)
        {
            for(int j = i + 1; j < result.size(); j++)
            {
                if(result[i] == result[j])
                {
                    flag[i] =false;
                    flag[j] = false;
                }
            }
        }
        

        for(int i = 0; i < result.size(); i++)
        {
            if(flag[i])
            {
                last.push_back(result[i]);
            }
        }

        ListNode *temp = new ListNode(last[0]);
        ListNode *test = temp;
        for(int i = 1; i < last.size(); i++ )
        {
            test->next = new ListNode(last[i]);
            test = test->next;
        }

        return temp;
    }
};

ListNode *createNode(const vector<int> &list)
{
    ListNode *head = new ListNode(list[0]);
    ListNode *temp = head;
    for(int i = 1; i < list.size(); i++)
    {
        temp->next = new ListNode(list[i]);
        temp = temp->next;
    }
    
    return head;

}

void printNode(ListNode *list)
{
    while(list)
    {
        cout<<list->val<<"->";
        list = list->next;
    }
    cout<<"n\n";
}

int main()
{
    vector <int> list = {1,1,2,2,3,4,5,6};
    ListNode *list1 = createNode(list);
    Solution s;
    s.deleteDuplicates(list1);
    printNode(s.deleteDuplicates(list1));

    return 0;
}