class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int c=0;
        if(strs.size()==0) return "";
        sort(strs.begin(),strs.end());
        string a =strs[0];
        string ans;
        string b = strs[strs.size()-1];
        for(int i=0;i<a.size();i++)
        {
          if(a[i]==b[i])
          {
              ans+=a[i];
          }  
          else{
              break;
          }
        }
        return ans;
    }
};