#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result = {""};
        unordered_map<char, string> phone = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, 
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, 
            {'8', "tuv"} ,{'9',"wxyz"}
        };
        string current = "";
        
        function<void(int)> backtrack = [&](int index)
        {
            if(index == digits.size())
            {
                result.push_back(current);
                return;
            }

            string letters = phone[digits[index]];
            for(char c: letters)
            {
                current.push_back(c);
                backtrack(index + 1);
                current.pop_back();
            }
            
        };
        backtrack(0);
        return result;
        

    }
};

int main()
{
    Solution s;
    string digits = "23";
    vector<string> a = s.letterCombinations(digits);
    for(auto &b: a) cout<<b<<" ";
    cout<<endl;
    return 0;
}