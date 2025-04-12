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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        if (!headA || !headB) return nullptr;

        ListNode *a = headA;
        ListNode *b = headB;

        // Move both pointers until they meet (or both become null)
        while (a != b) {
            a = a ? a->next : headB;
            b = b ? b->next : headA;
        }

        return a;  // Can be null or intersection node
    }
};

ListNode* arrayToLL(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

void print(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution s;

    // Common intersection part: 8 -> 4 -> 5
    int commonArr[] = {8, 4, 5};
    ListNode* common = arrayToLL(commonArr, 3);

    // First list: 4 -> 1 -> [8 -> 4 -> 5]
    ListNode* list1 = new ListNode(4);
    list1->next = new ListNode(1);
    list1->next->next = common;

    // Second list: 5 -> 6 -> 1 -> [8 -> 4 -> 5]
    ListNode* list2 = new ListNode(5);
    list2->next = new ListNode(6);
    list2->next->next = new ListNode(1);
    list2->next->next->next = common;

    // Get intersection
    ListNode* result = s.getIntersectionNode(list1, list2);

    if (result)
        cout << "Intersection starts at node with value: " << result->val << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
