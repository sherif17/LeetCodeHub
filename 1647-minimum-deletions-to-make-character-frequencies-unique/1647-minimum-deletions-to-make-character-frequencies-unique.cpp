class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        vector<int>freq;
       // int freq=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            freq.push_back(it->second);
        }
        sort(freq.rbegin(),freq.rend());
        int ans=0;
        for(int i=1;i<freq.size();i++){
            if(freq[i]>=freq[i-1]){
                ans+=freq[i]-freq[i-1]+1;
                freq[i]=freq[i-1]-1;
            }
            if(freq[i]==0){
                freq.erase(freq.begin()+i);
                i--;
            }
        }
        return ans;
    }
};