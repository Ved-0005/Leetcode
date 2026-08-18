class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp(nums.size());
        int i=0,j=0,ans=-1;
        while(j<nums.size()){
            while(j-i+1<k) j++;
            if(j-i+1==k){
                unordered_set<int>st;
                for(int idx=i;idx<=j;idx++){
                    st.insert(nums[idx]);
                }
                for(auto x:st) mp[x]++;
                i++;
                j++;
            }
        }
        for(auto it:mp){
            if(it.second==1) ans=max(ans,it.first);
        }
        return ans;
    }
};