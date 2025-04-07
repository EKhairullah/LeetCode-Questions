# include <iostream>
# include <vector>
using namespace std;
class Sulotion{
    public:
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();
        int k = 0;
        for(int i =0;i<n-1;i++)// this loop for sorting the array
        {
            for(int j =1;j<=n;j++)
            {
                int temp =nums[i];
                nums[i]=nums[j];
                nums[j]= temp;
            }
        } 
        for(int i =0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
};
int main()
{
    int numbers;
    cin>>numbers;
    vector<int> array;
    for(int i =0;i<numbers;i++)
    {
        cin>>array[i];
    }
    cout<<"you Entered this Numbers: ";
    for(int i =0;i<numbers;i++)
    {
        cout<<array[i]<<" ";
    }
    Sulotion s1;
    s1.removeDuplicates(array);
    return 0;
}