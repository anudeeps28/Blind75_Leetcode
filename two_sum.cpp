#include <iostream>
using namespace std;
#include <vector>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> ret;
        int size = nums.size();

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }

};


int main()
{
    vector<int> A[] = {1,2,3,4};
    int l = 4;
    Solution s;

    s.twoSum(A,l);
    cout << "this program is running fine!";
    return 0;
}