/*Binary tree -> a tree is a binary tree when every node has at most two children

    Terminologies -

    1. Leaf -> a node with no children
    2. internal node -> a node which is not a leaf
    3. Siblings -> the children of same parent
    4. Length Path -> length of path is 1 less then the number of nodes on the path
    5. Ancestors and Descendents -> if there is a path from node A to Node B, then A is called an ancestor of B and B is called a descendent of A
    6 -> subtree -> any node of a tree, with all of its descendents is a subtree
    7-> Level -> the level of the node referes to its distance from the root, the root of the tree has generally level 0
    8 -> height -> the maximum level in a tree determines its height, The height of a node in a tree is the length of the longest path from that node to a leaf
    9-> Depth -> the depth of a node is the number of nodes along the path from the root to that node



        Properties of BT
        1-> if h = height of a binary tree, then
            a -> maximum number of leaves = 2^h
            b-> maximum number of nodes = 2^(h+1) - 1
        2-> if a binary tree contains m nodes at level l, it contains at most 2m nodes at 
            level l + 1
        3 -> since a binary tree can contain at most 1 node at level 0(root), it can contain at most 2^l nodes at level l
        4-> the total number of edges in a full binary tree with n nodes is n - 1
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
int countNodes(Node* root) {
        // code here
        if(root == NULL){
            return 0;
        }
        int lc = countNodes(root->left);
        int rc = countNodes(root->right);
        return lc + rc + 1;
}
int countNodes1(Node* root) {
        // code here
        if(root==NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        int lc = countNodes1(root->left);
        int rc = countNodes1(root->right);
        return lc + rc;
}

int main(){
     Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Total Number of Nodes: "<<countNodes(root)<<endl;
    cout<<countNodes1(root);
}