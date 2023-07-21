
#include<stdio.h>
#include<stdlib.h>
struct newnode
{
    int data;
         struct node *next;
}*head= NULL ,*temp=NULL ,*newnode=NULL;
int main()
{
    int size;
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    { newnode = (struct node*) malloc (sizeof (struct node*));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    //insertion at the front
    int edata;
    newnode = (struct node*) malloc (sizeof (struct node*));
    printf("Enter the value : ");
    scanf("%d",&edata);



}
