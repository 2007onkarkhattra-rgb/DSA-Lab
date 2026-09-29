#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Recursively builds any binary tree from user input
Node* buildTree() {
    int val;
    std::cout << "Enter value (-1 for no node): ";
    std::cin >> val;

    // Base condition: -1 represents a NULL / absent child
    if (val == -1) {
        return nullptr;
    }

    Node* root = new Node(val);

    std::cout << "Enter left child of " << val << " -> ";
    root->left = buildTree();

    std::cout << "Enter right child of " << val << " -> ";
    root->right = buildTree();

    return root;
}

// Display tree (Inorder: Left, Root, Right)
void printInorder(Node* root) {
    if (root == nullptr) return;
    printInorder(root->left);
    std::cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    std::cout << "--- Binary Tree Construction ---\n";
    std::cout << "(Use -1 to indicate an empty/null child)\n\n";

    Node* root = buildTree();

    std::cout << "\nInorder Traversal: ";
    printInorder(root);
    std::cout << "\n";

    return 0;
}