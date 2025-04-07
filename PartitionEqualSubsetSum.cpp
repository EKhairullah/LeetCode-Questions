
#include <iostream>
#include <stdio.h>
#include <vector>
#include <numeric>
using namespace std;
class  sulotion
{
public:
    bool canPartition(vector<int>&arr){
        int total = accumulate(arr.begin(),arr.end(),0);
        if(total %2 !=0) return false;
        int sum = total/2;
        int n = arr.size();
        vector<bool> prev(sum + 1,false) , curr(sum+1,false);
        prev[0]=true;
        for(int i = 1;i<=n;i++)
        {
            curr[0]= true;
            for(int j = 1;j<=sum;j++){
                if(j<arr[i-1]) curr[j]= prev[j];
                else curr[j]=prev[j]|| prev[j-arr[i-1]];
            }
            prev = curr;
        }
        return prev[sum];
    }
    

};

int main()
{
    int Number;
    cin>>Number;
    int *array = new int[Number];
    for(int i =0;i<Number;i++)
    {
        cin>>array[i];

    }
    sulotion s1;
    vector <int> arr(array,array+Number);
    bool result = s1.canPartition(arr);
    cout<<(result ? "yes,can be partition":"No,can not be partition")<<endl;
    return 0;

}