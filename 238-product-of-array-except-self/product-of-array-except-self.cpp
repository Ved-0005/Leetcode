class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int prod=1,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count++;
            else prod*=nums[i];
        }
        if(count>1) return ans;
        else if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) ans[i]=prod;
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans[i]=prod/nums[i];
            }
        }
        return ans;
    }
};