class Solution {
public:
    double myPow(double x, int n) {
        long long a = n;
        // Step 1: Keep track if the original power was negative
        bool isNegative = (a < 0);
        if (isNegative) {
            a = -a; // Just make the exponent positive, leave x alone!
        }
        
        double s = 1.0;
        while (a > 0) {
            if (a & 1) {
                s *= x;
            }
            x *= x; 
            a >>= 1; 
        }
        
        // Step 2: Invert the final compiled answer at the end to maximize precision
        return isNegative ? (1.0 / s) : s;
    }
};


