class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (n > 1) {
            if (n%2)
                break;
            n /= 2;
        }   
        return n <= 0 || n > 1 ? false : true;
    }
};
