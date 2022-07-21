class Solution {
public:
    
    bool helper(string s, string word){
        
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==word[k])k++;
            if(k==word.size())
                return true;
            
        }
        return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        int ans=0;
        
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        for(auto it: mp){
            
            if(helper(s,it.first))
                ans+=it.second;
        }
        return ans;
    }
};