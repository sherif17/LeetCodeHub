class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        map<int,int>mp;
        vector<int>res;
        for(auto it: changed){
            mp[it]++;
        }

        for(int i=0;i<changed.size();i++){
            if(changed[i]==0 and mp[0]<=1) continue;
            if(mp[changed[i]]&&mp[2*changed[i]]){
                res.push_back(changed[i]);
                mp[changed[i]]--;
                mp[2*changed[i]]--;
            }
            
 
        }
        if(res.size()!=ceil(changed.size()/2.0)) return {};
        return res;
        
    }
};