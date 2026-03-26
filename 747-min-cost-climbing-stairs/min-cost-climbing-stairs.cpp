class Solution {
public:
int minCost(vector<int>& cost,int n,int idx,vector<int>& dp){
    if(idx>n) return INT_MAX;
    if(idx==n) return 0;
    int one_step=INT_MAX,two_step=INT_MAX;
    if(dp[idx]!=-1) return dp[idx];
     one_step=cost[idx]+minCost(cost,n,idx+1,dp);
    if(idx+2<=n)
     two_step=cost[idx]+minCost(cost,n,idx+2,dp);
    return dp[idx]= min(one_step,two_step);
}

    int minCostClimbingStairs(vector<int>& cost) {
            int n=cost.size();
            vector<int>dp(n+1,-1);
            minCost(cost,n,0,dp);
            minCost(cost,n,1,dp);
            return min(dp[0],dp[1]);
    }
};