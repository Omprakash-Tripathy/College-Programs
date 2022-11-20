struct node* insert(struct node *root, int key)
{
    if(root==NULL)
    {
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = key;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
    if(root != NULL)
    {
    while (root != NULL)
    {
        if (key == root->data)
        {
            return ;
        }
        if(key < root->data)
        {
            root->left =  insert(root->left, key);
        }
        if(key > root->data)
        {
            root->right =  insert(root->data , key);
        }
    }
    }

}