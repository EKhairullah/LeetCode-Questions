#include <iostream>
#include <cstdlib>
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
     
     
            ListNode * current = head;
            while(current !=nullptr && current->next != nullptr)
            {
                if(current->val  ==  current->next->val)
                {
                    ListNode * temp = current->next;
                    current->next = current->next->next;
                    delete temp;
                }
                else current = current->next;
            }
            return head;

        }
    };

void display(ListNode * list1)
{
    while(list1)
    {
        cout<<list1->val<<"->";
        list1 = list1->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    ListNode *list1= new ListNode(1);
    list1->next = new ListNode(1);
    list1->next->next=new ListNode(1);
    list1->next->next->next=new ListNode(2);
    list1->next->next->next->next=new ListNode(2);

    Solution s;
    
    list1 = s.deleteDuplicates(list1);

    display(list1);
    return 0;
}