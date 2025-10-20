#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i = 1; i <= nums.size() -1; i++)
        {
            int key = nums[i];
            int j = i -1;
            while(j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
        
    }
  
};
int main()
{
    vector<int> arr = {3, 3, 4, 1, 9, 2};
    Solution s;
    cout<< s.majorityElement(arr);
    cout<<endl;
    return 0;
}