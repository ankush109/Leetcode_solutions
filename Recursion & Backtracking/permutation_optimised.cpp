#include <vector>
#include <iostream>

using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    void findp(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {

            swap(nums[ind], nums[i]);

            findp(ind + 1, nums, ans, ds);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        findp(0, nums, ans);
        return ans;
    }
};