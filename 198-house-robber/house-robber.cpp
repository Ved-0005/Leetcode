class Solution {
public:
int maxAmount(vector<int>& nums,int idx,vector<int>& dp){
    if(idx>=nums.size()) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int skip=maxAmount(nums,idx+1,dp);
    int get=nums[idx]+maxAmount(nums,idx+2,dp);
    return dp[idx]=max(get,skip);
}
    int rob(vector<int>& nums) {
        vector<int>dp(101,-1);
        return maxAmount(nums,0,dp);
        
    }
};