#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int i = n - 2;
        while(i >= 0 && nums[i] >= nums[i + 1]) i--;
        if( i >= 0)
        {
            int j = i +1;
            while(nums[i] >= nums[j]) j--;
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
        
        for(auto &a: nums) cout<< a<< " ";
        cout<<endl;
    }
};

int main()
{
    Solution s;
    vector<int> numbers = {1, 3, 2};
    s.nextPermutation(numbers);

    return 0;
}