class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;

        return sign * (a / b);
    }
};
