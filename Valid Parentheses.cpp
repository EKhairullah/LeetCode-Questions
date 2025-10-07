#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }

            else
            {
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) return false;
            }
        }
        return st.empty();
    }
};
int main()
{
    string s ="()[]{";
    
    // for (auto a: s) cout<< a << " ";
    Solution sl;
    cout<<(sl.isValid(s) ? "True" : "False");
    cout << endl;

    return 0;
}