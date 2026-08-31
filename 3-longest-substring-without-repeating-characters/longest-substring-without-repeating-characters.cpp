class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,maxl=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()&& mp[s[j]]>=i){
                i=mp[s[j]]+1;
            }
            maxl=max(maxl,j-i+1);
            mp[s[j]]=j;
            j++;
        }
        return maxl;
    }
};