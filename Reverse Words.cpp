class Solution {
  public:
    string reverseWords(string &s) {
        vector<string> words;
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '.') {
                if(temp != "") {
                    words.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
        if(temp != "") {
            words.push_back(temp);
        }
        string res = "";
        for(int i = words.size() - 1; i >= 0; i--) {
            res += words[i];
            if(i != 0) {
                res += ".";
            }
        }

        return res;
    }
};
