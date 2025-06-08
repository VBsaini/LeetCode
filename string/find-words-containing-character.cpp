class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans = {};
        int j = 0;
        for(auto s: words){
            if(count(s.begin(), s.end(), x)){
                ans.push_back(j);
            }
            j++;
        }
        return ans;
    }
};