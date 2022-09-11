#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto it : nums)
        {
            if (it % 2 == 0)
            {
                mp[it]++;
                cout << mp[it] << endl;
            }
        }
        int max_ele = -1;
        int c = 0;
        for (auto it : mp)
        {
            if (it.second > c)
            {

                c = it.second;
                max_ele = it.first;
            }
        }
        return max_ele;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 5};
    cout << s.mostFrequentEven(a);

    return 0;
}