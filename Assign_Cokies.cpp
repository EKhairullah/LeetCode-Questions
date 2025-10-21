#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int l = 0;
        int r = 0;
        while(l < s.size() && r < g.size())
        {
            if(s[l] >= g[r])
            {
                r++;
            }
            l++;
        }
        return r;
        
    }
};
int main()
{
    Solution s;
    vector<int> g = {7, 8, 9, 10};// r = 1 g.size() = 3
    vector<int> st = {5, 6, 7, 8};// l = 3 s.size() = 3
    cout<< s.findContentChildren(g, st);
    cout<<endl;

    return 0;
}