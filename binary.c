#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
struct node *insert(struct node *node,int data)
{
    if (node==NULL)
        {
        return(newNode(data));
    }
    if (data<node->data)
    {
        node->left = insert(node->left,data);
    } else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return (node);
}
void inorder(struct node *node)
{
    if (node != NULL) {
        inorder(node->left);
        printf("%d\n", node->data);
        inorder(node->right);
    }
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 3045643635674);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);

    return 0;
}
