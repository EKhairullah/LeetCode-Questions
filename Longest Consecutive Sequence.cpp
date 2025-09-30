#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(auto num: s)
        {
            if(!s.count(num - 1))
            {
                int cur = num;
                int lenght = 1;
                while(s.count(num + 1))
                {
                    lenght++;
                    num++;
                }
                longest = max(lenght, num);
            }

        }
        return longest;
        
    }
};
int main()
{
    // vector<int> numbers  = {1, 1000, 12, 4,3, 2};
    vector<int> numbers = {1,2,3, 6,5, 4};
    Solution s;
    cout<<s.longestConsecutive(numbers)<<"\n";
    return 0;
}