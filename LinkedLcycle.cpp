#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;
 struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(head  == nullptr || head->next == nullptr) return false;
            ListNode * slow = head;
            ListNode * fast = head->next;
            while(fast)
            {
                if(fast->next == slow) return true;
                if(fast->next==nullptr) return false;
                slow = slow->next;
                fast = fast->next->next;
            }
            return false;
        }
    };


    int main()
    {
        Solution s;
        ListNode * list = new ListNode(0);
        ListNode *list1 = new ListNode(1);
        ListNode * list2 = new ListNode(2);
        ListNode * list3 = new ListNode(5);

        list->next = list1;
        list1->next = list2;
        list2->next = list3;
        list3->next = nullptr;

        cout<<"has cycle ?"<<(s.hasCycle(list1) ? "yes": "No")<<endl;
        
        list3->next = list1;
        cout<<"has cycle ?"<<(s.hasCycle(list1) ? "yes": "No")<<endl;


        return 0;
    }