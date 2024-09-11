# Intuition
Compare the bits and the one's that are not equal will be the number of flips required.

To determine how many bits are needed to represent a decimal number in binary, you can use the following formula: $$  n = \lceil \log_2 N \rceil $$


Hence, for $10^9$ 30 bits will be required

# Approach
<!-- Describe your approach to solving the problem. -->
1. Find the bigger number
2. Convert start and goal to binary
3. Find the most significant bit
4. Compare from 0 till the significant bit
5. When bits not equal increment flip count

# Code
```cpp []
class Solution {
public:
    int minBitFlips(int start, int goal) {
// find out which one is bigger
        long long maxNum = max(start, goal);
        
// convert to binary
        bitset<30> binS(start), binG(goal), binM(maxNum);

// find most significant bit of the bigger number
        int i = 30;
        for(i; i >= 0; i--) if(binM[i]) break;

// compare the bits from 0 till the most significant bit
        int flips = 0;
        for(int j = 0; j <= i; j++) {
            if(binS[j] != binG[j]) flips += 1;  
        }
        
        return flips;
    }
};
```
