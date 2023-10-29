#include <iostream>
#include <map>
#include <queue>
using namespace std;
class Node {
public:
 Node* left;
 Node* right;
 int data;
 Node(int data) : data(data), left(nullptr), right(nullptr) {}
};
class Solution {
private:
 class Pair {
 public:
 Node* node;
 int dist;
 Pair(Node* node, int dist) : node(node), dist(dist) {}
 };
public:
 static void topView(Node* root) {
 if (root == nullptr)
 return;
 map<int, int> mp;
 queue<Pair> q;
 q.push(Pair(root, 0));
 while (!q.empty()) {
 Pair pair = q.front();
 q.pop();
 Node* node = pair.node;
 int dist = pair.dist;
 if (mp.find(dist) == mp.end()) {
 mp[dist] = node->data;
 }
 if (node->left != nullptr) {
 q.push(Pair(node->left, dist - 1));
 }
 if (node->right != nullptr) {
 q.push(Pair(node->right, dist + 1));
 }
 }
 for (const auto& ent : mp) {
 cout << ent.second << " ";
 }
 }
 static Node* insert(Node* root, int data) {
 if (root == nullptr) {
 return new Node(data);
 } else {
 Node* cur;
 if (data <= root->data) {
 cur = insert(root->left, data);
 root->left = cur;
 } else {
 cur = insert(root->right, data);
 root->right = cur;
 }
 return root;
 }
 }
};
int main() {
 int t;
 cin >> t;
 Node* root = nullptr;
 while (t-- > 0) {
 int data;
 cin >> data;
 root = Solution::insert(root, data);
 }
 Solution::topView(root);
 return 0;
}