class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        while(k>0){
            int top=pq.top();
            pq.pop();
            top*=-1;
            pq.push(top);
            k--;
        }
        int maxSum=0;
        while(!pq.empty()){
            maxSum+=pq.top();
            pq.pop();
        }
        return maxSum;
    }
};