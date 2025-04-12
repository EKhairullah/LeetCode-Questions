#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
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
        int getDecimalValue(ListNode* head) {
            vector <ListNode *> vec;
            while(head)
            {
                vec.push_back(head);
                head = head->next;
            }
            int result = 0;
            int j =0;
            for(int i =vec.size()-1;i >=0;i--)
            {
                // result += vec[i]->val * 2;
                result += pow(2,i) * vec[j]->val;
                j++;
            }
            return result;

        }
    };
    int main()
    {
        Solution s;
        ListNode *list = new ListNode(1);
        list->next = new ListNode(0);
        list->next->next = new ListNode(1);

        int result = s.getDecimalValue(list);
        cout<<result<<endl;





        return 0;
    }