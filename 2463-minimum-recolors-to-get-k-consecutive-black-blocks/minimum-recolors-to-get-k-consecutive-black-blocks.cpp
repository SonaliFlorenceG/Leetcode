class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int min_operations = k;
        int current_white_count = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                current_white_count++;
            }
        }
        min_operations = current_white_count;
        for (int i = 1; i <= n - k; i++) {
            if (blocks[i - 1] == 'W') {
                current_white_count--;
            }
            if (blocks[i + k - 1] == 'W') {
                current_white_count++;
            }
            min_operations = min(min_operations, current_white_count);
        }
        
        return min_operations;
    }
};
