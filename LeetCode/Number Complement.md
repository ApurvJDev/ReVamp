# Beginner Solution

### The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

### For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

### Example 1:
### Input: num = 5
### Output: 2
### Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
### Example 2:
### Input: num = 1
### Output: 0
### Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

# Approach
1) Convert num to binary string
2) Take the complement of the binary string
3) Conver the binary string to int

0 ms runtime!!

# Code
```cpp []
class Solution {
public:
    int findComplement(int num) {
        bitset<32> binarySet(num);
        string s = binarySet.to_string();
        
        int startIndex = 0;
        for(int i = 0; i < 32; i++) {
            if(s[i] == '1') {
                startIndex = i;
                break;
            }
        }
        int length = 32 - startIndex + 1;
        string binary = s.substr(startIndex, length);
        
        
        for(int i = 0; i < length; i++) {
            if(binary[i] == '1') {
                binary[i] = '0';
            } else {
                binary[i] = '1';
            }
        }
        
        bitset<32> bits(binary);
        int complement = bits.to_ulong();

        return complement;
    }
};
```
