/********************************************************
You may assume that the following Node class has already
been defined for you previously:


You may also assume that iostream has already been included.

Implement the function "int count(Node *n)" below to return
an integer representing the number of nodes in the subtree
of Node n (including Node n itself).

*********************************************************/

#include <iostream>

class Node {
public:
  Node *left, *right;
  Node() { left = right = nullptr; }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};

int countWithoutStatic(Node *n, int total) {
  int totalNodes = total;
  if (n == nullptr) {
    // exit path for leaf nodes
    return totalNodes;
  }
  
  totalNodes = countWithoutStatic(n->left, totalNodes);
  totalNodes = countWithoutStatic(n->right, totalNodes);
  totalNodes++;

  // exit path for non-leaf nodes
  return totalNodes;
}

int count(Node *n) {
  static int totalNodes;
  if (n == nullptr) {
    // exit path for leaf nodes
    return 0;
  }
  
  count(n->left);
  count(n->right);
  totalNodes++;
  // Implement count() here.

  // exit path for non-leaf nodes
  return totalNodes;
}

int main() {
  Node *n = new Node();
  n->left = new Node();
  n->right = new Node();
  n->right->left = new Node();
  n->right->right = new Node();
  n->right->right->right = new Node();

  // This should print a count of six nodes
  std::cout << count(n) << std::endl;

  // Deleting n is sufficient to delete the entire tree
  // because this will trigger the recursively-defined
  // destructor of the Node class.
  delete n;
  n = nullptr;

  return 0;
}