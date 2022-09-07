// i

// int findCeil(Node *root, int input)
// {
//     if (root == NULL)
//         return -1;
//     int sum = -1;

//     while (root)
//     {
//         if (root->data == input)
//         {
//             sum = root->data;
//             return sum;
//         }

//         if (input > root->data)
//         {
//             root = root->right;
//         }
//         else
//         {
//             sum = root->data;
//             root = root->left;
//         }
//     }
//     return sum;

//     // Your code here
// }