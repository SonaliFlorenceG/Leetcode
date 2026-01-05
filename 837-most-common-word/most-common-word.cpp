class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        
        for (char &c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }

        string word;
        int maxCount = 0;
        string result;


        for (int i = 0; i <= paragraph.size(); i++) {
            if (i < paragraph.size() && paragraph[i] != ' ') {
                word += paragraph[i];
            } else if (!word.empty()) {
                if (!bannedSet.count(word)) {
                    int count = ++freq[word];
                    if (count > maxCount) {
                        maxCount = count;
                        result = word;
                    }
                }
                word.clear();
            }
        }

        return result;
   
    }
};