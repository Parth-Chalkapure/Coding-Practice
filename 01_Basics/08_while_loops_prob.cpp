/* Q. Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
A number ends with digit d if its last digit is d. */

class Solution {
    public:
    int whileLoop(int d) {
        int x = 0;
        int y = 0;
        while(x < 500) {
            y += d + x;
            x += 10;
        }
        return y;
    }
};