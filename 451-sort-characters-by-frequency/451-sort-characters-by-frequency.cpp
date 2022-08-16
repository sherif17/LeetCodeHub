class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        multimap<int,char,greater<int>>mmp;
        string res="";
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it : mp){
            mmp.insert(make_pair(it.second,it.first));
        }
        for(auto it : mmp){
            int x=it.first;
            while(x--){
                res+=it.second;
            }
        }
        return res;

        
    }
};