#include <iostream>
#include <vector>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    vector<vector<string>> ret;

    bool check(int i, int j, vector<string> grid)
    {
        int n = grid.size();
        for (int row = i - 1; row >= 0; row--)
        {
            if (grid[row][j] == 'Q')
                return false;
        }
        int r = i - 1;
        int c = j - 1;
        while (r >= 0 && c >= 0)
        {
            if (grid[r][c] == 'Q')
                return false;
            r--;
            c--;
        }
        r = i - 1;
        c = j + 1;
        while (r >= 0 && c < n)
        {
            if (grid[r][c] == 'Q')
                return false;
            r--;
            c++;
        }
        return true;
    }
    void solve(int i, vector<string> &grid)
    {

        int n = grid.size();
        if (i == n)
            ret.push_back(grid);

        for (int j = 0; j < n; j++)
        {
            if (check(i, j, grid))
            {

                grid[i][j] = 'Q';

                solve(i + 1, grid);

                grid[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {

        if (n <= 0)
            return {{}};
        vector<string> grid(n, string(n, '.'));
        solve(0, grid);
        return ret;
    }
};