#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        do
        {
            res.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        return res;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res = s.permuteUnique(arr);
    for(auto a: res)
    {
        cout<<"[";
        for(auto b: a) cout<< b<<" ";
        cout<<"]";
    }

    return 0;
}