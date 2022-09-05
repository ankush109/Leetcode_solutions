#include <vector>
#include <iostream>
#include <queue>
#include "bits/stdc++.h"
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    void markparents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_track)
    {
        queue<TreeNode *> q;

        q.push(root);
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            if (curr->left)
            {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right)
            {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            } 
        }
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        unordered_map<TreeNode *, TreeNode *> parent_track;
        markparents(root, parent_track);
        unordered_map<TreeNode *, bool> visited;

        queue<TreeNode *> queue;
        queue.push(target);
        visited[target] = true;
        int dist = 0;

        while (!queue.empty())
        {
            if (dist == k)
                break;
            dist++;

            int size = queue.size();
            for (int i = 0; i < size; i++)
            {

                TreeNode *curr = queue.front();
                queue.pop();
                if (curr->left && visited[curr->left] != true)
                {
                    queue.push(curr->left);
                    visited[curr->left] = true;
                }
                if (curr->right && visited[curr->right] != true)
                {
                    queue.push(curr->right);
                    visited[curr->right] = true;
                }
                if (parent_track[curr] && visited[parent_track[curr]] != true)
                {
                    queue.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }
        while (!queue.empty())
        {
            TreeNode *c = queue.front();
            queue.pop();
            ans.push_back(c->val);
        }
        return ans;
    }
};