#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// struct node * search(struct node* root, int key){
//     if(root==NULL){
//         return NULL;
//     }
//     if(key==root->data){
//         return root;
//     }
//     else if(key<root->data){
//         return search(root->left, key);
//     }
//     else{
//         return search(root->right, key);
//     }
// }

int main()
{
    struct node *p = createNode(88);
    struct node *p1 = createNode(61);
    struct node *p2 = createNode(37);
    struct node *p3 = createNode(23);
    struct node *p4 = createNode(76);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("PreOrder : ");
    preOrder(p);
    printf("\n");
    printf("InOrder : ");
    inOrder(p);
    printf("\n");
    printf("PostOrder : ");
    postOrder(p);

    printf("\n");
    printf("%d", isBST(p));
    if(isBST(p)){
        printf("\nThis tree is a BST");
    }
    else{
        printf("\nThis tree is not a BST");
    }
    return 0;
}