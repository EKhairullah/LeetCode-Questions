#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> index;
        for (char c : s)
        {
            index[c]++;
        }
        int i = -1;
        for(char c: s)
        {
            i++;
            if(index[c] == 1) 
            {
                cout<<i<<endl;
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution sl;
    string s = "loveleetcode";
    sl.firstUniqChar(s);
    return 0;
}