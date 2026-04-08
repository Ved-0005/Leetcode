class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int memb1=NULL;
        int count1=0;
        int memb2=NULL;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==memb1) count1++;
            else if(nums[i]==memb2) count2++;
            else if(count1==0){
                memb1=nums[i];
                count1=1;
            }
            else if(count2==0){
                memb2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
    int val1=0,val2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==memb1) val1++;
        else if(nums[i]==memb2) val2++;
    }
    if(val1>nums.size()/3) ans.push_back(memb1);
    if(val2>nums.size()/3) ans.push_back(memb2);
    return ans;
    }
};