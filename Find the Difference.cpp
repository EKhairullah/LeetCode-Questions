#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char, int> hash;
        for(char c: s)
        {
            hash[c]++;
        }

        int i = -1;
        for(char c: t)
        {
            i++;
            if(hash[c] == 0)
            {
                return t[i];
            }
            hash[c]--;
        }
        return '\0';


    }
};

int main()
{

    Solution s;
    string s1 = "aa";
    string s2 = "a";
    cout<<s.findTheDifference(s2, s1)<<endl;

    return 0;
}