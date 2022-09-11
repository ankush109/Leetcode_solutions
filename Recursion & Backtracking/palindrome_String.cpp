#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

class Solution
{
public:
    bool ispal(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void findpal(int ind, string s, vector<vector<string>> &ans, vector<string> &ds)
    {
        if (ind == s.length())
        {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < s.length(); i++)
        {
            if (ispal(s, ind, i))
            {
                ds.push_back(s.substr(ind, i - ind + 1));
                cout << ind << "->" << i - ind + 1 << endl;
                cout << s.substr(ind, i - ind + 1) << endl;
                findpal(i + 1, s, ans, ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> ds;
        findpal(0, s, ans, ds);
        return ans;
    }
};
int main()
{
    Solution s;
    string str = "aab";
    vector<vector<string>> ans = s.partition(str);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}