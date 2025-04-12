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
        ListNode* middleNode(ListNode* head) {
            ListNode * temp = nullptr;
            vector <ListNode *> vec;
            while(head)
            {
                vec.push_back(head);
                head = head->next;
            }

            int half  = vec.size()/2;
            
            return vec[half];

        }
};



ListNode* arrtoL(int size,int arr[])
{
    ListNode * head = new ListNode(arr[0]);
    ListNode *current = head;
    for(int i = 1 ;i< size;i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;

};



void    print(ListNode *head)
    {
        while(head)
        {
            cout<<head->val<<"->";
            head = head->next;
        }

        cout<<"NULL"<<endl;
    }

    int main()
    {
        Solution s;
        ListNode *list1 = nullptr;
        int arr[]={1,2,3,4,5};
        int size = sizeof(arr)/sizeof(arr[0]);
        list1 = arrtoL(size,arr);
        cout<<"current linked list"<<endl;
        print(list1);

        ListNode *mid = s.middleNode(list1);
        cout<<"Midle of linked list"<<endl;
        print(mid);

        return 0;
    }