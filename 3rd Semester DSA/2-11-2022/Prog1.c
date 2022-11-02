// 1. Write the following menu driven program for the binary search tree
// ----------------------------------------
// Binary Search Tree Menu
// ----------------------------------------
// 0. Quit
// 1. Create
// 2. In-Order Traversal
// 3. Pre-Order Traversal
// 4. Post-Order traversal
// 5. Search
// 6. Find Smallest Element
// 7. Find Largest Element
// 8. Deletion of Tree

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void create()
{
    struct node *newNode, *temp;
    int data;
    printf("Enter data to be inserted: ");
    scanf("%d", &data);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    temp = root;
    while (true)
    {
        if (data < temp->data)
        {
            if (temp->left == NULL)
            {
                temp->left = newNode;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = newNode;
                return;
            }
            temp = temp->right;
        }
    }
}

void inOrder(struct node *temp)
{
    if (temp == NULL)
        return;
    inOrder(temp->left);
    printf("%d ", temp->data);
    inOrder(temp->right);
}

void preOrder(struct node *temp)
{
    if (temp == NULL)
        return;
    printf("%d ", temp->data);
    preOrder(temp->left);
    preOrder(temp->right);
}

void postOrder(struct node *temp)
{
    if (temp == NULL)
        return;
    postOrder(temp->left);
    postOrder(temp->right);
    printf("%d ", temp->data);
}

struct node *search(struct node *temp, int data)
{
    if (temp == NULL)
        return NULL;
    if (temp->data == data)
        return temp;
    if (data < temp->data)
        return search(temp->left, data);
    else
        return search(temp->right, data);
}

struct node *findSmallest(struct node *temp)
{
    if (temp == NULL)
        return NULL;
    if (temp->left == NULL)
        return temp;
    return findSmallest(temp->left);
}

struct node *findLargest(struct node *temp)
{
    if (temp == NULL)
        return NULL;
    if (temp->right == NULL)
        return temp;
    return findLargest(temp->right);
}

void deleteTree(struct node *temp)
{
    if (temp == NULL)
        return;
    deleteTree(temp->left);
    deleteTree(temp->right);
    free(temp);
}

int main()
{
    int choice;
    struct node *temp;
    while (true)
    {
        printf("Binary Search Tree Menu");
        printf("----------------------------------------");
        printf("0. Quit");
        printf("1. Create");
        printf("2. In-Order Traversal");
        printf("3. Pre-Order Traversal");
        printf("4. Post-Order traversal");
        printf("5. Search");
        printf("6. Find Smallest Element");
        printf("7. Find Largest Element");
        printf("8. Deletion of Tree");
        printf("----------------------------------------");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            create();
            break;
        case 2:
            inOrder(root);
            printf("");
            break;
        case 3:
            preOrder(root);
            printf("");
            break;
        case 4:
            postOrder(root);
            printf("");
            break;
        case 5:
            printf("Enter data to be searched: ");
            scanf("%d", &choice);
            temp = search(root, choice);
            if (temp == NULL)
                printf("Data not found!");
            else
                printf("Data found!");
            break;
        case 6:
            temp = findSmallest(root);
            if (temp == NULL)
                printf("Tree is empty!");
            else
                printf("Smallest element is %d", temp->data);
            break;
        case 7:
            temp = findLargest(root);
            if (temp == NULL)
                printf("Tree is empty!");
            else
                printf("Largest element is %d", temp->data);
            break;
        case 8:
            deleteTree(root);
            root = NULL;
            printf("Tree deleted!");
            break;
        default:
            printf("Invalid choice!");
        }
    }
    return 0;
}