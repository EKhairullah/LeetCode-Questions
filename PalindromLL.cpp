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
        bool isPalindrome(ListNode* head) {
            // vector <ListNode *> vec;
            // ListNode * temp = head;



            // while(temp)
            // {
            //     vec.push_back(temp);
            //     temp = temp->next;
            // }





            // int i =0 , j = vec.size()-1;
            // while(i<j)
            // {
            //     if(vec[i]->val != vec[j]->val) return false;
                 
            //     i++;
            //     j--;
            // }
            // return true;
            ListNode *slow = head;
            ListNode *fast = head;
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            if(fast){
                 slow = slow->next;
            }
            // reverse the second half
            ListNode *prev = nullptr;
            while(slow != nullptr){
                ListNode *temp = slow->next;
                slow->next = prev;
                prev = slow;
                slow = temp;
            }
            ListNode *left = head;
            ListNode *right = prev;
            while(right){
                if(left->val != right->val){
                    return false;
                }
                left = left->next;
                right = right->next;
            }
            return true;
    

        }
    };

    int main()
    {
        Solution s;
        ListNode * list = new ListNode(1);
        list->next = new ListNode(2);
        list->next->next = new ListNode(2);
        list->next->next->next = new ListNode(2);
        list->next->next->next->next = new ListNode(1);
        s.isPalindrome(list);
        if(s.isPalindrome(list)==true) cout<<"yes"<<endl;
        else cout<<"not Palindrome"<<endl;
        return 0;

    }