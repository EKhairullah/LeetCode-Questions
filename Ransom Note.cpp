#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count;
        for(char c: magazine)
        {
            count[c]++;
        }
        
        for(char c: ransomNote)
        {
            if(count[c] == 0) return false;
            count[c]--;
        }
        return true;
    }
};

int main()
{
    Solution s;
    string ransomNote = "baaaaaaaaa";
    string magazine  = "abaaaaaaaaaaaaaaaaaaaaaaa";
    cout<<"is Exist: "<<(s.canConstruct(ransomNote, magazine) ?"yes" : "NO")<<endl;
    s.canConstruct(ransomNote,magazine);
    return 0;

}