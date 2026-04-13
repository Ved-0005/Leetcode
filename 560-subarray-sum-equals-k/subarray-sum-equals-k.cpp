class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefSum(n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefSum[i]=sum;
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp.find(prefSum[i]-k)!=mp.end()){
                count+=mp[prefSum[i]-k];
                mp[prefSum[i]]++;
            }
           else mp[prefSum[i]]++;
        }
        return count;
    }
};