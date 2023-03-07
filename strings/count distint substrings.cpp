#include <stdio.h>
#include <stdlib.h>
class Solution
{
    long long int f(string s,int k){
         vector<long long int>f(26,0);
  long long int start =0,count=0,d=0;
  for(int i=0;i<s.size();i++){
      if(f[s[i]-'a']==0) {d++;}
      f[s[i]-'a']++;
      while(d>k){
          f[s[start]-'a']--;
          if(f[s[start]-'a']==0) d--;
          start++;
      }
      if(d<=k){
          count=count+i-start+1;
      }
  }
  return count;
    }
    
  public:
    long long int substrCount (string s, int k) {
  return f(s,k)-f(s,k-1);
  }
  
    
};