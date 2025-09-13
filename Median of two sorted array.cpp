#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        result.clear();
        result.insert(result.end(), nums1.begin(), nums1.end());
        result.insert(result.end(), nums2.begin(), nums2.end());
        if(result.size()<= 1) return result[0];
        return  double(quickSort(result))/2;
       
    }

    

    int quickSort(vector<int> &result)
    {
        if(result.size() <= 1) return 1;
        int pivot = result.back();
        vector<int> left, right;
        int i = -1;
        for(int j = 0; j < result.size() - 1; j++)
        {
            if(result[j] <= pivot)
            {
                left.push_back(result[j]);
            }
            else right.push_back(result[j]);
        }


        quickSort(left);
        quickSort(right);

        result.clear();
        result.insert(result.end(),left.begin(), left.end());
        result.push_back(pivot);
        result.insert(result.end(), right.begin(), right.end());
        
        int a = result.size() -1;
        int b = result.size();

        
        return result[a/2] + result[b/2];
    }

    
};

