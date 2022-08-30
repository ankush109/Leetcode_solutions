// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     return 0;
// }
// //  * Definition for a binary tree node.
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// class Solution
// {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode *root)
//     {
//         // map<int, map<int, multiset<int>>> nodes; // value, vertical,level
//         // queue<pair<TreeNode *, pair<int, int>>> ans;
//         ans.push({root, {0, 0}});
//         while (!ans.empty())
//         {
//             auto p = ans.front();
//             ans.pop();
//             TreeNode *node = p.first;
//             int x = p.second.first;
//             int y = p.second.second;
//             // nodes[x][y].insert(node->val);
//             if (node->left)
//             {
//                 ans.push({node->left, {x - 1, y + 1}});
//             }
//             if (node->right)
//             {
//                 ans.push({node->right, {x + 1, y + 1}});
//             }
//         }
//         vector<vector<int>> a;
//         // for (auto p : nodes)
//         {
//             vector<int> col;
//             for (auto q : p.second)
//             {
//                 col.insert(col.end(), q.second.begin(), q.second.end()); // 0 -> 0 ->1
//             }
//             a.push_back(col);
//         }
//         return a;
//     }
// };