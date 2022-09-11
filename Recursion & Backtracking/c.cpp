#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        map<int, int> mp;
        vector<int> a;
        int c = 0;
        auto ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                a.push_back(nums[i]);
            }
        }
        if (a.size() == 0)
            return -1;
        for (int i = 0; i < a.size(); i++)
        {

            int count = 0;
            for (int j = i + 1; j < a.size(); j++)
            {

                if (a[i] == a[j])
                {

                    count++;

                    mp.insert({count, a[i]});
                    c = max(c, count);
                }
            }

            ans = mp.find(c)->second;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 5};
    cout << s.mostFrequentEven(a);
    return 0;
}