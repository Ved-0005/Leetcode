class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxVal=INT_MIN,prefProd=1,suffProd=1;
        for(int i=0;i<n;i++){
            if(prefProd==0) prefProd=1;
            if(suffProd==0) suffProd=1;
            prefProd*=nums[i];
            suffProd*=nums[n-i-1];
            maxVal=max(maxVal,max(prefProd,suffProd));
        }
        return maxVal;
    }
};