// Time:  O(n)
// Space: O(1)

// in-place solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                ++digits[i];
                return digits;
            }
        }
        digits[0] = 1;
        digits.emplace_back(0);
        return digits;
    }
};

// Time:  O(n)
// Space: O(n)
class Solution2 {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits.rbegin(), digits.rend());
        int carry = 1;
        for (auto& num : result) {
            num += carry;
            carry = num / 10;
            num %= 10;
        }
        if (carry == 1) {
            result.emplace_back(carry);
        }
        reverse(result.begin(), result.end());
        return result;  
    }
};
