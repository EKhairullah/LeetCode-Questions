#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> Sub;
        int maxLenght = 0;
        int left = 0;
        for(int i = 0; i < s.size(); i++)
        {
            char currentChar = s[i];
            if(Sub.find(currentChar) != Sub.end() && Sub[currentChar] >= 0) left = max(Sub[currentChar] + 1,left);
            Sub[currentChar] = i;

            int currentLenght = i - left + 1;
            maxLenght = max(maxLenght, left);
        }
        return maxLenght;
    }
};

int main()
{
    Solution s;
    string a = "abba";
    cout<<"the longest SubString is: "<<s.lengthOfLongestSubstring(a)<<endl;
    return 0;
}

