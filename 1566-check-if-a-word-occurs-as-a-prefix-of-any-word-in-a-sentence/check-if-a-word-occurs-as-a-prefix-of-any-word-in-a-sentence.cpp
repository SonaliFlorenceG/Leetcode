class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.length();
        int searchWordLen = searchWord.length();
        int i = 0;
        int wordIndex = 1;
        while (i < n) {
            int start = i;
            while (i < n && sentence[i] != ' ') {
                i++;
            }
            string currentWord = sentence.substr(start, i - start);
            if (currentWord.find(searchWord) == 0) {
                return wordIndex;
            }
            i++;
            wordIndex++;
        }
        return -1;
    

    }
};