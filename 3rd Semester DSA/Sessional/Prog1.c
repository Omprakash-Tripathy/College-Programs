#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *newNode(char data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void preorder(struct node *node)
{
    if (node == NULL)
    {
        return;
    }
    printf("%c ", node->data);
    preorder(node->left);
    preorder(node->right);
}

void inorder(struct node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    printf("%c ", node->data);
    inorder(node->right);
}

void postorder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    postorder(node->right);
    postorder(node->left);
    printf("%c ", node->data);
}

int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
}

struct node *buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;

    if (inStrt > inEnd)
    {
        return NULL;
    }
    struct node *tNode = newNode(pre[preIndex++]);

    if (inStrt == inEnd)
    {
        return tNode;
    }
    int inIndex = search(in, inStrt, inEnd, tNode->data);

    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

    return tNode;
}

int main()
{
    char in[] = {'D', 'H', 'B', 'E', 'A', 'I', 'F', 'C', 'J', 'G', 'K'};
    char pre[] = {'A', 'B', 'D', 'H', 'E', 'C', 'F', 'I', 'G', 'J', 'K'};
    int len = sizeof(in) / sizeof(in[0]);
    struct node *root = buildTree(in, pre, 0, len - 1);
    printf("Postorder traversal of the constructed tree is \n");
    postorder(root);
}