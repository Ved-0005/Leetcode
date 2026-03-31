class Solution {
public:
int n;
int maxLoot(vector<int>& nums,int idx,vector<int>& dp,int size){
    if(idx>size) return 0;
    int skip=INT_MIN,take=INT_MIN;
    if(dp[idx]!=-1) return dp[idx];
     skip=maxLoot(nums,idx+1,dp,size);
    if(idx<=size) take=nums[idx]+maxLoot(nums,idx+2,dp,size);
    return dp[idx]=max(skip,take);
}
    int rob(vector<int>& nums) {
        n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        int way1=maxLoot(nums,0,dp1,n-2);
        int way2=maxLoot(nums,1,dp2,n-1);
        return max(way1,way2);
    }
};