#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root,*newnode;
struct node *create()
{
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
    {N
        return 0;
    }
    else
    {
        newnode->data=x;
        printf("\nenter the left child : %d",x);
        newnode->left=create();
        printf("\nenter the right child : %d");
        newnode->right=create();
        return newnode;
    }
};
void main()
{
    root=create();
    printf("%d ",root);
    scanf("%d",new->data);

}
