class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        vector<int>vec(nums.size(),INT_MIN);
        vec[0]=nums[0];
        priority_queue<pair<int,int>>pq;
        pq.push({vec[0],0});
        
        for(int i=1;i<nums.size();i++){
             while(i-pq.top().second > k)
                pq.pop();
            
            vec[i] = max(vec[i], pq.top().first + nums[i]);
            pq.push({vec[i],i});
        }
        
        
return vec[nums.size()-1];

        
    }
};