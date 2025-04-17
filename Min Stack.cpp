#include <iostream>
#include <vector>
using namespace std;

class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {}

    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) {
            min_val = val;
        }
        st.push_back({val, min_val});        
    }

    void pop() {
        if (!st.empty()) {
            st.pop_back();
        }
    }

    int top() {
        return st.empty() ? -1 : st.back()[0];
    }

    int getMin() {
        return st.empty() ? -1 : st.back()[1]; 
    }
};

int main() {
    MinStack ms;

    ms.push(5);
    ms.push(3);
    ms.push(7);
    cout << "Top: " << ms.top() << endl;        // Should print 7
    cout << "Min: " << ms.getMin() << endl;     // Should print 3

    ms.pop(); // Removes 7
    cout << "Top after pop: " << ms.top() << endl;    // Should print 3
    cout << "Min after pop: " << ms.getMin() << endl; // Should still print 3

    ms.pop(); // Removes 3
    cout << "Min after removing 3: " << ms.getMin() << endl; // Should print 5

    return 0;
}
