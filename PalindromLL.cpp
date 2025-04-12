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
            vector <ListNode *> vec;
            ListNode * temp = head;



            while(temp)
            {
                vec.push_back(temp);
                temp = temp->next;
            }





            int i =0 , j = vec.size()-1;
            while(i<j)
            {
                if(vec[i]->val != vec[j]->val) return false;
                 
                i++;
                j--;
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