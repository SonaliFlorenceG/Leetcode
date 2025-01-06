class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> shiftArray(s.size() + 1, 0);
        for (int i = 0; i < shifts.size(); ++i) {
            int start = shifts[i][0];
            int end = shifts[i][1];
            int direction = shifts[i][2];

            if (direction == 1) {
                shiftArray[start] += 1;
                shiftArray[end + 1] -= 1;
            } else {
                shiftArray[start] -= 1;
                shiftArray[end + 1] += 1;
            }
        }

        int currentShift = 0;
        for (int i = 0; i < s.size(); ++i) {
            currentShift += shiftArray[i];
            while (currentShift < 0) {
                currentShift += 26;
            }
            currentShift %= 26;
            s[i] = 'a' + (s[i] - 'a' + currentShift) % 26;
        }

        return s;
    }
};
