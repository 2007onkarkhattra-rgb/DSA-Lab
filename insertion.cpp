#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
};

// Creates a node and connects it to its parent
Node* createNode(int value, Node* parentNode) {
    Node* n = new Node();
    n->data = value;
    n->left = nullptr;
    n->right = nullptr;
    n->parent = parentNode;
    return n;
}

int main() {
    // 1. Root has no parent (nullptr)
    Node* root = createNode(10, nullptr);

    // 2. Add children under 10 (root is their parent)
    root->left  = createNode(20, root);
    root->right = createNode(30, root);

    // 3. Add children under 20 (root->left is their parent)
    root->left->left  = createNode(40, root->left);
    root->left->right = createNode(50, root->left);

    // 4. Add child under 30 (root->right is its parent)
    root->right->left = createNode(60, root->right);

    // Test: check node 40
    Node* n40 = root->left->left;
    std::cout << "Node: " << n40->data << "\n";
    std::cout << "Parent: " << n40->parent->data << "\n";

    return 0;
}