#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size() -1;
        int closest = nums[0] + nums[1] + nums[2];


        for(int i = 0; i < n - 1; i++)
        {
            int low = i , high = n;
            
            while (low < high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                if(sum == target) {
                    
                    return sum;
                }
                if(abs(sum - target) < abs(closest - target)) closest = sum;

                else if(sum < target) ++low;
                else high--;
            }
            
        }
        return closest;
        
    }
};

int main()
{
    vector <int> nums = {-100,-98,-2,-1};
    int target = -2;
    Solution s;
    cout<<"Nearest Number is: "<<s.threeSumClosest(nums,target);
    cout<<endl;
    return 0;
}