class Solution {
public:
int  ways(int n,int sum,vector<int>& dp){
    if(sum>n) return 0;
    if(sum==n) return 1;
    if(dp[sum]!=-1) return dp[sum];
    int one_step=ways(n,sum+1,dp);
    int two_step=ways(n,sum+2,dp);
    return dp[sum]=one_step+two_step;
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return ways(n,0,dp);
    }
};