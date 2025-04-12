#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
struct ListNode
{
    int val;
    ListNode * next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x):val(x) ,next(nullptr){}
    ListNode(int x,ListNode * next):val(x),next(next){}
};
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            vector <ListNode*> vec;
            ListNode * temp = head;
 
            while(temp)
            {
                vec.push_back(temp);// for moveing head in vec
                temp = temp->next;
            }
            
            for(int i = vec.size()-1 ;i > 0 ; i--)
            {
                vec[i]->next = vec[i-1];
            }
            
            if(!vec.empty())
            {
                vec[0]->next=nullptr;

            }

            return vec.empty() ? nullptr:vec.back();
        }
    };






void printList(ListNode * head)
{
    while(head)
    {
        cout<<head->val<< "->";
        head = head->next;
    }
    cout<<"NULL";
}




int main()
{
    Solution s;

    ListNode* list = new ListNode(1);
    list->next = new ListNode(2);


    printList(list);
    cout<<endl;
    ListNode *rev = s.reverseList(list);
    printList(list);
    
    
    return 0;
}