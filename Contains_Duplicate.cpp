#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mymap;
        
        for(auto a: nums)
        {
            mymap[a]++;
            if(mymap[a] >= 2) return true;

        }
        return false;
    }

};
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 4};
    Solution s;
    s.containsDuplicate(arr);
    cout<<(s.containsDuplicate(arr)?"True" : "false")<<endl;
    return 0;
}