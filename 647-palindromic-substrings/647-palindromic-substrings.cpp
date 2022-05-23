class Solution {
public:
    
//     bool checkPalindrome(string s){
//         string revevrsed =  s; 
//         reverse(s.begin(), s.end());
//         return reversed== s? true : false;    
//         // for(int i=0;i<s.size()/2;i++){
//         //     if(s[i]!=s[s.size()--i]){
//         //         return false;
//         //     }  
//         // }
//         // return true;
//     }
    
    int countSubstrings(string s) {
        
        int start , end ,count =0, n= s.size();
        
        for(int i=0;i<n;i++){
            
          start=i; end=i;
          while(start>=0 && end<n && s[start--]==s[end++])count++;
            
          start=i-1; end=i;
          while(start>=0 && end<n && s[start--]==s[end++])count++; 
            
            
        }
        return count;
    }
};