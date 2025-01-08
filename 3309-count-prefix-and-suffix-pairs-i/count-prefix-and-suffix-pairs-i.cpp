class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                int n1 = words[i].size(), n2 = words[j].size();
                if (n1 > n2) continue;
                int k;
                for (k = 0; k < n1; k++) {
                    if (words[i][k] != words[j][k]) {
                        break;
                    }
                }
                if (k < n1) continue;
                for (k = 0; k < n1; k++) {
                    if (words[i][k] != words[j][n2 - n1 + k]) {
                        break;
                    }
                }
                if (k == n1) count++;
            }
        }
        return count;
    }
};
