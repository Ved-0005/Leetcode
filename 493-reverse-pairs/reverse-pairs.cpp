class Solution {
public:
void merge(vector<int>& nums,int st,int mid,int end,int &count){
        // extra function jo hume add krna h to get count of rev. pairs 
        vector<int>temp(end-st+1);
        int idx=0,left=st,right=mid+1;
        int ptr=mid+1;
        for(int i=left;i<=mid;i++){
            while(ptr<=end&& (long long)nums[i]>(long long)2*nums[ptr]) ptr++;
            count+=(ptr-(mid+1));
        }
    while(left<=mid&&right<=end){
        if(nums[left]<=nums[right]){
            temp[idx]=nums[left];
            idx++;left++;
        }
        else{
            temp[idx]=nums[right];
            idx++;right++;
        }
    }
    while(left<=mid){
            temp[idx]=nums[left];
            idx++;left++;
    }
    while(right<=end){
            temp[idx]=nums[right];
            idx++;right++;
    }
    for(int i=0;i<temp.size();i++){
        nums[st+i]=temp[i];
    }
}
void mergeSort(vector<int>&nums,int st,int end,int &count){
    if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(nums,st,mid,count);
        mergeSort(nums,mid+1,end,count);
        merge(nums,st,mid,end,count);
    }
}
    int reversePairs(vector<int>& nums) {
        int count=0;
        mergeSort(nums,0,nums.size()-1,count);
        return count;
    }
};