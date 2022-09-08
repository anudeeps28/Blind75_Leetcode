#include <iostream>
// #include <stdio.h>

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


// this block is just for printing the elements of a vector
template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}


int main()
{
    vector<int> A = {1,2,3,4};
    int l = 4;
    Solution s;

    vector<int> y  = s.twoSum(A,l);
    cout << y << endl;
    // printf("%d", y);
    //print(a);
    cout << "this program is running fine!";
    return 0;
}