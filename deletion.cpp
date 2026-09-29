#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
};

// Helper to make a node
Node* createNode(int value, Node* parentNode) {
    Node* n = new Node();
    n->data = value;
    n->left = nullptr;
    n->right = nullptr;
    n->parent = parentNode;
    return n;
}

int main() {
    // 1. Build the tree
    Node* root = createNode(10, nullptr);
    root->left = createNode(20, root);
    root->right = createNode(30, root);

    root->left->left = createNode(40, root->left);
    root->left->right = createNode(50, root->left);

    // 60 is the last node (under 30)
    root->right->left = createNode(60, root->right);

    std::cout << "Last node before delete: " << root->right->left->data << "\n";

    // 2. Delete the last node (60)
    delete root->right->left;         // Free the memory
    root->right->left = nullptr;      // Disconnect from parent 30

    // 3. Verify it is gone
    if (root->right->left == nullptr) {
        std::cout << "Node 60 has been deleted successfully!\n";
    }

    return 0;
}