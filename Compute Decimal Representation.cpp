#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string number = to_string(n);
        vector<int> result;
        for(int i = 0; i < number.size();i++)
        {
            if(number[i] != '0')
            {
                int digit = number[i] - '0';
                int place = pow(10, number.size()-i - 1);
                result.push_back(digit * place);
                
            }
        }
      
        return result;
    }
};
int main()
{
    Solution s;
    int number = 537;
    vector<int> result = s.decimalRepresentation(number);
    for(auto &a: result) cout<< a<< " ";
    cout<<endl;
    return 0;
}