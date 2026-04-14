class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        for(int i=0;i<intervals.size();i++){
            pq.push(intervals[i]);
        }
        while(!pq.empty()){
            if(pq.size()==1){
                ans.push_back(pq.top());
                break;
            }
            vector<int>ele1=pq.top();
            pq.pop();
            vector<int>ele2=pq.top();
            pq.pop();
            if((ele1[1]>=ele2[0] && ele1[1]<=ele2[1])||(ele1[1]>ele2[0] && ele1[1]>ele2[1])){
                int val=max(ele1[1],ele2[1]);
                vector<int>temp={ele1[0],val};
                pq.push(temp);
            }
            else{
                ans.push_back(ele1);
                pq.push(ele2);
            }
        }
        return ans;
    }
};