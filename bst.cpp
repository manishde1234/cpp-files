#include <iostream>
#include<bits/stdc++.h>
class Node {
public:
 Node* left;
 Node* right;
 int data;
 Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BST {
public:
 static Node* insert(Node* root, int data) {
 if (root == nullptr) {
 return new Node(data);
 } 
 else {
 Node* current;
 if (data <= root->data) {
 current = insert(root->left, data);
 root->left = current;
 } 
 else {
 current = insert(root->right, data);
 root->right = current;
 }
 return root;
 }
 }
 static void preOrder(Node* root) {
 if (root == nullptr)
 return;
 std::cout << root->data << " ";
 preOrder(root->left);
 preOrder(root->right);
 }
};
int main() {
 int t;
std::cin >> t;
 Node* root = nullptr;
 while (t-- > 0) {
 int data;
 std::cin >> data;
 root = BST::insert(root, data);
 }
 BST::preOrder(root);
 return 0;
}