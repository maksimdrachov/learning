// C function to search a given key in a given BST

struct node* search(struct node* root, int key)
{
    // Base case: root is null or key is present at root
    if (root == NULL || root->key == key)
        return root;
    
    // Key is greater than root's key
    if (root->key < key)
        return search (root->right, key);
    
    // Key is smaller than root's key
    return search(root->left, key);
}

// C++ program to demonstrate insertion in a BST recursively
#include <iostream>

class BST {
    int data;
    BST *left, *right;

    public:
        // Default constructor
        BST();

        // Parameterized constructor
        BST(int);

        // Insert function
        BST* Insert(BST*, int);

        // Inorder traversal
        void Inorder(BST*);
};

// Default Constructor definition
BST::BST(): data(0), left(NULL), right(NULL) {}

// Parametrized Constructor definition
BST::BST(int value){
    data = value;
    left = NULL;
    right = NULL;
}

// Insert function definition
BST* BST::Insert(BST* root, int value)
{
    if (!root) {
        // Insert the first node, if root is NULL
        return new BST(value);
    }

    // Insert data
    if (value > root->data) {
        // Insert right node data, if the value
        // to be inserted is greater than root data

        // Process right nodes
        root->right = Insert(root->right, value);
    }
    else {
        // Insert left node data, if the value
        // to be inserted is greater than 'root' node data

        // Process left nodes
        root->left = Insert(root->left, value);
    }

    // Return root node, after insertion
    return root;
}

// Inorder traversal function
// This gives data in sorted order

void BST::Inorder(BST* root) {
    if (!root) {
        return;
    }
    Inorder(root->left);
    std::cout << root->data << std::endl;
    Inorder(root->right);
}

/* C++ program to demonstrate delete operation in binary search tree */
#include <bits/stdc++.h>

struct node {
    int key;
    struct node *left, *right;
};

/* A utility function to create a new BST node */
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct nude));

    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

/* A utility function to do inorder traversal of BST */
void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        std::cout << root->key;
        inorder(root->right);
    }
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else   
        node->right = insert(node->right, key);
    
    /* return the (unchanged) node pointer */
    return node;
}

/*  Given a non-empty binary search tree, return the node
    with minimun key value found in that three. Note that the
    entire tree does not need to be searched. */
struct node* minValueNode(struct node* node)
{
    struct node* current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

/*  Given a binary search tree and a key, this function
    deletes the key and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
    /* base case */
    if (root == NULL)
        return root;
    
    /*  If the key to be deleted is smaller than the root's
        key, then it lies in left subtree */
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    
    /*  If the key to be deleted is 
        greater than the root's
        key, then it list in right subtree */
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    
    /*  If key is same as root's key, then this
        is the node to be deleted */
    else {
        /*  node has no child */
        if (root->left==NULL && root->right==NULL)
            return NULL;
        
        /* node with only one child or no child */
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        /*  Node with 2 children: get the Inorder successor
            (smallest in the right subtree) */
        struct node* temp = minValueNode(root->right);

        /* Copy the inorder successor's content to this node */
        root->key = temp->key;

        /* Delete the inorder successor */
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

/*  A recursive CPP program to find
    LCA of two nodes n1 and n2. */

class node
{
    public:
        int data;
        node* left;
        node* right;
};

/*  Function to find LCA of n1 and n2
    The function assumes that both
    n1 and n2 are present in BST */
node *lca(node* root, int n1, int n2)
{
    if (root == NULL) return NULL;

    /*  If both n1 and n2 are smaller
        than root, then LCA lies in left part */
    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);
    
    /*  If both n1 and n2 are greater than
        root, then LCA lies in right */
    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2);
    
    return root;
}

