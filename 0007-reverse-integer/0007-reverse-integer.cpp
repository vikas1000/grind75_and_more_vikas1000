class Solution {
public:
    int reverse(int x) {
        int revnum = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && lastDigit > 7))
                return 0;

            if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && lastDigit < -8))
                return 0;

            revnum = revnum * 10 + lastDigit;
            x /= 10;
        }

        return revnum;
    }
};