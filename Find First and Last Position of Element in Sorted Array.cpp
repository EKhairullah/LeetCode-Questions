#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
 
        int n = nums.size();
        int i = 0;
        
        int flag = false;
        while(i <= n -1)
        {
            if(nums[i] == target)
            {
                if(result[0] == -1) result[0] = i;
                flag = true;
            }
            result[1] = i;
            if(flag == false)
            {
                result.push_back(i);
            }
            i++;
        }
        
        return result;
    }
};
int main()
{
    Solution s;
    vector <int> nums = {1};
    int target = 1;

    vector <int> result = s.searchRange(nums, target);
    
    for(auto &a: result) cout<<a <<" ";
    cout<<endl;

    return 0;
}