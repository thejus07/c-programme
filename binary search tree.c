#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        int root;
        int key;
        struct node *left;
        struct node *right;
        struct node *next;
        struct node *prev;
    }*temp,*root,*next,*prev,*head;
    void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->prev);
        printf("%d ", root->key);
        inorder(root->next);
    }
}
        int delete(struct node* root, int key)
        {
            if(root==NULL)
            {
              return root;
            }
             else if (key < root->key)
             {
                 root->prev= delete(root->prev, key);
             }
          else if (key > root->key)
          {
              root->next = delete(root->next, key);
          }
          else if (key > root->key)
         {
              root->next = delete(root->next, key);
         }

    else
        {
        if (root->prev == NULL) {
        temp = root->next;
            free(root);
           // return temp;
        }
        else if (root->prev == NULL) {
        temp = root->left;
            free(root);
            //return temp;
        }

        }
    int main()
    {
        int i,size,key;
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            root=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&root->data);
            root->next=NULL;
            root->prev=NULL;
            if(head==NULL)
            {
                head=root;
                temp=root;
            }
            else
                {
                    temp->next=root;
                    root->prev=temp;
                    temp=temp->next;
                }
        }
        printf("enter the delete node: ");
        scanf("%d",&key);
        printf("%d",delete(root,key));
        inorder(root);
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
             temp=temp->next;
        }
return 0;
    }
