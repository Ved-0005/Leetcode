class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            else{
                int st=i+1,end=n-1;
                while(st<end){
                    int sum=nums[st]+nums[end];
                    if(sum== -nums[i]){
                        vector<int>temp={nums[i],nums[st],nums[end]};
                        ans.push_back(temp);
                        st++;
                        end--;
                    while(st<end&&nums[st]==nums[st-1]) st++;
                    while(st<end&&nums[end]==nums[end+1]) end--;
                    }
                    else if(sum>-nums[i]) end--;
                    else st++;
                }
            }
        }
        return ans;
    }
};