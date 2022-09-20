
string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    int l = 0;
    int c = 0;
    int r = 0;
    while (l < n && r < m)
    {
        if (a1[l] < a2[r])
        {
            l++;
        }
        else if (a1[l] == a2[r])
        {
            l++;
            c++;
            r++;
        }
        else
        {
            r++;
        }
    }
    if (c == m)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
