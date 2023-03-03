class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size(), m = s.size(),j=0;
        for(int i=0;i<n;i++){
            if(j<m && t[i] == s[j]){
                j++;
            }
        }
        return j == m;
    }
};