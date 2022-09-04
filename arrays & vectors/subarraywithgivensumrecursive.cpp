// bool check(int arr[], int ind, int n, long long s, vector<int> &ans)
// {
//     if (s == 0)
//     {
//         return true;
//     }
//     if (s < 0)
//     {
//         return false;
//     }
//     if (ind >= n)
//         return false;
//     ans.push_back(ind);
//     if (check(arr, ind + 1, n, s - arr[ind], ans) == false)
//     {
//         ans.pop_back();
//         return false;
//     }
//     return true;
// }

// public:
// // Function to find a continuous sub-array which adds up to a given number.
// vector<int> subarraySum(int arr[], int n, long long s)
// {
//     // Your code here
//     vector<int> ans;
//     vector<int> p;
//     bool k = false;
//     // Your code here
//     for (int i = 0; i < n; i++)
//     {
//         k = check(arr, i, n, s, ans);
//         if (k == true)
//             break;
//     }
//     if (k == false)
//         return {-1};
//     p.push_back(ans[0] + 1);
//     p.push_back(ans[ans.size() - 1] + 1);
//     return p;
// }