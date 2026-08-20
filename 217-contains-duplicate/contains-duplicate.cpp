class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]==temp[i+1]) return true;
        }
        return false;
    }
};