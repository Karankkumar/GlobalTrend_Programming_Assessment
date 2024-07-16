// Given a non-empty binary tree, find the maximum path sum. A path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.The function should return an integer representing the maximum path sum.
                            
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int findMaxPathSum(Node* root, int &maxi) {
    if (root == nullptr) {
        return 0;
    }
    
    int leftMaxPath = max(0, findMaxPathSum(root->left, maxi));
    int rightMaxPath = max(0, findMaxPathSum(root->right, maxi));
    maxi = max(maxi, leftMaxPath + rightMaxPath + root->data);
    return max(leftMaxPath, rightMaxPath) + root->data;
}

int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(66);
    root->left->right->right->right = new Node(77);

    int maxi = INT_MIN; 
    findMaxPathSum(root, maxi);
    
    cout << "maximum path sum: " << maxi << endl;

    return 0;
}
                            
                        