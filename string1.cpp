#include <iostream>
#include <unordered_set>
#include <algorithm>
int main() {
 std::string line;
 std::getline(std::cin, line);
 std::transform(line.begin(), line.end(), line.begin(), [](char c) { return
std::tolower(c); });
 line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
 std::unordered_set<char> chars;
 for (char c : line) {
 chars.insert(c);
 }
 if (chars.size() != 26) {
 std::cout << "not ";
 }
 std::cout << "pangram" << std::endl;
 return 0;
}