#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
    public:
        ListNode* removeElements(ListNode* head, int value) {
            if(head ==nullptr) return head;
            while(head != nullptr &&head->val == value) {
                head = head->next;
            }
            ListNode * current = head;
            while(current != nullptr &&current->next !=nullptr)
            {
                if(current->next->val==value){
                current->next=current->next->next;
                
            }
            
            else {
                current =  current->next;
            }

        }
        return head;
    }
    
    };
    void append(ListNode*& head, int val) {
        if (!head) {
            head = new ListNode(val);
            return;
        }
        ListNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new ListNode(val);
    }
    void display(ListNode * head)
    {
        while (head !=nullptr)

        {
            cout<<head->val;
            if(head->next != nullptr) cout<<"->";            
            head = head->next;
        }
        cout<<"NULL";
        
    }

int main()
{
    ListNode *head = nullptr;
    append(head,1);
    append(head,2);
    
    cout<<"before Delete: ";
    display(head);
    cout<<"\n After Delete: ";
    Solution s;
    s.removeElements(head,1);
    display(head);
    return 0;
    
}

// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
// Note that the five elements can be returned in any order.
// It does not matter what you leave beyond the returned k (hence they are underscores).

 