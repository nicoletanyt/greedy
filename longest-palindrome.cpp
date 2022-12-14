class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int numContentKids = 0;
        int i, j = 0;
        while (j < s.size() && i < g.size()){
            if (s[j] >= g[i]){
                numContentKids++; 
                i++;
                j++;
            } else if (g[i] > s[j]){
                j++;
            }
        }
        
        return numContentKids;
    }
};
