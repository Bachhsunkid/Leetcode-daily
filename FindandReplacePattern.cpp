class Solution {
public:
    string key(string& word) {
        char start = 'a';
        vector<char> map(26);
        string res;
        
        for(auto& c : word) {
            if(map[c - 'a'] == 0)
                map[c - 'a'] = start++;
            res.push_back(map[c - 'a']);
        }
        
        return res;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        string keyPattern = key(pattern);
        for(auto& word : words) {
            if(key(word) == keyPattern)
                res.push_back(word);
        }
        return res;
    }
};
