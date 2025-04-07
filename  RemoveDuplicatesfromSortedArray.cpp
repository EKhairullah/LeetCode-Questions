# include <iostream>
# include <vector>
using namespace std;
class Sulotion{
    public:
    int removeDuplicates(vector<int>& nums){
        int k = 1;
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[k]=nums[i];
                k++;
                break;
            }
        }
        
        return k;
    }
};
int main()
{
    int numbers;
    cin>>numbers;
    int input;
    vector<int> array;
    for(int i =0;i<numbers;i++)
    {
        cin>>input;
        array.push_back(input);
    }
    cout<<"you Entered this Numbers: ";
    for(int i =0;i<numbers;i++)
    {
        cout<<array[i]<<" ";
    }
    Sulotion s1;
    s1.removeDuplicates(array);
    cout<<s1.removeDuplicates(array);

    return 0;
}







// Input: nums = [0,0,1,1,1,2,2,3,3,4]