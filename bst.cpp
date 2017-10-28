#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    struct node *right, *left;
};
struct node* newNode(int key){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = key;
    temp->right = temp->left = NULL;
    return temp;
}
void putIn(struct node *node, int key){
    if(key <= node->key && node->left!=NULL)
        putIn(node->left, key);
    else if(key <= node->key && node->left==NULL)
        node->left=newNode(key);
    else if(key > node->key && node->right!=NULL)
        putIn(node->right, key);
    else if(key > node->key && node->right==NULL)
        node->right=newNode(key);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("v = %d \n", root->key);
        inorder(root->right);
    }
}

int main(){
    struct node *root = NULL;
    root = newNode(1);
    putIn(root,4);
    putIn(root,2);
    putIn(root,6);
    putIn(root,5);
    inorder(root);
    return 0;
}
