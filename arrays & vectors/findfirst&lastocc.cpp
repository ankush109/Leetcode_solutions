// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {
//         vector<int> ans(2, -1);
//         int n = nums.size();
//         int s = 0;
//         int e = n - 1;

//         while (s <= e)
//         {
//             int m = s + (e - s) / 2;

//             if (nums[m] < target)
//             {
//                 s = m + 1;
//             }
//             else if (nums[m] > target)
//             {
//                 e = m - 1;
//             }
//             else
//             {
//                 if (m == s || nums[m] != nums[m - 1])
//                 {
//                     ans[0] = m;
//                     break;
//                 }
//                 // 5 7 7 7 8 8 8 9 1
//                 else
//                 {
//                     e = m - 1;
//                     ans[0] = m - 1;
//                 }
//             }
//         }
//         s = 0;
//         e = n - 1;

//         while (s <= e)
//         {
//             m = s + (e - s) / 2;
//             //             if(nums[m]==target)
//             //             {
//             //                 ans[0]=m;

//             //             }
//             if (nums[m] < target)
//             {
//                 s = m + 1;
//             }
//             else if (nums[m] > target)
//             {
//                 e = m - 1;
//             }
//             else
//             {
//                 if (m == s || nums[m] != nums[m + 1])
//                 {
//                     ans[1] = m;
//                     break;
//                 }
//                 // 5 7 7 7 8 8 8 9 1
//                 else
//                 {
//                     s = m + 1;
//                     ans[1] = m + 1;
//                 }
//             }
//         }
//         return ans;
//     }
// }