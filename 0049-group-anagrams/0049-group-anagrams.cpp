class Solution {
public:

    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp2;
        vector<vector<string>>vec;
        string temp;
  
        
        for(int i=0;i<strs.size();i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp2[strs[i]].push_back(temp);
        }
        
        for(auto itt= mp2.begin();itt!=mp2.end();itt++) 
                vec.push_back(itt->second);
        
        
        
        
     return vec;   
    }
};