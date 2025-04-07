#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int RemoveElement(vector<int> &array,int target)
    {
        if(array.size()==0) return 0;
        int k = 0;
        for(int i =0;i<array.size();i++)
        {
            if(array[i]!=target)
            {
                array[k]=array[i];
                k++;
            }
            
        }
        return k;
    }
};
int main()
{
    int Number;
    cin>>Number;
    int input;
    int targ;
    cout<<"enter your target: ";
    cin>>targ;
    vector <int> arr;
    for(int i =0;i<Number;i++)
    {
        cin>>input;
        arr.push_back(input);

    }
    cout<<"the size of array is: "<<arr.size()<<endl;
    Solution s;
    int k =s.RemoveElement(arr,targ);
    cout<<k;
}


// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
// Note that the five elements can be returned in any order.
// It does not matter what you leave beyond the returned k (hence they are underscores).

 