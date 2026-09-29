#include <iostream>

struct Node {
    int data;
    Node* left;er 10
    Node* right;
    Node* parent;

    Node(int val, Node* p = nullptr) {
        data = val;
        left = nullptr;
        right = nullptr;
        parent = p;
    }
};

int main() {
    Node* root = new Node(10);

    root->left = new Node(20, root);
    root->right = new Node(30, root);

    root->left->left = new Node(40, root->left);
    root->left->right = new Node(50, root->left);

    root->right->left = new Node(60, root->right);
    std::cout << "Node: " << root->left->left->data << "\n";
    std::cout << "Parent: " << root->left->left->parent->data << "\n";
    std::cout << "Grandparent: " << root->left->left->parent->parent->data << "\n";

    return 0;
}