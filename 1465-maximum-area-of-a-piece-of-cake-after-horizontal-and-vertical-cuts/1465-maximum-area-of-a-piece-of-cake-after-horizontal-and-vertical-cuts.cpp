class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);

        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int maxHorz=horizontalCuts[0],Maxver=verticalCuts[0];
        
        for(int i=0;i<horizontalCuts.size()-1;i++){
            maxHorz=max(maxHorz,(horizontalCuts[i+1]-horizontalCuts[i]));
        }
        for(int i=0;i<verticalCuts.size()-1;i++){
            Maxver=max(Maxver,(verticalCuts[i+1]-verticalCuts[i]));
        }
        
        return (1ll*maxHorz*Maxver)% 1000000007;
        
        
        
    }
};