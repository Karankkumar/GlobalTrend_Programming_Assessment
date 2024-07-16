// Design an algorithm to serialize and deserialize a binary tree. Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment. Implement the serialize and deserialize methods.
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

string serialize(TreeNode* root) {
   if(!root) return "";
   string s= "";
   queue<TreeNode*> q;
   q.push(root);
   while(!q.empty()){
      TreeNode* node = q.front();
      q.pop();
      if(node == nullptr) s += "*,";
      else s += to_string(node->val) + ',';

      if(node != nullptr){
        q.push(node->left);
        q.push(node->right);
      }
   }

   return s;
}

    
TreeNode* deserialize(string data) {
    if(data.empty()) return nullptr;

    stringstream s(data); 
    string str;
    getline(s,str,',');
    TreeNode* root = new TreeNode(stoi(str));
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        getline(s,str,',');
        if(str != "*"){
            TreeNode* left = new TreeNode(stoi(str));
            node->left = left;
            q.push(left);
        }
        
        getline(s,str,',');
        if(str != "*"){
            TreeNode* right = new TreeNode(stoi(str));
            node->right = right;
            q.push(right);
        }
    }

    return root;
}

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    cout << "initial tree" << endl;
    inorder(root);
    cout << endl;

    string s = serialize(root);
    cout << "after serialization: " <<  s << endl;

    cout << "after deserialization: " << endl;
    TreeNode* node = deserialize(s);
    inorder(node);
    
}