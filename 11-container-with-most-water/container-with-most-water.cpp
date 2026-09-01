class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxval=INT_MIN;
        while(i<j){
            int l=j-i;
            int b=min(height[j],height[i]);
            int area=l*b;
            maxval=max(maxval,area);
            if(height[j]>height[i]) i++;
            else j--;
        }
        return maxval;
    }
};