#include <iostream>
#include <string>
#include <unordered_set>
int minimumNumber(int n, std::string password) {
 bool lowercase = false;
 bool uppercase = false;
 bool number = false;
 bool special = false;
 std::unordered_set<char> charSet { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-','+' };
 for (int i = 0; i < n; i++) {
 char c = password[i];
 if (c >= '0' && c <= '9') number = true;
 if (c >= 'a' && c <= 'z') lowercase = true;
 if (c >= 'A' && c <= 'Z') uppercase = true;
 if (charSet.find(c) != charSet.end()) special = true;
 }
 int neededChars = 0;
 neededChars += lowercase ? 0 : 1;
 neededChars += uppercase ? 0 : 1;
 neededChars += number ? 0 : 1;
 neededChars += special ? 0 : 1;
 return std::max(6 - n, neededChars);
}
int main() {
 int n;
 std::string password;
 std::cin >> n >> password;
 int answer = minimumNumber(n, password);
 std::cout << answer << std::endl;
 return 0;
}