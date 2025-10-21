#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        vector<int>res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeros++;
            }
            else if (nums[i] == 1)
                ones++;
            else
                twos++;
        }
        for(int i = 0; i < zeros;i++)
        {
            res.push_back(0);
        }
        for(int i = 0; i < ones; i++)
        {
           res.push_back(1);
            
        }
        for(int i = 0; i < twos; i++)
        {
            res.push_back(2);
        }
        for(auto a: nums) nums.pop_back();

        for(int i = 0; i < res.size(); i++) nums.push_back(res[i]);
    }
    // i saw the best solution of this question from leetCode profesionals. below is the solution
    /*void sortColors(vector<int>& nums)
    {
        int red = 0;
        int white = 0;
        int blue = nums.size() -1;
        while(white <= blue)
        {
            if(nums[white] == 0)
            {
                swap(nums[white], nums[red]);
                red++;
                white++;
            }
            else if(nums[white] == 1)
            {
                white++;
            }
            else 
            {
                swap(nums[blue], nums[white]);
                blue--;
            }
        }
    }*/
    };
int main()
{
    vector<int> arr = {1, 0, 2, 0, 2, 1};
    Solution s;
    s.sortColors(arr);
    for (auto a : arr)
        cout << a << " ";
    cout << endl;
    return 0;
}