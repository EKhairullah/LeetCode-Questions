#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct listNode{

    int val;
    listNode *next;
    listNode(): val(0),next(nullptr){}
    listNode(int x): val(x), next(nullptr){}
    listNode(int x, listNode *l): val(x), next(l){}
};

class sulotion{
public:
    listNode *mergeSorted(vector<listNode*>& lists)
    {
        if(lists.empty()) return nullptr;
        
        vector <int> result;
        int j = 0;
        for(int i = 0; i < lists.size(); i++)
        {
            while(lists[i] != nullptr)
            {
                result.push_back(lists[i]->val);
                lists[i] = lists[i]->next;

            }
            
        }
        // for(int i = 0; i < result.size(); i++)
        // {
        //     for(int j = i +1; j < result.size(); j++)
        //     {
        //         if(result[i] > result[j])
        //         {
        //             int temp = result[i];
        //             result[i] = result[j];
        //             result[j] = temp;
        //         }
        //     }
        // }
        sort(result.begin(),result.end());

        if(result.empty()) return nullptr;
        listNode *head = new listNode(result[0]);
        listNode *temp = head;
        for(int i = 1; i < result.size(); i++)
        {
            temp->next = new listNode(result[i]);
            temp = temp->next;
        }
        return head;
    }
};

void print(listNode *head)
{
    while(head)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL";
}
int main()
{
    sulotion s;
    vector <listNode*> list;
    listNode *l1 =new listNode(1);
    listNode *l2 = new listNode(4);
    listNode *l3 = new listNode(5);

    listNode *l21 = new listNode(1);
    listNode *l22 = new listNode(3);
    listNode *l23 = new listNode(4);

    listNode *l31 = new listNode(2);
    listNode *l32 = new listNode(6);

    l1->next = l2;
    l2->next = l3;

    l21->next = l22;
    l22->next = l23;

    l31->next = l32;

    list.push_back(l1);
    list.push_back(l21);
    list.push_back(l31);
    // s.mergeSorted(list);
    print(s.mergeSorted(list));
    return 0;
}