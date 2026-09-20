class Solution {

public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long long c = 0;

        for (int i = 31; i >= 0; i--) {
            if ((a >> i) >= b) {
                a -= (b << i);
                c += (1LL << i);
            }
        }

        return sign == -1 ? -c : c;
    }
};