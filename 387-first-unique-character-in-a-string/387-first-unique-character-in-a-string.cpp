class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        vector<char>vec;
        int res=-1;
        for(int i=0;i<s.size();i++){
          mp[s[i]]++;  
          vec.push_back(s[i]);  
        }
        
        for(int i=0;i<vec.size();i++){
            if(mp[vec[i]] == 1){
                res=i;
                break;
            }
    
        }
        return res;
    }
};