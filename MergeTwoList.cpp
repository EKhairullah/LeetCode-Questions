#include <iostream>
# include <cstdlib>
using namespace std;
struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {
    }
};

class Solution {
   public:
       ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           ListNode dummy(0);
           ListNode *tail = &dummy;
           while(list1 && list2)
           {
            if(list1->val<=list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail ->next = list2;
                list2 = list2->next;
            }
            tail=tail->next;
           }
           tail->next = list1 ? list1:list2;
           return dummy.next;
       }
   };
ListNode * arrToLL(int arr[],int size)
{
    if(size==0) return nullptr;
    ListNode * head = new ListNode(arr[0]);
    ListNode * current = head;
    for(int i =1;i<size;i++)
    {
        current->next = new ListNode(arr[i]);
    }
    return head;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void freelist(ListNode * head)
{
    while (head)
    {
        /* code */
        ListNode * temp = head;
        head = head->next;
        delete temp;
    }
    
}
// void append(ListNode *list1)
// {
//     ListNode * temp = new ListNode(list1);
// }
int main(){
    Solution s;
    int arr1[]={1,2,3};
    int arr2[]={1,2,4};
    ListNode  *list1 = arrToLL(arr1,3);
    ListNode * list2 = arrToLL(arr2,3);
    
    ListNode * merged = s.mergeTwoLists(list1,list2);
    cout<<"merge list"<<": ";
    printList(merged);
    freelist(merged);
    return 0;
}
