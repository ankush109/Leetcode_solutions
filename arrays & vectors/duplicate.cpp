
vector<int> ans;
sort(arr, arr + n);
int c = 0;
int f = 0;
int s = 1;
while (f < n && s < n && f < s)
{
    if (arr[f] == arr[s])
    {
        c++;
        if (c == 1)
        {
            ans.push_back(arr[f]);
        }
        f++;
        s++;
    }
    else
    {
        c = 0;
        f++;
        s++;
    }
}
if (ans.size() == 0)
{
    ans.push_back(-1);
}
return ans;
