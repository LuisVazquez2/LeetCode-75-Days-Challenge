class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> letters;
        unordered_set<char> ls;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(letters.find(s[i]) == letters.end()){
                if(ls.find(t[i]) != ls.end()) return false;
                letters[s[i]] = t[i];
                ls.insert(t[i]);
            }
            else if(letters[s[i]] != t[i]) return false;
        }
        return true;
    }
};