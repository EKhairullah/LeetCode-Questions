#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int result = -1;
        int i = 0,n = nums.size();
        while(i <= n -1)
        {
            if(nums[i] == target) {
                result = i;
                break;

            }
            i++;
            
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 3; 
    
    cout<<s.search(nums, target)<<endl;
    return 0;
}