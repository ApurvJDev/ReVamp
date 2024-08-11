 int main() {
-     string s = "racecar";
-     map<char, int> sMap;
     
-     for(char ch : s) {
         sMap[ch]++;
     }
     
 -     for(const auto& pair : sMap) {
         cout << pair.first << ":" << pair.second << '\n';
     }
-     return 0;
 }

 ![image](https://github.com/user-attachments/assets/b6990433-082b-4028-bbbf-5169b79639b4)

