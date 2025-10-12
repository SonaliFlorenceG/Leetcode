class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> result;
        sort(potions.begin(), potions.end());
        int n = potions.size();

        for (int i = 0; i < spells.size(); i++) {
            long long spell = spells[i];
            long long minPotion = (success + spell - 1) / spell;

            int low = 0;
            int high = n - 1;
            int index = n; 
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (potions[mid] >= minPotion) {
                    index = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            int count = n - index; // number of successful potions
            result.push_back(count);
        }

        return result;
    }
};
