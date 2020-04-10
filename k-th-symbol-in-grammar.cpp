// Time:  O(logn) = O(1) because n is 32-bit integer
// Space: O(1)

class Solution {
public:
    int kthGrammar(int N, int K) {
        return bitCount(K - 1) % 2;
    }
    
private:
    int bitCount(int n) {
        int count = 0;
        for (; n; n &= n - 1) {
            ++count;
        }
        return count;
    }
};
