// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        int output;
        long long lo = 0, hi = 1e9, mid;
        while (lo <= hi) {
            mid = (hi + lo + 1) / 2;
            if (mid * mid > x) {
                output = mid;
                hi = mid - 1;
            } else if (mid * mid == x) {
                return mid;
            } else lo = mid + 1;
        }
        return output - 1;
    }
};