#include <iostream>

template<class T>
struct Node {
    Node* left;
    Node* right;
    T info;
};

template<class T>
void InitNode(Node<T>* node);

template<class T>
void InitBranch(Node<T>* branch);

int main() {

    // Make a node that can store an int
    Node<int>* myNode = new Node<int>;
    //InitNode(myNode);
    InitBranch(myNode->left);
    InitBranch(myNode->right);

    return 0;
}

template<class T>
void InitBranch(Node<T>* branch) {
    branch = nullptr;
}

template<class T>
void InitNode(Node<T>* node) {
    node->left = nullptr;
    node->right = nullptr;
    node->info = 0;
}