#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxA = 0;
        while(left < right)
        {
            int h = min(height[left], height[right]);
            maxA = max(maxA, h * (right - left));

            if(height[left] < height[right])
            {
                left++;
            }
            else right--;
        }
        return maxA;

    }
};

int main()
{
    Solution a;
    vector<int> b = {8,7,2,1};
    cout<<a.maxArea(b);
    cout<<endl;
    return  0;
}